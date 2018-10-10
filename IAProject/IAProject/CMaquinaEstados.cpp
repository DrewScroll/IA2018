#include "pch.h"
#include "CMaquinaEstados.h"

#include "CEstado_Ayuda.h"
#include "CEstado_GameOver.h"
#include "CEstado_Gameplay.h"
#include "CEstado_Graphics.h"
#include "CEstado_Juego.h"
#include "CEstado_Logo.h"
#include "CEstado_Menu.h"
#include "CEstado_Opciones.h"
#include "CEstado_Pausa.h"
#include "CEstado_Sonido.h"

CMaquinaEstados::CMaquinaEstados() {
  m_stateMap[STATE_UNDEFINED] = nullptr;
  m_stateMap[STATE_HELP] = new CEstado_Ayuda();
  m_stateMap[STATE_GAMEOVER] = new CEstado_GameOver();
  m_stateMap[STATE_GAMEPLAY] = new CEstado_Gameplay();
  m_stateMap[STATE_GRAPHICS] = new CEstado_Graphics();
  m_stateMap[STATE_GAME] = new CEstado_Juego();
  m_stateMap[STATE_LOGO] = new CEstado_Logo();
  m_stateMap[STATE_MENU] = new CEstado_Menu();
  m_stateMap[STATE_OPTIONS] = new CEstado_Opciones();
  m_stateMap[STATE_PAUSE] = new CEstado_Pausa();
  m_stateMap[STATE_SOUND] = new CEstado_Sonido();
}

CMaquinaEstados::~CMaquinaEstados() {
  while (!m_stateStack.empty()) {
    m_stateStack.pop();
  }

  for (auto state : m_stateMap) {
    if (nullptr != state.second) {
      delete state.second;
    }
  }
  m_stateMap.clear();
}

void CMaquinaEstados::Init(sf::RenderWindow* _window) {
  m_pMWindow = _window;
  for (auto it : m_stateMap) {
    it.second->SetMachine(this, m_pMWindow);
  }
  m_pActiveState = m_stateMap[STATE_LOGO];
  //m_pTempState = NULL;
  //m_stateStack.push(m_stateMap[STATE_LOGO]);
}

void CMaquinaEstados::Update(sf::Event* _event) {
  m_pActiveState->onUpdate(_event);
}

void CMaquinaEstados::Render() {
  m_pActiveState->drawScreen();
}

void CMaquinaEstados::SetState(STATES newState) {
  /*RemoveState();
  AddState(newState);*/
  m_pActiveState = m_stateMap[newState];
}

void CMaquinaEstados::AddState(STATES newState) {
  m_stateStack.push(m_pActiveState);
  m_pActiveState = m_stateMap[newState];
  m_pActiveState->SetMachine(this, m_pMWindow);
  m_pActiveState->onEnter();
  /*m_stateStack.push(m_stateMap[newState]);
  m_pActiveState = m_stateStack.top();*/
}

void CMaquinaEstados::RemoveState() {
  m_pActiveState->onExit();
  m_pActiveState = m_stateStack.top();
  m_stateStack.pop();
 /*m_pActiveState = nullptr;*/
}

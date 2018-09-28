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
  m_StateMap[STATE_UNDEFINED] = nullptr;
  m_StateMap[STATE_HELP] = new CEstado_Ayuda();
  m_StateMap[STATE_GAMEOVER] = new CEstado_GameOver();
  m_StateMap[STATE_GAMEPLAY] = new CEstado_Gameplay();
  m_StateMap[STATE_GRAPHICS] = new CEstado_Graphics();
  m_StateMap[STATE_GAME] = new CEstado_Juego();
  m_StateMap[STATE_LOGO] = new CEstado_Logo();
  m_StateMap[STATE_MENU] = new CEstado_Menu();
  m_StateMap[STATE_OPTIONS] = new CEstado_Opciones();
  m_StateMap[STATE_PAUSE] = new CEstado_Pausa();
  m_StateMap[STATE_SOUND] = new CEstado_Sonido();
}

CMaquinaEstados::~CMaquinaEstados() {
  while (!currentState.empty()) {
    currentState.pop();
  }

  for (auto state : m_StateMap) {
    if (nullptr != state.second) {
      delete state.second;
    }
  }
  m_StateMap.clear();
}

void CMaquinaEstados::Init(sf::RenderWindow* _window) {
  m_pMWindow = _window;
  currentState.push(m_StateMap[STATE_LOGO]);
  currentState.top()->SetMachine(this, m_pMWindow);
}

void CMaquinaEstados::Update(sf::Event* _event) {
  currentState.top()->m_Event = _event;
  currentState.top()->onUpdate();
}

void CMaquinaEstados::SetState(STATES newState) {
  PopState();
  PushState(newState);
}

void CMaquinaEstados::PushState(STATES newState) {
  currentState.push(m_StateMap[newState]);
  currentState.top()->SetMachine(this, m_pMWindow);
  currentState.top()->onEnter();
}

void CMaquinaEstados::PopState() {
  currentState.top()->onExit();
  currentState.pop();
}

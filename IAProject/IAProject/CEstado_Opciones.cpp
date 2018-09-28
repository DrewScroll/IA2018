#include "pch.h"
#include "CEstado_Opciones.h"


CEstado_Opciones::CEstado_Opciones() {}


CEstado_Opciones::~CEstado_Opciones() {}

void CEstado_Opciones::onEnter() {}

void CEstado_Opciones::onUpdate() {
  drawScreen(m_pWindow);
  if (m_Event->KeyPressed == sf::Keyboard::Num1 || m_Event->KeyPressed == sf::Keyboard::Numpad1) {
    m_pStateMachine->PushState(STATE_GAMEPLAY);
  }
  else if (m_Event->KeyPressed == sf::Keyboard::Num2 || m_Event->KeyPressed == sf::Keyboard::Numpad2) {
    m_pStateMachine->PushState(STATE_GRAPHICS);
  }
  else if (m_Event->KeyPressed == sf::Keyboard::Num3 || m_Event->KeyPressed == sf::Keyboard::Numpad3) {
    m_pStateMachine->PushState(STATE_SOUND);
  }
  else if (m_Event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->PopState();
  }
}

void CEstado_Opciones::onExit() {}

void CEstado_Opciones::drawScreen(sf::RenderWindow* _window) {
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Options Menu/nSelect one of the following options/n 1 = Gameplay/n 2 = Graphics/n 3 = Sound");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

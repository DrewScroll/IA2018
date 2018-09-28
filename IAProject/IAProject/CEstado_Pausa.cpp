#include "pch.h"
#include "CEstado_Pausa.h"


CEstado_Pausa::CEstado_Pausa() {}


CEstado_Pausa::~CEstado_Pausa() {}

void CEstado_Pausa::onEnter() {}

void CEstado_Pausa::onUpdate() {
  drawScreen(m_pWindow);
  if (m_Event->KeyPressed == sf::Keyboard::Num1 || m_Event->KeyPressed == sf::Keyboard::Numpad1) {
    m_pStateMachine->PushState(STATE_OPTIONS);
  }
  else if (m_Event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->PopState();
  }
}

void CEstado_Pausa::onExit() {}

void CEstado_Pausa::drawScreen(sf::RenderWindow* _window){
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Pause Menu/n For options, press 1/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

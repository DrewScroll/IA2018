#include "pch.h"
#include "CEstado_Pausa.h"


CEstado_Pausa::CEstado_Pausa() {
  myText.setString("Pause Menu/n For options, press 1/n To leave, press ESC");

  //drawScreen();
}


CEstado_Pausa::~CEstado_Pausa() {}

void CEstado_Pausa::onEnter() {}

void CEstado_Pausa::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Num1 || _event->KeyPressed == sf::Keyboard::Numpad1) {
    m_pStateMachine->AddState(STATE_OPTIONS);
  }
  else if (_event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->RemoveState();
  }
}

void CEstado_Pausa::onExit() {}

void CEstado_Pausa::drawScreen(){
  /*sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Pause Menu/n For options, press 1/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }*/
  m_pWindow->draw(myText);
}

#include "pch.h"
#include "CEstado_Opciones.h"


CEstado_Opciones::CEstado_Opciones() {
  myText.setString("Options Menu/nSelect one of the following options/n 1 = Gameplay/n 2 = Graphics/n 3 = Sound");

  //drawScreen();
}


CEstado_Opciones::~CEstado_Opciones() {}

void CEstado_Opciones::onEnter() {}

void CEstado_Opciones::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Num1 || _event->KeyPressed == sf::Keyboard::Numpad1) {
    m_pStateMachine->AddState(STATE_GAMEPLAY);
  }
  else if (_event->KeyPressed == sf::Keyboard::Num2 || _event->KeyPressed == sf::Keyboard::Numpad2) {
    m_pStateMachine->AddState(STATE_GRAPHICS);
  }
  else if (_event->KeyPressed == sf::Keyboard::Num3 || _event->KeyPressed == sf::Keyboard::Numpad3) {
    m_pStateMachine->AddState(STATE_SOUND);
  }
  else if (_event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->RemoveState();
  }
}

void CEstado_Opciones::onExit() {}

void CEstado_Opciones::drawScreen() {
  /*sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Options Menu/nSelect one of the following options/n 1 = Gameplay/n 2 = Graphics/n 3 = Sound");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }*/
  m_pWindow->draw(myText);
}

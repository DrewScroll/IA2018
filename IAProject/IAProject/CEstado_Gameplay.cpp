#include "pch.h"
#include "CEstado_Gameplay.h"


CEstado_Gameplay::CEstado_Gameplay() {
  myText.setString("Gameplay Options/n Modify Gameplay Options/n To leave, press ESC");

  //drawScreen();
}


CEstado_Gameplay::~CEstado_Gameplay() {}

void CEstado_Gameplay::onEnter() {}

void CEstado_Gameplay::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->RemoveState();
  }
}

void CEstado_Gameplay::onExit() {}

void CEstado_Gameplay::drawScreen() {
  //sf::Text myText;
  //sf::Font myFont;
  //if (!myFont.loadFromFile("arial.ttf")) {
  //  printf("File not found");
  //}
  //else {
  //  myText.setFont(myFont);
  //  myText.setString("Gameplay Options/n Modify Gameplay Options/n To leave, press ESC");
  //  myText.setCharacterSize(24);
  //  myText.setFillColor(sf::Color::Black);
  //}
  m_pWindow->draw(myText);
}

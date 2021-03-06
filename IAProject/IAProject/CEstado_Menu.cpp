#include "pch.h"
#include "CEstado_Menu.h"


CEstado_Menu::CEstado_Menu() {
  myText.setString("Main Menu/nSelect one of the following options/n 1 = Play game/n 2 = Options");

  //drawScreen();
}

CEstado_Menu::~CEstado_Menu() {}

void CEstado_Menu::onEnter() {}

void CEstado_Menu::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Num1||_event->KeyPressed == sf::Keyboard::Numpad1) {
    m_pStateMachine->SetState(STATE_GAME);
  }
  else if (_event->KeyPressed == sf::Keyboard::Num2 || _event->KeyPressed == sf::Keyboard::Numpad2) {
    m_pStateMachine->AddState(STATE_OPTIONS);
  }
}

void CEstado_Menu::onExit() {}

void CEstado_Menu::drawScreen() {
  //sf::Text myText;
  //sf::Font myFont;
  //if (!myFont.loadFromFile("arial.ttf")) {
  //  printf("File not found");
  //}
  //else {
  //  myText.setFont(myFont);
  //  myText.setString("Main Menu/nSelect one of the following options/n 1 = Play game/n 2 = Options");
  //  myText.setCharacterSize(24);
  //  myText.setFillColor(sf::Color::Black);
  //}
  m_pWindow->draw(myText);
}

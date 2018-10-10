#include "pch.h"
#include "CEstado_Juego.h"


CEstado_Juego::CEstado_Juego() {
  myText.setString("PLAYING GAME!!!!/nSelect following options/n 1 = Help/n 2 = Pause/n 3 = Game Over");

  //drawScreen();
}


CEstado_Juego::~CEstado_Juego() {}

void CEstado_Juego::onEnter() {}

void CEstado_Juego::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Num1 || _event->KeyPressed == sf::Keyboard::Numpad1) {
    m_pStateMachine->AddState(STATE_HELP);
  }
  else if (_event->KeyPressed == sf::Keyboard::Num2 || _event->KeyPressed == sf::Keyboard::Numpad2) {
    m_pStateMachine->AddState(STATE_PAUSE);
  }
  else if (_event->KeyPressed == sf::Keyboard::Num3 || _event->KeyPressed == sf::Keyboard::Numpad3) {
    m_pStateMachine->AddState(STATE_GAMEOVER);
  }
}

void CEstado_Juego::onExit() {}

void CEstado_Juego::drawScreen() {
  //sf::Text myText;
  //sf::Font myFont;
  //if (!myFont.loadFromFile("arial.ttf")) {
  //  printf("File not found");
  //}
  //else {
  //  myText.setFont(myFont);
  //  myText.setString("PLAYING GAME!!!!/nSelect following options/n 1 = Help/n 2 = Pause/n 3 = Game Over");
  //  myText.setCharacterSize(24);
  //  myText.setFillColor(sf::Color::Black);
  //}  
  m_pWindow->draw(myText);
}

#include "pch.h"
#include "CEstado_GameOver.h"


CEstado_GameOver::CEstado_GameOver() {
  myText.setString("GAME OVER/n To start again, press Enter/n To leave, press ESC");
  //drawScreen();
}


CEstado_GameOver::~CEstado_GameOver() {}

void CEstado_GameOver::onEnter() {}

void CEstado_GameOver::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Enter) {
    m_pStateMachine->RemoveState();
  }
  else if (_event->KeyPressed == sf::Keyboard::Escape) {
    while (!m_pStateMachine->m_stateStack.empty()) {
      m_pStateMachine->RemoveState();
    }
    m_pStateMachine->SetState(STATE_MENU);
  }
}

void CEstado_GameOver::onExit() {}

void CEstado_GameOver::drawScreen() {
 /* sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("GAME OVER/n To start again, press Enter/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }*/
  m_pWindow->draw(myText);
}

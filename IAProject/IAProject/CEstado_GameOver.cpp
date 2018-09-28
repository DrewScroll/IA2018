#include "pch.h"
#include "CEstado_GameOver.h"


CEstado_GameOver::CEstado_GameOver() {}


CEstado_GameOver::~CEstado_GameOver() {}

void CEstado_GameOver::onEnter() {}

void CEstado_GameOver::onUpdate() {
  drawScreen(m_pWindow);
  if (m_Event->KeyPressed == sf::Keyboard::Enter) {
    m_pStateMachine->PopState();
  }
  else if (m_Event->KeyPressed == sf::Keyboard::Escape) {
    while (!m_pStateMachine->currentState.empty()) {
      m_pStateMachine->PopState();
    }
    m_pStateMachine->SetState(STATE_MENU);
  }
}

void CEstado_GameOver::onExit() {}

void CEstado_GameOver::drawScreen(sf::RenderWindow* _window) {
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("GAME OVER/n To start again, press Enter/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

#include "pch.h"

#include <SFML/System/Clock.hpp>
#include "CEstado_Logo.h"

CEstado_Logo::CEstado_Logo() {}

CEstado_Logo::~CEstado_Logo() {}

void CEstado_Logo::onEnter() {

}

void CEstado_Logo::onUpdate() {
  drawScreen(m_pWindow);
  float elapsed = clock.getElapsedTime().asSeconds();
  if (elapsed >= 50) {
    m_pStateMachine->SetState(STATE_MENU);
  }
}

void CEstado_Logo::onExit() {

}

void CEstado_Logo::drawScreen(sf::RenderWindow* _window) {
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Company Logo");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }

}

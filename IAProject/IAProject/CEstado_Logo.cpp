#include "pch.h"
#include <fstream>

#include <SFML/System/Clock.hpp>
#include "CEstado_Logo.h"

CEstado_Logo::CEstado_Logo() {
  myText.setString("Company Logo");
}

CEstado_Logo::~CEstado_Logo() {}

void CEstado_Logo::onEnter() {

}

void CEstado_Logo::onUpdate(sf::Event* _event) {
  float elapsed = clock.getElapsedTime().asSeconds();
  if (elapsed >= 50) {
    m_pStateMachine->SetState(STATE_MENU);
  }
}

void CEstado_Logo::onExit() {

}

void CEstado_Logo::drawScreen() {
 /* sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Company Logo");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }*/
  m_pWindow->draw(myText);
}

#include "pch.h"
#include "CEstado_Gameplay.h"


CEstado_Gameplay::CEstado_Gameplay() {}


CEstado_Gameplay::~CEstado_Gameplay() {}

void CEstado_Gameplay::onEnter() {}

void CEstado_Gameplay::onUpdate() {
  drawScreen(m_pWindow);
  if (m_Event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->PopState();
  }
}

void CEstado_Gameplay::onExit() {}

void CEstado_Gameplay::drawScreen(sf::RenderWindow* _window) {
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Gameplay Options/n Modify Gameplay Options/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

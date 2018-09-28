#include "pch.h"
#include "CEstado_Sonido.h"


CEstado_Sonido::CEstado_Sonido() {}


CEstado_Sonido::~CEstado_Sonido() {}

void CEstado_Sonido::onEnter() {}

void CEstado_Sonido::onUpdate() {
  drawScreen(m_pWindow);
  if (m_Event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->PopState();
  }
}

void CEstado_Sonido::onExit() {}

void CEstado_Sonido::drawScreen(sf::RenderWindow* _window) {
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Sound Options/n Modify Sound Options/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

#include "pch.h"
#include "CEstado_Ayuda.h"


CEstado_Ayuda::CEstado_Ayuda() {}


CEstado_Ayuda::~CEstado_Ayuda() {}

void CEstado_Ayuda::onEnter() {}

void CEstado_Ayuda::onUpdate() {
  drawScreen(m_pWindow);
  if (m_Event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->PopState();
  }
}

void CEstado_Ayuda::onExit() {}

void CEstado_Ayuda::drawScreen(sf::RenderWindow* _window) {
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Help/n Instructions for gameplay/n Press ESC to leave");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

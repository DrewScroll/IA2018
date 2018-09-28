#include "pch.h"
#include "CEstado_Graphics.h"


CEstado_Graphics::CEstado_Graphics() {}


CEstado_Graphics::~CEstado_Graphics() {}

void CEstado_Graphics::onEnter() {}

void CEstado_Graphics::onUpdate() {
  drawScreen(m_pWindow);
  if (m_Event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->PopState();
  }
}

void CEstado_Graphics::onExit() {}

void CEstado_Graphics::drawScreen(sf::RenderWindow* _window) {
  sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Graphics Options/n Modify Graphics Options/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

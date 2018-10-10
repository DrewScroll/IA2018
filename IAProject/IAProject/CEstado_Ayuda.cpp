#include "pch.h"
#include "CEstado_Ayuda.h"


CEstado_Ayuda::CEstado_Ayuda() {
  myText.setString("Help/n Instructions for gameplay/n Press ESC to leave");
  //drawScreen();
}


CEstado_Ayuda::~CEstado_Ayuda() {}

void CEstado_Ayuda::onEnter() {}

void CEstado_Ayuda::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->RemoveState();
  }
}

void CEstado_Ayuda::onExit() {}

void CEstado_Ayuda::drawScreen() {
 /* sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }*/
  m_pWindow->draw(myText);
}

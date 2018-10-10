#include "pch.h"
#include "CEstado_Graphics.h"


CEstado_Graphics::CEstado_Graphics() {
  myText.setString("Graphics Options/n Modify Graphics Options/n To leave, press ESC");

  //drawScreen();
}


CEstado_Graphics::~CEstado_Graphics() {}

void CEstado_Graphics::onEnter() {}

void CEstado_Graphics::onUpdate(sf::Event* _event) {
  if (_event->KeyPressed == sf::Keyboard::Escape) {
    m_pStateMachine->RemoveState();
  }
}

void CEstado_Graphics::onExit() {}

void CEstado_Graphics::drawScreen() {
  /*sf::Text myText;
  sf::Font myFont;
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setString("Graphics Options/n Modify Graphics Options/n To leave, press ESC");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }*/
  m_pWindow->draw(myText);

}

#include "pch.h"
#include "CEstado.h"


CEstado::CEstado() {
  SetFont();
}


CEstado::~CEstado() {}


void CEstado::SetFont() {
  if (!myFont.loadFromFile("arial.ttf")) {
    printf("File not found");
  }
  else {
    myText.setFont(myFont);
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::Black);
  }
}

void CEstado::SetMachine(CMaquinaEstados* pStateMachine, sf::RenderWindow* _window) {
  m_pStateMachine = pStateMachine;
  m_pWindow = _window;
}



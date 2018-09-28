#include "pch.h"
#include "CEstado.h"


CEstado::CEstado() {}


CEstado::~CEstado() {}

void CEstado::SetMachine(CMaquinaEstados* pStateMachine, sf::RenderWindow* _window) {
  m_pStateMachine = pStateMachine;
  m_pWindow = _window;
}



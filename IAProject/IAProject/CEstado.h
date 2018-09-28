#pragma once

#include <SFML/Graphics.hpp>
#include "CMaquinaEstados.h"

class CEstado
{
public:
  CEstado();
  ~CEstado();

  virtual void onEnter() = 0;
  virtual void onUpdate() = 0;
  virtual void onExit() = 0;
  virtual void drawScreen(sf::RenderWindow* _window) = 0;
  void SetMachine(CMaquinaEstados* pStateMachine, sf::RenderWindow* _window);

  CMaquinaEstados* m_pStateMachine;
  sf::RenderWindow* m_pWindow;
  sf::Event* m_Event;
};


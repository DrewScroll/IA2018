#pragma once

#include <SFML/Graphics.hpp>
#include "CMaquinaEstados.h"

class CEstado
{
public:
  CEstado();
  ~CEstado();

  virtual void onEnter() = 0;
  virtual void onUpdate(sf::Event* _event) = 0;
  virtual void onExit() = 0;
  virtual void drawScreen() = 0;
  void SetFont();
  void SetMachine(CMaquinaEstados* pStateMachine, sf::RenderWindow* _window);

  sf::Text myText;
  sf::Font myFont;
  CMaquinaEstados* m_pStateMachine;
  sf::RenderWindow* m_pWindow;
};


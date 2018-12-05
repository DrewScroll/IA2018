#pragma once
#include "CEstado.h"
class CEstado_Logo :
  public CEstado
{
public:
  CEstado_Logo();
  ~CEstado_Logo();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();

  sf::Clock clock;
};


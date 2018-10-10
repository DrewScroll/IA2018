#pragma once
#include "CEstado.h"
class CEstado_Logo :
  public CEstado
{
public:
  CEstado_Logo();
  ~CEstado_Logo();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();

  sf::Clock clock;
};


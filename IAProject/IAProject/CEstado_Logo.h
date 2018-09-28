#pragma once
#include "CEstado.h"
class CEstado_Logo :
  public CEstado
{
public:
  CEstado_Logo();
  ~CEstado_Logo();

  void onEnter();
  void onUpdate();
  void onExit();
  void drawScreen(sf::RenderWindow* _window);

  sf::Clock clock;
};


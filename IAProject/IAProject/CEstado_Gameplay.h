#pragma once
#include "CEstado.h"
class CEstado_Gameplay :
  public CEstado
{
public:
  CEstado_Gameplay();
  ~CEstado_Gameplay();

  void onEnter();
  void onUpdate();
  void onExit();
  void drawScreen(sf::RenderWindow* _window);
};


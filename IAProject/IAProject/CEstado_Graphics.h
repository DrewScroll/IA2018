#pragma once
#include "CEstado.h"
class CEstado_Graphics :
  public CEstado
{
public:
  CEstado_Graphics();
  ~CEstado_Graphics();

  void onEnter();
  void onUpdate();
  void onExit();
  void drawScreen(sf::RenderWindow* _window);
};


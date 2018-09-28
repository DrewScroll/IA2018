#pragma once
#include "CEstado.h"
class CEstado_Sonido :
  public CEstado
{
public:
  CEstado_Sonido();
  ~CEstado_Sonido();

  void onEnter();
  void onUpdate();
  void onExit();
  void drawScreen(sf::RenderWindow* _window);
};


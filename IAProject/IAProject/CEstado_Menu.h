#pragma once
#include "CEstado.h"
class CEstado_Menu :
  public CEstado
{
public:
  CEstado_Menu();
  ~CEstado_Menu();

  void onEnter();
  void onUpdate();
  void onExit();
  void drawScreen(sf::RenderWindow* _window);
};


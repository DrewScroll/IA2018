#pragma once
#include "CEstado.h"
class CEstado_Pausa :
  public CEstado
{
public:
  CEstado_Pausa();
  ~CEstado_Pausa();

  void onEnter();
  void onUpdate();
  void onExit();
  void drawScreen(sf::RenderWindow* _window);
};


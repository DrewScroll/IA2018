#pragma once
#include "CEstado.h"
class CEstado_Juego :
  public CEstado
{
public:
  CEstado_Juego();
  ~CEstado_Juego();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();
};


#pragma once
#include "CEstado.h"
class CEstado_Sonido :
  public CEstado
{
public:
  CEstado_Sonido();
  ~CEstado_Sonido();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();
};


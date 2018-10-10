#pragma once
#include "CEstado.h"
class CEstado_Graphics :
  public CEstado
{
public:
  CEstado_Graphics();
  ~CEstado_Graphics();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();
};


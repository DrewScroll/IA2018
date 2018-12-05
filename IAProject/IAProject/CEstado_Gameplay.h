#pragma once
#include "CEstado.h"
class CEstado_Gameplay :
  public CEstado
{
public:
  CEstado_Gameplay();
  ~CEstado_Gameplay();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


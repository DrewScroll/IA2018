#pragma once
#include "CEstado.h"
class CUnitDeadState :
  public CEstado
{
public:
  CUnitDeadState();
  ~CUnitDeadState();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  virtual void drawScreen();
};


#pragma once
#include "CEstado.h"
class CUnitIdleState :
  public CEstado
{
public:
  CUnitIdleState();
  ~CUnitIdleState();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  virtual void drawScreen();
};


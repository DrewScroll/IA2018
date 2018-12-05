#pragma once
#include "CEstado.h"
class CUnitAttackState :
  public CEstado
{
public:
  CUnitAttackState();
  ~CUnitAttackState();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  virtual void drawScreen();
};


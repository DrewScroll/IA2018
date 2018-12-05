#pragma once
#include "CEstado.h"
class CUnitRunState :
  public CEstado
{
public:
  CUnitRunState();
  ~CUnitRunState();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  virtual void drawScreen();
};


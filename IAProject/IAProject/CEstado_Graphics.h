#pragma once
#include "CEstado.h"
class CEstado_Graphics :
  public CEstado
{
public:
  CEstado_Graphics();
  ~CEstado_Graphics();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


#pragma once
#include "CEstado.h"
class CEstado_Sonido :
  public CEstado
{
public:
  CEstado_Sonido();
  ~CEstado_Sonido();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


#pragma once
#include "CEstado.h"
class CEstado_Ayuda :
  public CEstado
{
public:
  CEstado_Ayuda();
  ~CEstado_Ayuda();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


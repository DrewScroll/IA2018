#pragma once
#include "CEstado.h"
class CEstado_Opciones :
  public CEstado
{
public:
  CEstado_Opciones();
  ~CEstado_Opciones();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


#pragma once
#include "CEstado.h"
class CEstado_Juego :
  public CEstado
{
public:
  CEstado_Juego();
  ~CEstado_Juego();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


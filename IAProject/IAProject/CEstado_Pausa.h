#pragma once
#include "CEstado.h"
class CEstado_Pausa :
  public CEstado
{
public:
  CEstado_Pausa();
  ~CEstado_Pausa();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


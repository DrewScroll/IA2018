#pragma once
#include "CEstado.h"
class CEstado_Menu :
  public CEstado
{
public:
  CEstado_Menu();
  ~CEstado_Menu();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


#pragma once
#include "CEstado.h"
class CEstado_GameOver :
  public CEstado
{
public:
  CEstado_GameOver();
  ~CEstado_GameOver();

  virtual void onEnter();
  virtual void onUpdate(sf::Event* _event);
  virtual void onExit();
  void drawScreen();
};


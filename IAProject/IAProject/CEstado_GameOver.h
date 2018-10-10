#pragma once
#include "CEstado.h"
class CEstado_GameOver :
  public CEstado
{
public:
  CEstado_GameOver();
  ~CEstado_GameOver();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();
};


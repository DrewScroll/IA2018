#pragma once
#include "CEstado.h"
class CEstado_Pausa :
  public CEstado
{
public:
  CEstado_Pausa();
  ~CEstado_Pausa();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();
};


#pragma once
#include "CEstado.h"
class CEstado_Ayuda :
  public CEstado
{
public:
  CEstado_Ayuda();
  ~CEstado_Ayuda();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();
};


#pragma once
#include "CEstado.h"
class CEstado_Opciones :
  public CEstado
{
public:
  CEstado_Opciones();
  ~CEstado_Opciones();

  void onEnter();
  void onUpdate(sf::Event* _event);
  void onExit();
  void drawScreen();
};


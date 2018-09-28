#pragma once
#include "CEstado.h"
class CEstado_Opciones :
  public CEstado
{
public:
  CEstado_Opciones();
  ~CEstado_Opciones();

  void onEnter();
  void onUpdate();
  void onExit();
  void drawScreen(sf::RenderWindow* _window);
};


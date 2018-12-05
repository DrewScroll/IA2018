#pragma once
#include "CMaquinaEstados.h"

class CEstado;

enum UNIT_STATE
{
  STATE_UNDEFINED = 0,
  STATE_ATTACK,
  STATE_DEAD,
  STATE_IDLE,
  STATE_RUN
};

class CUnitStateMachine : CMaquinaEstados
{
public:
  CUnitStateMachine();
  ~CUnitStateMachine();

  std::map <UNIT_STATE, CEstado*> m_UnitStateMap;
  CEstado* m_pUnitActiveState;

  virtual void SetState(UNIT_STATE newstate);
};


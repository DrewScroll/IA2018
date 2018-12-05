#include "pch.h"
#include "CUnitStateMachine.h"
#include "CUnitAttackState.h"
#include "CUnitDeadState.h"
#include "CUnitIdleState.h"
#include "CUnitRunState.h"

CUnitStateMachine::CUnitStateMachine() {
  m_UnitStateMap[STATE_UNDEFINED] = nullptr;
  m_UnitStateMap[STATE_ATTACK] = new CUnitAttackState();
  m_UnitStateMap[STATE_DEAD] = new CUnitDeadState();
  m_UnitStateMap[STATE_IDLE] = new CUnitIdleState();
  m_UnitStateMap[STATE_RUN] = new CUnitRunState();
}


CUnitStateMachine::~CUnitStateMachine() {}

void CUnitStateMachine::SetState(UNIT_STATE newState) {
  m_pUnitActiveState = m_UnitStateMap[newState];
}

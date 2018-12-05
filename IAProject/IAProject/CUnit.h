#pragma once
#include <string.h>

class CUnitStateMachine;

class CUnit
{
public:
  CUnit(int TypeID, int PlayerID);
  ~CUnit();

  int iID;
  int iID_Type;
  int iID_Player;
  int iHP_Counter;
  std::string cRotation;
  CUnitStateMachine* m_StateMachine;

};


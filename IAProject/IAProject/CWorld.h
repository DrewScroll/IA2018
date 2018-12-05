#pragma once
#include <map>
#include <list>
#include "CPlayer.h"
#include "CUnit.h"
#include "CUnitTypes.h"

//enum UNITTYPES
//{
//  UNDEFINED = 0,
//  SOLDIER,
//  FARMER
//};

class CPlayer;
class CUnit;
class CUnitTypes;

class CWorld
{
public:
  CWorld();
  ~CWorld();
  virtual void Init();
  virtual void Update();
  virtual void Exit();

  void CreateUnitType(int id_type);
  void CreateUnit(float x, float y, int id_type, int id_player);
  bool CheckType(int);

  //std::map <UNITTYPES, CUnitTypes> m_TypeMap;
  std::list <CUnitTypes*> m_UnitTypesList;
  std::list <CUnit*> m_UnitList;
  std::list <CPlayer*> m_PlayerList;
};


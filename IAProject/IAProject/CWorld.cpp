#include "pch.h"
#include "CWorld.h"


CWorld::CWorld() {}


CWorld::~CWorld() {}

void CWorld::Init() {}

void CWorld::Update() {}

void CWorld::Exit() {}

void CWorld::CreateUnitType(int id_type) {
  if (!CheckType(id_type)) {
    m_UnitTypesList.push_back(new CUnitTypes(id_type));
  }
}

void CWorld::CreateUnit(float x, float y, int id_type, int id_player) {
  static int autoIncrementID = 1;

  CreateUnitType(id_type);
  CUnit* NewUnit = new CUnit(id_type, id_player);
  
  NewUnit->iID = autoIncrementID;
  ++autoIncrementID;

  m_UnitList.push_back(NewUnit);
}

bool CWorld::CheckType(int TypeID) {
  for (auto &it : m_UnitTypesList) {
    if (it->m_ID == TypeID) {
      //type exists
      return true;
    }
  }
  return false;
}
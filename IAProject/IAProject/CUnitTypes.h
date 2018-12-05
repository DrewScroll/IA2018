#pragma once

#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

class CUnitTypes
{
public:
  CUnitTypes(int iTypeID);
  ~CUnitTypes();

  int m_ID;
  std::string m_Name;
  float m_fVel_max;
  float m_fHP_max;
  //std::map <UNIT_STATE, CEstado*> m_unitStateMap;
  
};


#include "pch.h"
#include "CUnitTypes.h"


CUnitTypes::CUnitTypes(int iTypeID) {
  m_ID = iTypeID;
  switch (iTypeID) {
    case 1:
    {
      m_Name = "archer";
      break;
    }
    case 2:
    {
      m_Name = "castilian_knight";
      break;
    }
    case 3:
    {
      m_Name = "crossbow";
      break;
    }
    case 4:
    {
      m_Name = "english_knight";
      break;
    }
    case 5:
    {
      m_Name = "french_knight";
      break;
    }
    case 6:
    {
      m_Name = "hand_gunner";
      break;
    }
    case 7:
    {
      m_Name = "heavy_cavalry";
      break;
    }
    case 8:
    {
      m_Name = "heavy_pikeman";
      break;
    }
    case 9:
    {
      m_Name = "imperial_knight";
      break;
    }
    case 10:
    {
      m_Name = "light_cavalry";
      break;
    }
    case 11:
    {
      m_Name = "longbow";
      break;
    }
    case 12:
    {
      m_Name = "mounted_hand_gunner";
      break;
    }
    case 13:
    {
      m_Name = "pikeman";
      break;
    }
    case 14:
    {
      m_Name = "poleaxe";
      break;
    }
    case 15:
    {
      m_Name = "ritterbruder";
      break;
    }
    case 16:
    {
      m_Name = "venetian_knight";
      break;
    }
    default:
    {
      break;
    }
  }
}


CUnitTypes::~CUnitTypes() {}

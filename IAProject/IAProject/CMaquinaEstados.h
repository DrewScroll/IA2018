#pragma once
#include <stack>
#include <map>
#include <SFML/Graphics.hpp>

class CEstado;

enum STATES
{
  STATE_UNDEFINED = 0,
  STATE_HELP,
  STATE_GAMEOVER,
  STATE_GAMEPLAY,
  STATE_GRAPHICS,
  STATE_GAME,
  STATE_LOGO,
  STATE_MENU,
  STATE_OPTIONS,
  STATE_PAUSE,
  STATE_SOUND
};

class CMaquinaEstados
{
public:
  CMaquinaEstados();
  ~CMaquinaEstados();

  std::map <STATES, CEstado*> m_stateMap;
  std::stack <CEstado*> m_stateStack;
  sf::RenderWindow* m_pMWindow;
  CEstado* m_pActiveState;
  //CEstado* m_pTempState;
  
  void Init(sf::RenderWindow* _window);
  void Update(sf::Event* _event);
  void Render();
  void SetState(STATES newState);
  void AddState(STATES newState);
  void RemoveState();
};


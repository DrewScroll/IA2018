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

  std::map <STATES, CEstado*> m_StateMap;
  std::stack <CEstado*> currentState;
  sf::RenderWindow* m_pMWindow;
  
  void Init(sf::RenderWindow* _window);
  void Update(sf::Event* _event);
  void SetState(STATES newState);
  void PushState(STATES newState);
  void PopState();
};


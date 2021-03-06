
#include "pch.h"
#include "CMaquinaEstados.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#define VERSION "1.0.0"

CMaquinaEstados g_app;

int main() {
  
  lua_State* myState = luaL_newstate();
  luaL_openlibs(myState);

  lua_pushstring(myState, VERSION);
  lua_setglobal(myState, "VERSION");

  sf::RenderWindow window(sf::VideoMode(1000, 700), "Menu Interaction");
  sf::Event event;
  g_app.Init(&window);

  while (window.isOpen()) {
    /*while (window.pollEvent(event)) {
      if (sf::Event::Closed == event.type)
        window.close();
    }*/
    window.clear();
    g_app.Update(&event);
    g_app.Render();
    window.display();
  }
  
  return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

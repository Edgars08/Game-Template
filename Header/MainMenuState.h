#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "State.h"
#include "Game.h"
#include "InputManager.h"
#include <SFML/Graphics.hpp>

namespace Edgars
{
    class MainMenuState : public State
    {
    public:
        MainMenuState(GameDataRef data);
        ~MainMenuState(){};
        void InitState();
        void HandleInput();
        void Update(float dt);
        void Draw(float dt);

    private:
        GameDataRef _data;
        sf::Sprite _background;
    };
}

#endif

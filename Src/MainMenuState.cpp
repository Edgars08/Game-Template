#include "MainMenuState.h"
// #include "GameState.h"
#include <sstream>
#include <iostream>
#include "Definations.h"

namespace Edgars
{
    MainMenuState::MainMenuState(GameDataRef data) : _data(data)
    {
    }

    void MainMenuState::InitState()
    {
        // stored in a map
        this->_data->assets.LoadTexture("Background_space", MAINMENU_BACKGROUND);
        this->_background.setTexture(_data->assets.GetTexture("Background_space"));
        _background.setScale(sf::Vector2f(0.8789f, 1.166667f));
    }

    void MainMenuState::HandleInput()
    {
        sf::Event event;
        while (_data->window.pollEvent(event))
        {
            if (sf::Event::Closed == event.type)
            {
                _data->window.close();
            }
        }
    }
    void MainMenuState::Update(float dt)
    {
    }
    void MainMenuState::Draw(float dt)
    {
        _data->window.clear();
        _data->window.draw(_background);
        _data->window.display();
    }
}
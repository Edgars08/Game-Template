#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H


#include <SFML/Graphics.hpp>


namespace Edgars
{

    class InputManager
    {
    public:
        InputManager();
        ~InputManager(){};
        bool IsDirectionClicked(sf::Keyboard::Key button);
        bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
        sf::Vector2i GetMousePosition(sf::RenderWindow &window);

    private:
       
    };
}
#endif
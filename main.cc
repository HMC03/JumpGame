#include <SFML/Window.hpp>

int main(){
    //sf::RenderWindow window(sf::VideoMode::getFullscreenModes().at(0), "Jump Game", sf::State::Fullscreen);

    sf::Window window(sf::VideoMode({800, 600}), "Jump Game");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
        }
    }

    // const auto onClose = [&window](const sf::Event::Closed&)
    // {
    //     window.close();
    // };

    // const auto onKeyPressed = [&window](const sf::Event::KeyPressed& keyPressed)
    // {
    //     if (keyPressed.scancode == sf::Keyboard::Scancode::Escape)
    //         window.close();
    // };

    // while (window.isOpen())
    // {
    //     window.handleEvents(onClose, onKeyPressed);

    //     // Remainder of main loop
    // }
    
    return 0;
}
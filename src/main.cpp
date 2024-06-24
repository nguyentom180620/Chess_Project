#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode(1600, 900), "CMake SFML Project");

    window.setFramerateLimit(144);

    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color(100, 250, 50));
    shape.setPosition(100, 100);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.draw(shape);
        window.display();
        window.clear();
    }
}

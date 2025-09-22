#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Lab One");
    window.setVerticalSyncEnabled(true);

    sf::CircleShape circle(80.f);
    circle.setFillColor(sf::Color(100, 250, 50));
    circle.setPosition(320.f, 220.f);

    while (window.isOpen()) {
        sf::Event e;
        while (window.pollEvent(e)) {
            if (e.type == sf::Event::Closed) window.close();
        }
        window.clear(sf::Color(30, 30, 40));
        window.draw(circle);
        window.display();
    }
    return 0;
}

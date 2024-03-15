#pragma once

#include <SFML/Graphics.hpp>

class Car {
public:
    Car(float x, float y);

    void move();
    void setDirection(float dir);

    const sf::Vector2f& getPosition() const;
    const sf::FloatRect getBounds() const;

private:
    float x, y;
    float dir;
    sf::Clock clock;
};

class Obstacle {
public:
    Obstacle(float x, float y);

    void move();

    const sf::Vector2f& getPosition() const;
    const sf::FloatRect getBounds() const;

    static Obstacle generate();

private:
    float x, y;
    float speed;
};

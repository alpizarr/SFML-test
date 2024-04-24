#ifndef rectangle_h
#define rectangle_h
#include <SFML/Graphics.hpp>
using namespace sf;

class Rectangle 
{
    Vector2f speed;
    Vector2f acc;
    RectangleShape shape;

public:
 Rectangle (Vector2f size);
 Rectangle (Vector2f size, int x, int y);
void click(int x, int y);
void update();
void drawto(RenderWindow& window);
};

#endif
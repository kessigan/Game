#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800,600),"Opening Window" );
	sf::Sprite sprite;
	sf::Texture texture;
	texture.loadFromFile("spaceship.png");
	sprite.setTexture(texture);
	sprite.setOrigin(10,5);
	sf::Sprite bullet;
	sf::Texture texture1;
	texture1.loadFromFile("bullet.png");
	bullet.setTexture(texture1);
	float x=0;
	float y =0;
	float z = 801;

while (window.isOpen())
{
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
      window.clear(sf::Color::White);

        // draw everything here...
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
{
    // left key is pressed: move our character
    y -=0.1;
}
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
{
    // left key is pressed: move our character
    y += 0.1;
}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
{
    // left key is pressed: move our character
    x -= 0.1;
	sprite.setRotation(180);
//
}		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
{
    // left key is pressed: move our character
    x += 0.1;
	sprite.setRotation(0);
	
}
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
{
    // left key is pressed: move our character
	if (z>800 ) 

	{bullet.setPosition(x+25,y-5);
	z=x;
	}
}
		sprite.setPosition(x,y);
		window.draw(sprite);
		if ( z < 800 ) window.draw(bullet);
		bullet.move(0.5,0);
		z+=0.5;
        // window.draw(...);

//		if (!texture.loadFromFile("spaceship.png"))
//		{
//			// error...
//		}
//		
        // end the current frame
        window.display();
		
    }
	return 0;
}

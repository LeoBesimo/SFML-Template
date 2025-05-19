#include "Window.hpp"

Core::Window::Window() :
	sf::RenderWindow(sf::VideoMode({800,600}), "Window")
{

}

Core::Window::Window(unsigned int width, unsigned int height) :
	sf::RenderWindow(sf::VideoMode({ width, height }), "Window")
{
}

Core::Window::Window(unsigned int width, unsigned int height, std::string windowName) :
	sf::RenderWindow(sf::VideoMode({ width,height }), windowName)
{
}

Core::Window::~Window()
{
}

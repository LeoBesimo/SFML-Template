#include "Programm.hpp"
#include <iostream>

App::App() :
	Core::Application()
{
}

void App::init()
{
	std::cout << "Creating Window\n";
	windowPtr = createWindow(800, 600, "App Window");
	windowPtr->fill(0, 255, 0);
	windowPtr->setFramerateLimit(60);
}

void App::update(float dt)
{
	std::cout << 1 / dt << "\n";
	windowPtr->clear();
	windowPtr->circle(400, 300,100);
}

void App::destroy()
{

}
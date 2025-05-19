#include "Core/Core.h"
#include <SFML/Graphics.hpp>

int main()
{
	//Core::PrintHelloWorld();

	Core::Application app;
	//std::shared_ptr<Core::Window> window = app.createWindow(800, 600, "Test Window");
	//std::shared_ptr<Core::Window> window2 = app.createWindow(800, 600, "Test Window2");
	app.start();
}
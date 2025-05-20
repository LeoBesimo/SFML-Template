#include "Programm.hpp"
#include <iostream>
#include <Core/ImGui/imgui.h>

App::App() :
	Core::Application()
{
}

void App::init()
{
	std::cout << "Creating Window\n";
	windowPtr = createWindow(800, 600, "App Window");
	//wind2 = createWindow(400, 400, "Window 2");
	windowPtr->fill(0, 255, 0);
	windowPtr->setFramerateLimit(60);

	//ImGui::SFML::SetCurrentWindow(*windowPtr);
	
	//ImGui::SFML::Init(*windowPtr);
}

void App::handleWindowEvent(std::shared_ptr<Core::Window> window, std::optional<sf::Event> &event)
{
}

void App::update(float dt)
{
	ImGui::SFML::SetCurrentWindow(*windowPtr);
	ImGui::ShowDemoWindow();

	std::cout << 1 / dt << "\n";
	windowPtr->clear();
	//wind2->clear();
	windowPtr->circle(windowPtr->MousePosition.x, windowPtr->MousePosition.y, 100);
}

void App::destroy()
{
	//ImGui::SFML::Shutdown();
}
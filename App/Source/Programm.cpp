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
	windowPtr->fill(0, 255, 0);
	windowPtr->setFramerateLimit(60);
	
	//ImGui::SFML::Init(*windowPtr);
}

void App::handleWindowEvent(std::shared_ptr<Core::Window> window, std::optional<sf::Event> &event)
{
	//if (window == windowPtr) ImGui::SFML::ProcessEvent(*windowPtr, event.value());
}

void App::update(float dt)
{

	ImGui::ShowDemoWindow();

	std::cout << 1 / dt << "\n";
	windowPtr->clear();
	windowPtr->circle(400, 300,100);
}

void App::destroy()
{
	//ImGui::SFML::Shutdown();
}
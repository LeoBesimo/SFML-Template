#include "Application.hpp"

Core::Application::Application()
{
	init();
}

Core::Application::~Application()
{
	destroy();
}

void Core::Application::start()
{
	init();

	running = true;

	using Clock = std::chrono::high_resolution_clock;
	auto lastTime = Clock::now();
	auto currentTime = Clock::now();
	float deltaTime = 1;

	while (running) 
	{
		currentTime = Clock::now();
		deltaTime = std::chrono::duration<float>(currentTime - lastTime).count();
		lastTime = currentTime;

		for (std::shared_ptr<Window> window : m_Windows)
		{
			while (std::optional<sf::Event> event = window->pollEvent()) {
				if (event->is<sf::Event::Closed>()) {
					window->close();
					window->closed = true;
				}
			}
		}

		for (int i = m_Windows.size() - 1; i >= 0; i--) {
			if(m_Windows[i]->closed)
				m_Windows.erase(m_Windows.begin() + i);
		}

		for (std::shared_ptr<Window> window : m_Windows) 
		{
			//window->clear();
		}

		update(deltaTime);

		for (std::shared_ptr<Window> window : m_Windows) {
			window->display();
		}

		if (m_Windows.size() == 0)
			running = false;

	}
}

std::shared_ptr<Core::Window> Core::Application::createWindow(unsigned int width, unsigned int height, std::string windowName)
{
	std::shared_ptr<Window> window = std::make_shared<Window>(width, height, windowName);
	m_Windows.push_back(window);

	return window;
}

void Core::Application::init()
{
}

void Core::Application::update(float dt)
{
}

void Core::Application::destroy()
{
}

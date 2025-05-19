#pragma once

#include <vector>
#include <memory>

#include "Graphics/Window.hpp"

namespace Core
{
	class Application
	{
	public:
		Application();
		~Application();

		void start();

		std::shared_ptr<Window> createWindow(unsigned int width, unsigned int height, std::string windowName);

		virtual void init();
		virtual void update(float dt);
		virtual void destroy();

	private:
		bool running = false;
		std::vector<std::shared_ptr<Window>> m_Windows;

	};
}
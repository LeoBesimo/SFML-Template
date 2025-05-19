#pragma once

#include <SFML/Graphics.hpp>

namespace Core
{
	class Window :
		public sf::RenderWindow
	{
		friend class Application;

	public:
		Window();
		Window(unsigned int width, unsigned int height);
		Window(unsigned int width, unsigned int height, std::string windowName);
		~Window();

	private:
		bool closed = false;
	};
	
}
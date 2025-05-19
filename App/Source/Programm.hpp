#pragma once

#include <Core/Core.h>

class App :
	public Core::Application
{
public:

	App();

	void init() override;
	void update(float dt) override;
	void destroy() override;


private:
	std::shared_ptr<Core::Window> windowPtr;
};
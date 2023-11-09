#include "Application.h"
#include <iostream>
namespace Engine {
	Application::Application()
	{
		m_ComponentSystem = new ComponentSystem();
	}

	Application::~Application()
	{

	}

	void Application::run()
	{
		while (true) {
			m_ComponentSystem->getLogger()->getLogger()->info("Hello World");
		}
	}
}


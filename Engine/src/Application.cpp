#include "Application.h"
#include <iostream>

#include "../Engine.h"

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
		KeyPressedEvent e(69, 420);

		while (true) {
			if(m_ComponentSystem->getLogger()->isDebug())
				m_ComponentSystem->getLogger()->getLogger()->info(e.toString());
		}
	}
}


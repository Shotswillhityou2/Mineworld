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
		

		while (true) {
			WindowResizedEvent* e=new WindowResizedEvent(69, 420);
			m_ComponentSystem->getEventBus()->pushEvent(e);
			m_ComponentSystem->getEventBus()->processEvents();
		}
	}
}


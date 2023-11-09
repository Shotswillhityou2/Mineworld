#pragma once

#include "ComponentSystem/ComponentSystem.h"

namespace Engine {
	class Application
	{
	public:
		Application();
		~Application();

		void run();
	private:
		ComponentSystem* m_ComponentSystem;
	};
}



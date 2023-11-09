#pragma once
#include "../Logger/Logger.h"
#include "../EventSystem/EventBus.h"

namespace Engine {
	class ComponentSystem {
	public:
		ComponentSystem();
		~ComponentSystem();

		inline Logger* getLogger() { return m_Logger; }
		inline EventBus* getEventBus() { return m_EventBus; }
	private:
		Logger* m_Logger;
		EventBus* m_EventBus;
	};
}


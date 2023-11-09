#pragma once
#include "../Logger/Logger.h"

namespace Engine {
	class ComponentSystem {
	public:
		ComponentSystem();
		~ComponentSystem();

		inline Logger* getLogger() { return m_Logger; }
	private:
		Logger* m_Logger;
	};
}


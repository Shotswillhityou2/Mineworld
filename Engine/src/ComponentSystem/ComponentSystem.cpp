#include "ComponentSystem.h"
namespace Engine {
	ComponentSystem::ComponentSystem()
	{
		m_Logger = new Logger();

		m_EventBus = new EventBus();
		m_EventBus->setCompSysRef(this);

	}

	ComponentSystem::~ComponentSystem()
	{

	}
}
#include "EventBus.h"
#include "../ComponentSystem/ComponentSystem.h"
namespace Engine {
	EventBus::EventBus()
	{

	}

	EventBus::~EventBus()
	{

	}

	void EventBus::pushEvent(BaseEvent* event)
	{
		m_Events.push_back(event);
	}
	void EventBus::processEvents()
	{
		ComponentSystem* sys = (ComponentSystem*)m_CompSysRef;
		for (BaseEvent* e : m_Events) {
			sys->getLogger()->getLogger()->info(e->toString());
			//delete e;
		}
		m_Events.empty();
	}
}
#pragma once
#include "BaseEvent.h"
#include <vector>
namespace Engine {
	class EventBus {
	public:
		EventBus();
		~EventBus();

		inline void setCompSysRef(void* ptr) { m_CompSysRef = ptr; }
		
		void pushEvent(BaseEvent* event);
		void processEvents();
		
	private:
		std::vector<BaseEvent*>m_Events;
		void* m_CompSysRef;
	};
}

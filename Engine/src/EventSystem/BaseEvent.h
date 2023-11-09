#pragma once
#include<string>
#include <sstream>
namespace Engine {

#define SET_CATEGORY_FLAGS(x) EventCategory getCategory()override{return x;}
#define SET_TYPE_FLAGS(x)EventType getType()override{return x;}

	enum EventCategory {
		KeyEvent,MouseEvent,ApplicationEvent,NullEvent
	};

	enum EventType {
		KeyPressed,KeyReleased,
		MouseButtonPressed,MouseButtonReleased,MouseScrolled,MouseMoved,
		WindowClosed,WindowResized,WindowFocussed,
		NullType
	};

	class BaseEvent {
	public:

		BaseEvent(){}
		~BaseEvent(){}

		virtual EventCategory getCategory() { return NullEvent; }
		virtual EventType getType() { return NullType; }
		virtual std::string toString() { return ""; }
	private:

	};
}
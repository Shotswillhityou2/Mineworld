#pragma once
namespace Engine {

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
		static EventType getStaticType() { return NullType; }
	private:

	};
}
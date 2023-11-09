#pragma once
#include "BaseEvent.h"
namespace Engine {
	class MouseButtonPressedEvent :public BaseEvent {
	public:
		MouseButtonPressedEvent(){}
		~MouseButtonPressedEvent(){}

	private:

	};

	class MouseButtonReleasedEvent :public BaseEvent {
	public:
		MouseButtonReleasedEvent(){}
		~MouseButtonReleasedEvent(){}

	private:

	};

	class MouseScrolledEvent :public BaseEvent {
	public:
		MouseScrolledEvent(){}
		~MouseScrolledEvent(){}

	private:

	};

	class MouseMovedEvent :public BaseEvent {
	public:
		MouseMovedEvent(){}
		~MouseMovedEvent(){}

	private:

	};
}
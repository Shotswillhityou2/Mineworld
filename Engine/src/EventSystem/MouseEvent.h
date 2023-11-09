#pragma once
#include "BaseEvent.h"
namespace Engine {
	class MouseButtonPressedEvent :public BaseEvent {
	public:
		MouseButtonPressedEvent(int button):m_Button(button){}
		~MouseButtonPressedEvent(){}

		inline int getButton() { return m_Button; }

		std::string toString()override { std::stringstream s; s << "MouseButtonPressed: " + m_Button; return s.str(); }

		SET_CATEGORY_FLAGS(MouseEvent)
		SET_TYPE_FLAGS(MouseButtonPressed)
	private:
		int m_Button;
	};

	class MouseButtonReleasedEvent :public BaseEvent {
	public:
		MouseButtonReleasedEvent(int button):m_Button(button){}
		~MouseButtonReleasedEvent(){}

		inline int getButton() { return m_Button; }

		std::string toString()override { std::stringstream s; s << "MouseButtonReleased: " + m_Button; return s.str(); }

		SET_CATEGORY_FLAGS(MouseEvent)
		SET_TYPE_FLAGS(MouseButtonReleased)
	private:
		int m_Button;
	};

	class MouseScrolledEvent :public BaseEvent {
	public:
		MouseScrolledEvent(int x,int y):m_Y(y),m_X(x){}
		~MouseScrolledEvent(){}

		inline int getXOffset() { return m_X; }
		inline int getYOffset() { return m_Y; }

		std::string toString()override { std::stringstream s; s << "MouseScrolled: " << "X: " << m_X << " Y: " << m_Y; return s.str(); }

		SET_CATEGORY_FLAGS(MouseEvent)
		SET_TYPE_FLAGS(MouseScrolled)
	private:
	private:
		int m_X, m_Y;
	};

	class MouseMovedEvent :public BaseEvent {
	public:
		MouseMovedEvent(int x,int y):m_X(x),m_Y(y){}
		~MouseMovedEvent(){}

		inline int getX() { return m_X; }
		inline int getY() { return m_Y; }

		std::string toString()override { std::stringstream s; s << "MouseMoved: " << "X: " << m_X << " Y: " << m_Y; return s.str(); }

		SET_CATEGORY_FLAGS(MouseEvent)
		SET_TYPE_FLAGS(MouseMoved)
	private:
		int m_X, m_Y;
	};
}
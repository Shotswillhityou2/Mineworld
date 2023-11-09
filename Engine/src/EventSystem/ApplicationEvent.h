#pragma once
#include "BaseEvent.h"
namespace Engine {
	class WindowClosedEvent :public BaseEvent {
	public:
		WindowClosedEvent(){}
		~WindowClosedEvent(){}

		std::string toString()override { std::stringstream s; s << "WindowClosedEvent"; return s.str(); }

		SET_CATEGORY_FLAGS(ApplicationEvent)
		SET_TYPE_FLAGS(WindowClosed)

	private:

	};

	class WindowResizedEvent :public BaseEvent {
	public:
		WindowResizedEvent(int width,int height):m_Width(width),m_Height(height){}
		~WindowResizedEvent(){}

		inline int getWidth() { return m_Width; }
		inline int getHeight() { return m_Height; }

		std::string toString()override { std::stringstream s; s << "WindowResized: " << "Width: " << m_Width << " Height: " << m_Height; return s.str(); }

		SET_CATEGORY_FLAGS(ApplicationEvent)
		SET_TYPE_FLAGS(WindowResized)

	private:
		int m_Width, m_Height;
	};
}
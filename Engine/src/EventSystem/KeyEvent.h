#pragma once
#include "BaseEvent.h"
namespace Engine {
	class KeyPressedEvent :public BaseEvent{
	public:
		KeyPressedEvent(int code,int repeats):m_Code(code),m_Repeats(repeats){}
		~KeyPressedEvent(){}

		inline int getKey() { return m_Code; }
		inline int getRepeats() { return m_Repeats; }

		std::string toString()override { std::stringstream s; s << "KeyPressed: " << m_Code << "Repeats: " << m_Repeats; return s.str(); }

		SET_CATEGORY_FLAGS(KeyEvent)
		SET_TYPE_FLAGS(KeyPressed)

	private:
		int m_Code, m_Repeats;
	};

	class KeyReleasedEvent :public BaseEvent{
	public:
		KeyReleasedEvent(int code):m_Code(code){}
		~KeyReleasedEvent(){}

		inline int getKey() { return m_Code; }

		std::string toString()override { std::stringstream s; s << "KeyReleased: " << m_Code; return s.str(); }

		SET_CATEGORY_FLAGS(KeyEvent)
		SET_TYPE_FLAGS(KeyReleased)
	private:
		int m_Code;
	};
}
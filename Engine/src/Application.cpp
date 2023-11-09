#include "Application.h"
#include <iostream>
namespace Engine {
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::run()
	{
		while (true) {
			std::cout << "Hello World" << std::endl;
		}
	}
}


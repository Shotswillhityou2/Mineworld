#include "Logger.h"
namespace Engine {
	Logger::Logger()
	{
		m_Logger = spdlog::default_logger();
	}

	Logger::~Logger()
	{

	}
}
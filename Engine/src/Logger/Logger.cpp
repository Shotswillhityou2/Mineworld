#include "Logger.h"
namespace Engine {
	Logger::Logger()
	{
		m_Logger = spdlog::default_logger();
		#ifdef _DEBUG
				m_IsDebug = true;
		#else
				m_IsDebug = false;
		#endif
	}

	Logger::~Logger()
	{

	}
}
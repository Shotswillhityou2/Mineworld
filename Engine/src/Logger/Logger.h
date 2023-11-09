#pragma once
#include "spdlog/spdlog.h"
#include "spdlog/sinks/base_sink.h"

#include <memory>
namespace Engine {
	class Logger {
	public:
		Logger();
		~Logger();

		inline std::shared_ptr<spdlog::logger> getLogger() { return m_Logger; }
		inline bool isDebug() { return m_IsDebug; }
	private:
		std::shared_ptr<spdlog::logger>m_Logger;
		bool m_IsDebug;
	};
}

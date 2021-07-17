#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Charlie
{
	class CHARLIE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define CL_CORE_TRACE(...) ::Charlie::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CL_CORE_INFO(...)  ::Charlie::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CL_CORE_WARN(...)  ::Charlie::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CL_CORE_ERROR(...) ::Charlie::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CL_CORE_FATAL(...) ::Charlie::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define CL_TRACE(...)      ::Charlie::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CL_INFO(...)       ::Charlie::Log::GetClientLogger()->info(__VA_ARGS__)
#define CL_WARN(...)       ::Charlie::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CL_ERROR(...)      ::Charlie::Log::GetClientLogger()->error(__VA_ARGS__)
#define CL_FATAL(...)      ::Charlie::Log::GetClientLogger()->fatal(__VA_ARGS__)
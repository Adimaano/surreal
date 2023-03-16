#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Surreal 
{

	class SURREAL_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}


// Core Log Macros

#define SR_CORE_ERROR(...)		::Surreal::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SR_CORE_INFO(...)		::Surreal::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SR_CORE_WARN(...)		::Surreal::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SR_CORE_ERROR(...)		::Surreal::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SR_CORE_CRITICAL(...)	::Surreal::Log::GetCoreLogger()->critical(__VA_ARGS__)


// Client Log Macros
#define SR_ERROR(...)		::Surreal::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SR_INFO(...)		::Surreal::Log::GetClientLogger()->info(__VA_ARGS__)
#define SR_WARN(...)		::Surreal::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SR_ERROR(...)		::Surreal::Log::GetClientLogger()->error(__VA_ARGS__)
#define SR_CRITICAL(...)	::Surreal::Log::GetClientLogger()->critical(__VA_ARGS__)

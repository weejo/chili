#pragma once
#include "Core.h"
#include "spdlog\spdlog.h"
#include "spdlog\fmt\ostr.h"


namespace Chili {

	class CHILI_API Log
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
// Macros for the in-engine logging
#define CH_CORE_TRACE(...)	::Chili::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CH_CORE_INFO(...)	::Chili::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CH_CORE_WARN(...)	::Chili::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CH_CORE_ERROR(...)	::Chili::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CH_CORE_FATAL(...)	::Chili::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Macros for client logging
#define CH_TRACE(...)	::Chili::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CH_INFO(...)	::Chili::Log::GetClientLogger()->info(__VA_ARGS__)
#define CH_WARN(...)	::Chili::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CH_ERROR(...)	::Chili::Log::GetClientLogger()->error(__VA_ARGS__)
#define CH_FATAL(...)	::Chili::Log::GetClientLogger()->fatal(__VA_ARGS__)

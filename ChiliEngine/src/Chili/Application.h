#pragma once

#include "Core.h"

namespace Chili {
	class CHILI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		
	};
	// implemented by using application
	Application* CreateApplication();
}



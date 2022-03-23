#pragma once

#include "Core.h"
#include "Events\Event.h"
#include "Chili\Events\ApplicationEvent.h"

#include "Window.h"

namespace Chili {
	class CHILI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
		void OnEvent(Event& e);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		
	};
	// implemented by using application
	Application* CreateApplication();
}



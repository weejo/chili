#pragma once

#include "Core.h"

#include "Window.h"
#include "Chili\LayerStack.h"
#include "Events\Event.h"
#include "Chili\Events\ApplicationEvent.h"

namespace Chili {
	class CHILI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;

	};
	// implemented by using application
	Application* CreateApplication();
}



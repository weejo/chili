#include "Application.h"

#include "Events\ApplicationEvent.h"
#include "Log.h"

namespace Chili {
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CH_TRACE(e);
		}

		if (e.IsInCategory(EventCategoryInput))
		{
			CH_TRACE(e);
		}

		while (true);
	}
}


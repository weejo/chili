#pragma once

#include "chpch.h"

#include "Chili\Core.h"
#include "Chili\Events\Event.h"

namespace Chili {
	//Basic properties for the window
	struct WindowProperties
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProperties(const std::string& title = "Chili engine", unsigned int width = 1280, unsigned int height = 720)
		: Title(title), Width(width), Height(height){}
	};

	//Interface to represent the desktop system based window
	class CHILI_API Window {
	public: 
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {};

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;

		// Window attributes
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		static Window* Create(const WindowProperties& props = WindowProperties());
	};
}
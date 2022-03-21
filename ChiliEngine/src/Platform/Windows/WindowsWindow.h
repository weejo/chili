#pragma once

#include "Chili\Window.h"

#include <GLFW\glfw3.h>

namespace Chili {
	class WindowsWindow : public Window {
	public:
		WindowsWindow(const WindowProperties& properties); 

		virtual ~WindowsWindow();
		
		void OnUpdate() override;

		inline unsigned int GetWidth() const override { return m_Data.Width; }
		inline unsigned int GetHeight() const override { return m_Data.Height; }

		// Window attributes
		inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }
		void SetVSync(bool enabled) override;
		bool IsVSync() const override;

	private:
		virtual void Init(const WindowProperties& properties);
		virtual void Shutdown();
	private:
		GLFWwindow* m_Window;

		// passed into GLFW
		struct WindowData
		{
			std::string Title;
			unsigned int Width, Height;
			bool VSync;

			EventCallbackFn EventCallback;
		};

		WindowData m_Data;
	};
}
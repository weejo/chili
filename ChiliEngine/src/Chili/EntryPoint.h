#pragma once

#ifdef CH_PLATFORM_WINDOWS

extern Chili::Application* Chili::CreateApplication();

int main(int argc, char** argv)
{
	Chili::Log::Init();
	CH_CORE_WARN("Initialized Core Log!");
	CH_INFO("Initialized Application log!");
	auto app = Chili::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
 
#endif
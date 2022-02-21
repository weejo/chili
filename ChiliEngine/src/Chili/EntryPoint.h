#pragma once

#ifdef CH_PLATFORM_WINDOWS

extern Chili::Application* Chili::CreateApplication();

int main(int argc, char** argv)
{
	printf("Chili Engine!\n");
	auto app = Chili::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
 
#endif
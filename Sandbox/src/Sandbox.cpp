#include <chili.h>

class Sandbox : public Chili::Application 
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Chili::Application* Chili::CreateApplication()
{
	return new Sandbox();
}
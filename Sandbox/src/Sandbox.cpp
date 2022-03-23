#include <chili.h>

class ExampleLayer : public Chili::Layer
{
public:
	ExampleLayer(): Layer("Example"){}

	void OnUpdate() override { 
		CH_INFO("ExampleLayer::Update"); }

	void OnEvent(Chili::Event& event) override {
		CH_TRACE("{0}", event);
	}

};



class Sandbox : public Chili::Application 
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}
	~Sandbox()
	{

	}

};

Chili::Application* Chili::CreateApplication()
{
	return new Sandbox();
}
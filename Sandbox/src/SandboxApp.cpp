#include <XSEngine.h>

class Sandbox : public XSEngine::Application
{
public:
	Sandbox() 
	{}
	~Sandbox()
	{}
};

XSEngine::Application* XSEngine::CreateApplication()
{
	return new Sandbox();
}
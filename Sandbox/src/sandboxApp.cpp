#include <Shade.h>

class Sandbox : public Shade::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};


Shade::Application* Shade::createApplication()
{
	return new Sandbox;
}
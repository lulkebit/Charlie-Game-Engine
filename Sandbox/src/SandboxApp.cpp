#include <Charlie.h>

class Sandbox : public Charlie::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}
};

Charlie::Application* Charlie::CreateApplication()
{
	return new Sandbox();
}
#pragma once

#ifdef CL_PLATFORM_WINDOWS

extern Charlie::Application* Charlie::CreateApplication();

int main(int argc, char** argv)
{
	Charlie::Log::Init();
	CL_CORE_WARN("Initalized Log!");
	int a = 5;
	CL_INFO("Hello! Var={0}", a);
	
	auto app = Charlie::CreateApplication();
	app->Run();
	delete app;
}

#endif

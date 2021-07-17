#pragma once

#ifdef CL_PLATFORM_WINDOWS

extern Charlie::Application* Charlie::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Charlie::CreateApplication();
	app->Run();
	delete app;
}

#endif

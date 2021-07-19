#include "clpch.h"
#include "Application.h"

#include "Charlie/Events/ApplicationEvent.h"
#include "Charlie/Log.h"

namespace Charlie
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if(e.IsInCategory(EventCategoryApplication))
		{
			CL_TRACE(e);
		}
		if(e.IsInCategory(EventCategoryInput))
		{
			CL_TRACE(e);
		}
		
		while (true);
	}

}

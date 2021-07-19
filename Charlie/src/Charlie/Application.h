#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Charlie
{
	class CHARLIE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
	
}

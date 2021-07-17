#pragma once

#include "Core.h"

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

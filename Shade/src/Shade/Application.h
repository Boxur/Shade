#pragma once

#include "Core.h"

namespace Shade
{
	class SHADE_API Application
	{
	public:

		Application();
		virtual ~Application();

		void Run();

	};

	Application* createApplication();
}

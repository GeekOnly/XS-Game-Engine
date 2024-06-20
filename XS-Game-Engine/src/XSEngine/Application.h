#pragma once

#include "Core.h"

namespace XSEngine {

	class XS_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To Be Defined in CLIENT
	Application* CreateApplication();
}
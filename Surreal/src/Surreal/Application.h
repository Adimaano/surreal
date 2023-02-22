#pragma once

#include "Core.h"

namespace Surreal {

	class SURREAL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	Application* CreateApplication();


}
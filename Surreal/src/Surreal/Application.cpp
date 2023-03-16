#include "Application.h"

#include "Surreal/Events/ApplicationEvent.h"
#include "Surreal/Log.h"

namespace Surreal {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		SR_CORE_INFO(e);

		while (true);
	}
}
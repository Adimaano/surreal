#include "srpch.h"
#include "Application.h"

#include "Core/Events/ApplicationEvent.h"
#include "Core/Log.h"

namespace Surreal {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
		}

		while (true);
	}
}
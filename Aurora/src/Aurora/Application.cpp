#include "arpch.h"
#include "Application.h"

#include "Aurora/Events/ApplicationEvent.h"
#include "Aurora/Log.h"

namespace Aurora {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		AR_TRACE(e);

		while (true);
	}
}
#pragma once

#ifdef SR_PLATFORM_WINDOWS

extern Surreal::Application* Surreal::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Surreal::CreateApplication();
	app->Run();
	delete app;
}

#endif
#pragma once

#ifdef SR_PLATFORM_WINDOWS

extern Surreal::Application* Surreal::CreateApplication();

int main(int argc, char** argv)
{
	Surreal::Log::Init();

	SR_CORE_WARN("Initialized Core Log!");

	int a = 5;
	SR_INFO("Welcome to your Game! Variable={0}", a);

	auto app = Surreal::CreateApplication();
	app->Run();
	delete app;
}

#endif
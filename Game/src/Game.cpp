#include <Surreal.h>


class Game : public Surreal::Application
{
public:
	Game()
	{

	}
	~Game()
	{

	}
};

Surreal::Application* Surreal::CreateApplication()
{
	return new Game();
}
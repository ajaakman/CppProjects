#include "Game.h"

#ifdef EMSCRIPTEN
#include <emscripten/emscripten.h>
static void dispatch_main(void* fp)
{
	std::function<void()>* func = (std::function<void()>*)fp;
	(*func)();
}
#endif

Game::Game()
{
	Init();
	Loop();
}

Game::~Game()
{	
}

void Game::Init()
{	
}

void Game::Loop()
{
	SimpleRenderable r1(  0.0f,  0.0f, 1.0f, 0.2f, 1);
	SimpleRenderable r2( 0.0f, -0.3f, 0.2f, 0.2f, 1);
	SimpleRenderable r3(-1.0f, -1.0f, 0.2f, 0.2f);
	
	float col = 0.0f;
	float increment = 0.01f;
#ifdef EMSCRIPTEN
	std::function<void()> mainLoop = [&]()
#else
	while (p_Window->ShouldNotClose()) 
#endif 
	{
		p_Renderer->Clear();

		r1.SetColor(col, 0.0f, 1.0f, 1.0f);
		r2.SetColor(0.0f, col, 1.0f, 1.0f);

		r1.Draw();
		r2.Draw();
		r3.Draw();

		if (col > 1.0f)
			increment = -0.05f;
		else if (col < 0.0f)
			increment = 0.05f;

		col += increment;

		p_Window->SwapBuffers();
		p_Window->PollEvents();
	}
#ifdef EMSCRIPTEN
	; emscripten_set_main_loop_arg(dispatch_main, &mainLoop, 0, 1);
#endif
}

#pragma once

#define ASSERT(x) if (!(x)) __debugbreak();
#define GL(x) GLClearError();\
	x;\
	ASSERT(GLLogCall(#x, __FILE__, __LINE__))

extern void GLClearError();

extern bool GLLogCall(const char* function, const char* file, int line);
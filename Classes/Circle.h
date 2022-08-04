#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <math.h>

class Circle
{
	public:
		Circle();
		void Draw(float x, float y, float z, float radius);
};

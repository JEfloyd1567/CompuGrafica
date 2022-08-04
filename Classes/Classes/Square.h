#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>

class Square
{
	public:
		Square();
		void Draw(float x, float y, float z, float length, float angleZ);
};


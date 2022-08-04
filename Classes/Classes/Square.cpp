#include "Square.h"

Square::Square()
{

}

void Square::Draw(float x, float y, float z, float length, float angleZ)
{
	glPushMatrix();

	glTranslatef(x, y, z);
	glRotatef(angleZ, 0, 0, 1);

	float halfLength = length / 2.0;
	
	glBegin(GL_QUADS);
	glVertex3f(-halfLength, halfLength, 0.0f); // top left
	glVertex3f(halfLength, halfLength, 0.0f); // top right 
	glVertex3f(halfLength, -halfLength, 0.0f); // bottom right
	glVertex3f(-halfLength, -halfLength, 0.0f); // bottom left
	glEnd();

	

	glPopMatrix();
}
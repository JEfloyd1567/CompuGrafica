#include "Circle.h"

Circle::Circle()
{

}

void Circle::Draw(float x, float y, float z, float radius)
{
	glPushMatrix();

	glTranslatef(x, y, z);

    glBegin(GL_LINE_LOOP);
    for (float i = 0; i <= 100; i++) {
        glVertex2f(
            (radius * cos(i * 2.0 * 3.1416 / 100)),
            (radius * sin(i * 2.0 * 3.1416 / 100))
        );
    }
    glEnd();

	glPopMatrix();
}
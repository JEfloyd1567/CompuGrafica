#include "Table.h"

Table::Table()
{

}

void Table::Draw(float x, float y, float z)
{
	glPushMatrix();

	glTranslatef(x, y, z);

	glPushMatrix();
	glTranslatef(-0.5, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-0.1, 0.2, 0.0f); // top left
	glVertex3f(0.1, 0.2, 0.0f); // top right 
	glVertex3f(0.1, -0.2, 0.0f); // bottom right
	glVertex3f(-0.1, -0.2, 0.0f); // bottom left
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-0.1, 0.2, 0.0f); // top left
	glVertex3f(0.1, 0.2, 0.0f); // top right 
	glVertex3f(0.1, -0.2, 0.0f); // bottom right
	glVertex3f(-0.1, -0.2, 0.0f); // bottom left
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.3, 0.0);
	glBegin(GL_QUADS);
	glVertex3f(-0.6, 0.1, 0.0f); // top left
	glVertex3f(0.6, 0.1, 0.0f); // top right 
	glVertex3f(0.6, -0.1, 0.0f); // bottom right
	glVertex3f(-0.6, -0.1, 0.0f); // bottom left
	glEnd();
	glPopMatrix();


	glPopMatrix();
}

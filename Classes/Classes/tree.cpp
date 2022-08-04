#include "tree.h"

Tree::Tree()
{

}

void Tree::DrawTree(float x, float y, float z)
{
	glPushMatrix(); 
	
	glTranslatef(x, y, z);
	glRotatef(90, 1, 0, 0);
	
	glutSolidSphere(0.5, 20, 20);
	glutSolidCylinder(0.1, 1.0, 20, 20);

	glPopMatrix();
}

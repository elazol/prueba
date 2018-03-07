#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0.0f,0.0f,1.0f);//blue 
	glBegin(GL_LINE_LOOP);// begin drawing of polygon
	///// LETRA E
	glVertex3f(-9.0f, 1.0f, 0.0); //first
	glVertex3f(-12.0f, 1.0f, 0.0f);//second
	glVertex3f(-12.0f, 6.0f, 0.0); // third
	glVertex3f(-9.0f, 6.0f, 0.0); //fourth
	glVertex3f(-9.0f, 5.0f, 0.0); //fifth
	glVertex3f(-11.0f, 5.0f, 0.0);//sixth
	glVertex3f(-11.0f, 4.0f, 0.0);//sixth
	glVertex3f(-9.0f, 4.0f, 0.0);//sixth	
	glVertex3f(-9.0f, 3.0f, 0.0);//sixth
	glVertex3f(-11.0f, 3.0f, 0.0);//sixth
	glVertex3f(-11.0f, 2.0f, 0.0);//sixth
	glVertex3f(-9.0f, 2.0f, 0.0);//sixth
	glVertex3f(-9.0f, 1.0f, 0.0);//sixth
	glEnd();
	///// FIN LETRA E
	//// INICIO D GRANDE
	glBegin(GL_LINE_LOOP);
	glVertex3f(-5.0f, 1.0f, 0.0); //first
	glVertex3f(-7.0f, 1.0f, 0.0); //first
	glVertex3f(-7.0f, 6.0f, 0.0); //first
	glVertex3f(-5.0f, 6.0f, 0.0); //first
	glVertex3f(-4.0f, 4.0f, 0.0); //first
	glVertex3f(-4.0f, 3.0f, 0.0); //first
	glVertex3f(-5.0f, 1.0f, 0.0); //first	
	glEnd();//// FIN D GRANDE
	//// INICIO D CHIQUITA
	glBegin(GL_LINE_LOOP);
	glVertex3f(-6.5f, 5.0f, 0.0); //first
	glVertex3f(-5.5f, 5.0f, 0.0); //first
	glVertex3f(-5.0f, 4.0f, 0.0); //first
	glVertex3f(-5.0f, 3.0f, 0.0); //first
	glVertex3f(-5.5f, 2.0f, 0.0); //first
	glVertex3f(-6.5f, 2.0f, 0.0); //first
	glEnd();//// FIN D CHIQUITA
	

    		
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-13.0, 0.0, -13.0, 13.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo triangulo");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

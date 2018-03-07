#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
	glClear(GL_BUFFER_BIT);
	glPointSizw(60);
	glBegin(GL_POINTS);
	glVertex3f(1, 1, 0);
	glVertex3f(2, 2, 0);
	glVertex3f(3, 3, 0);
	glEnd();
	glFlush();
}

void init(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentify();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
	
}

int main(int arg, char** argv)
{
	glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
	
}

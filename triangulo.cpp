#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(60);
    glBegin(GL_LINES);
	glColor3f(1.0f,1.0f,0.0f);  //amarillo
    glVertex3f(0.0f,1.0f,0.0f);
    glVertex3f(1.0f,1.0f,0.0f);
    
    glColor3f(0.f,1.0f,1.0f); //azul
    glVertex3f(0.5f,0.0f,0.0f);
    glVertex3f(1.0f,1.0f,0.0f);   
    
    
    glColor3f(1.0f,0.0f,1.0f);  //rosado
    glVertex3f(0.5f,0.0f,0.0f);
    glVertex3f(0.0f,1.0f,0.0f);
    
 /*   glColor3f(0.9f,0.2f,0.4f);
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.5f,0.5f,0.0f);*/
    
   /* glColor3f(0.5f,0.3f,0.6f);
    glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(1.0f,-0.0f,0.0f); */ 
	glEnd();		
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0, 2.0, -2.0, 2.0, -2.0, 2.0);
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

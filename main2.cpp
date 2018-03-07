#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(60);
    glBegin(GL_POINTS);
    glColor3f(0.5f,0.3f,0.6f);
    glVertex3f(0.5f,-0.5f,0.0f); 
    glColor3f(0.7f,1.0f,0.6f);
    glVertex3f(-0.5f,-0.5f,0.0f);
    glColor3f(0.1f,0.3f,0.2f);
    glVertex3f(0.7f,0.7f,-0.0f);
    glColor3f(0.5f,0.9f,1.0f);
    glVertex3f(-0.7f,-0.7f,0.0f);
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(1.0, -1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

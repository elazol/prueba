#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(60);
    
    //////// para realizar el triangulo
    /*glBegin(GL_LINES);    
    
    glColor3f(0.9f,0.2f,0.4f);
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.5f,0.5f,0.0f);
    
    glColor3f(0.5f,0.3f,0.6f);
    glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(1.0f,0.0f,0.0f);   
    
    
    glColor3f(0.9f,0.8f,0.1f);
    glVertex3f(1.0f,0.0f,0.0f);
    glVertex3f(0.0f,0.0f,0.0f);
    
    glColor3f(0.9f,0.2f,0.4f);
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.5f,-0.5f,0.0f);
    
    glColor3f(0.5f,0.3f,0.6f);
    glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(1.0f,-0.0f,0.0f);   
    
   
    glEnd();
    */
    
    
    ///////// para realizar un cuadrado
   /* glBegin(GL_LINE_LOOP);
     glColor3f(0.5f,0.3f,0.6f);  
    glVertex3f(-1.0f,0.0f,0.0f);  //left of window
    glVertex3f(0.0f,-1.0f,0.0f); //bottom of window
    glVertex3f(1.0f,0.0f,0.0f);  //right of window
    glVertex3f(0.0f,1.0f,0.0f);   //top of window
      
    glEnd(); */
    
    /* //PARA HACER TRIANGULOS
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f,0.0f,0.0f); //rojo
		glVertex3f(0.0, 0.8, 0.0);
		glColor3f(0.0f,1.0f,0.0f); //verde
		glVertex3f(-0.6, -0.2, 0.0);
		glColor3f(0.0f,0.0f,1.0f); //azul
		glVertex3f(0.6, -0.2, 0.0);
	glEnd();	*/
	
	///// PARA CREAR POLYGON
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0.0f,0.0f,1.0f);//blue 
	glBegin(GL_POLYGON);// begin drawing of polygon
	glVertex3f(-0.5f, 0.5f, 0.0f);//first
	glVertex3f(0.5, 0.5, 0.0); //second
	glVertex3f(1.0, 0.0, 0.0); // third
	glVertex3f(0.5, -0.5, 0.0); //fourth
	glVertex3f(-0.5, -0.5, 0.0); //fifth
	glVertex3f(-1.0, 0.0, 0.0);//sixth
	glEnd();
    
    
    
    
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
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

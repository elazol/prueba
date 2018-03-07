#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(6);
    ////uno
/*glColor3f(0.5f,0.3f,0.6f);
 * glBegin(GL_QUADS);
    
    glVertex3f(0.5f,0.5f,0.0f);   
    glVertex3f(0.5f,0.5f,0.0f);    
    glVertex3f(0.7f,0.7f,0.0f);    
    glVertex3f(0.7f,0.7f,0.0f);
    
    glEnd();*/
    //// segundo
    
  /*  glBegin(GL_QUAD_STRIP);
    //first
    glColor3f(1.0f,0.0f,0.0f);
    glVertex3f(0.5f,0.0f,0.0f);   
    glVertex3f(-0.5f,0.5f,0.0f);    
    glVertex3f(0.0f,-0.5f,0.0f);    
    glVertex3f(0.0f,0.5f,0.0f);
    
    // secont
    glColor3f(1.0f,1.0f,0.0f);
    glVertex3f(0.5f,-0.7f,0.0f);   
    glVertex3f(0.7f,0.5f,0.0f);    
    
        // third
    glColor3f(0.0f,1.0f,0.0f);
    glVertex3f(0.8f,-0.8f,0.0f);   
    glVertex3f(0.8f,0.9f,0.0f);   
    
    glEnd();
    */
    
    //// circulo solido
   /* glColor3f(1.0f,1.0f,0.0f);
    GLfloat angulo;
    int i;
    
    glBegin(GL_LINES);
    for(i=0; i<630; i+=1)    
    {
		angulo =i*M_PI/180.0f; //grados a radianes
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(cos(angulo), sin(angulo), 0.0f);
		
		}
    glEnd();*/
    
    ///// circulo con linea
    /*
    glColor3f(1.0f,1.0f,0.0f);
    GLfloat angulo;
    int i;
    
    glBegin(GL_POINTS);
    for(i=0; i<360; i+=1)    
    {
		angulo =i*M_PI/180.0f; //grados a radianes
		
		glVertex3f(cos(angulo), sin(angulo), 0.0f);
		
		
		}
    glEnd();*/
    
    //// hacer sen y cos
    
     
    glBegin(GL_POINTS);
    GLfloat x,y,i;
    
    
    glColor3f(1.0f,1.0f,0.0f);
    for(i=-3.0; i<=3.0; i+=0.1)    
    {
		x=i;
		y=sin((M_PI)*x);
		
		glVertex3f(y,x,0.0f);	
		
		}
	
	glColor3f(1.0f,1.0f,1.0f);
    for(i=-3.0; i<=3.0; i+=0.1)    
    {
		x=i;
		y=cos((M_PI)*x);
		
		glVertex3f(y,x,0.0f);	
		
		}
		
		
    glEnd();
    
    
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-4.0, 4.0, -4.0, 4.0, -4.0, 4.0);
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

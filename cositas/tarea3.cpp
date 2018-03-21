#include <GL/gl.h>//// se utiliza para incluir las librerias de opengl
#include <GL/glut.h>////se utiliza para incluir las librerias de opengl
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);//// se usa para definir un color a la pantalla de la aplicacion
    glPointSize(60);//// define un tamaño al elemento a dibujar
    glBegin(GL_POINTS);	//// define el tipo de elemento que se dibujara, encierra el parentesis el nombre de una primitiva
    glColor3f(0.2f,0.0f,0.6f);//// se usa para dar color
    glVertex3f(-0.7f,0.7f,0.0f);// SEGUNDO CUADRANTE //// se usan para definir la coordenada donde se colocara un punto
    glColor3f(0.7f,1.0f,1.0f);//// se usa para dar color
    glVertex3f(0.7f,-0.7f,0.0f);// CUARTO CUADRANTE//// se usan para definir la coordenada donde se colocara un punto
    glColor3f(0.1f,1.0f,0.3f);//// se usa para dar color
    glVertex3f(0.7f,0.7f,0.0f);// PRIMER CUADRANTE  //// se usan para definir la coordenada donde se colocara un punto
    glColor3f(0.9f,1.0f,0.6f);//// se usa para dar color
    glVertex3f(-0.7f,-0.7f,0.0f);// TERCER CUADRANTO//// se usan para definir la coordenada donde se colocara un punto
    glEnd();//// se usa para indicar el cierre del glBegin
    glFlush ();//// es usado para que el programa dibuje las instrucciones 
    
    


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);//// es para indicar a opengl como debe proyectar nuestros graficos en la pantalla
    glLoadIdentity();////carga la matriz identidad para evirtar errores en los calculos
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);//// es utilizado para definir el angulo que tendra la camara para poder visualizar el elemento dibujado
    
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);//// es para iniciar la libreria glut y el opengl
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);//// se usa para indicar a opengl que se usara la libreria GLUT_SINGLE para dibujar y ademas se definen los colores con GLUT_RGB
    glutInitWindowSize (250, 250);//// se utiliza para definir el tamaño que tendra la ventana al ejecutar el programa
    glutInitWindowPosition (850, 370);//// se utiliza para definir la posicion en la que aparecera la pantalla al ejecutar el programa
    glutCreateWindow ("Ejemplo Puntos");//// define el titulo de la ventana
    init ();////se encarga de inicializar todas las variables de opengl
    glutDisplayFunc(display);////es para indicar a opengl que es lo que se desea dibujar en la pantalla
    glutMainLoop();//// es para que el programa no se cierre y espere hasta que decidados que evento le sigue
    return 0;//// retorna un valor entero
}

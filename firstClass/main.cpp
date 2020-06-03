#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

glColor3f (255, 215, 0);
glBegin(GL_POLYGON);
glVertex3f (0.1, 0.1, 0.0);
glVertex3f (0.5, 0.1, 0.0);
glVertex3f ( 0.5, 0.55, 0.0);
glVertex3f (0.1, 0.55, 0.0);
glEnd();


//bottom part
glColor3f (1, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.08, 0.08, 0.0);
glVertex3f (0.52, 0.08, 0.0);
glVertex3f ( 0.52, 0.1, 0.0);
glVertex3f (0.08, 0.1, 0.0);
glEnd();


//door
glColor3f (0, 0.75, 0);
glBegin(GL_POLYGON);
glVertex3f (0.25, 0.1, 0.0);
glVertex3f (0.35, 0.1, 0.0);
glVertex3f ( 0.35, 0.40, 0.0);
glVertex3f (0.25, 0.40, 0.0);
glEnd();


//left window
glColor3f (0, 0.75, 0);
glBegin(GL_POLYGON);
glVertex3f (0.11, 0.25, 0.0);
glVertex3f (0.20, 0.25, 0.0);
glVertex3f ( 0.20, 0.38, 0.0);
glVertex3f (0.11, 0.38, 0.0);
glEnd();


//right window
glColor3f (0, 0.75, 0);
glBegin(GL_POLYGON);
glVertex3f (0.40, 0.25, 0.0);
glVertex3f (0.49, 0.25, 0.0);
glVertex3f (0.49, 0.38, 0.0);
glVertex3f ( 0.40, 0.38, 0.0);
glEnd();


//triangle
glColor3f (0, 0.75, 0);
glBegin(GL_POLYGON);
glVertex3f (0.08, 0.55, 0.0);
glVertex3f (0.52, 0.55, 0.0);
glVertex3f ( 0.30, 0.75, 0.0);
glEnd();

/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Small Hut");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

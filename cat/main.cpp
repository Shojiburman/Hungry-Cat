#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
void display(void){

    glClear( GL_COLOR_BUFFER_BIT);
    glPointSize(7.0);

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 1.5);
    glVertex2f(2, 6);
    glVertex2f(6, 6);
    glVertex2f(6, 1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 2.5);
    glVertex2f(6, 6.5);
    glVertex2f(6.5, 6.5);
    glVertex2f(6.5, 2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6.5, 3);
    glVertex2f(6.5, 5.5);
    glVertex2f(7, 5.5);
    glVertex2f(7, 3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 3.5);
    glVertex2f(7, 5);
    glVertex2f(7.5, 5);
    glVertex2f(7.5, 3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 6);
    glVertex2f(2, 7);
    glVertex2f(3, 7);
    glVertex2f(3, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 7);
    glVertex2f(2, 7.5);
    glVertex2f(2.5, 7.5);
    glVertex2f(2.5, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 6);
    glVertex2f(3, 6.5);
    glVertex2f(3.5, 6.5);
    glVertex2f(3.5, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 6);
    glVertex2f(5, 7);
    glVertex2f(6, 7);
    glVertex2f(6, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 7);
    glVertex2f(5, 7.5);
    glVertex2f(5.5, 7.5);
    glVertex2f(5.5, 7);
    glEnd();

    /*---------------eye nose-----------------*/

    glBegin(GL_POLYGON);
    glColor3f(1.5, 1.1, 0.5);
    glVertex2f(4, 4.5);
    glVertex2f(4, 5);
    glVertex2f(4.5, 5);
    glVertex2f(4.5, 4.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.5, .5, 0.0);
    glVertex2f(5.5, 3.5);
    glVertex2f(5.5, 4);
    glVertex2f(6, 4);
    glVertex2f(6, 3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.5, 1.1, 0.5);
    glVertex2f(6, 4.5);
    glVertex2f(6, 5);
    glVertex2f(6.5, 5);
    glVertex2f(6.5, 4.5);
    glEnd();






    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(0,0);
    glutInitWindowSize(800,800);
    glutCreateWindow ("square");

    glClearColor(1, 1, 1, 1.0);         //  background
    glMatrixMode(GL_PROJECTION);              // setup viewing projection
    glLoadIdentity();                           // start with identity matrix
    glOrtho(0.0, 101, 0.0, 101, -1.0, 1.0);   // setup a 10x10x2 viewing world

    glutDisplayFunc(display);

    glutMainLoop();

 return 0;
}

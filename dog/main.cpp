#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
void display(void){

    glClear( GL_COLOR_BUFFER_BIT);
    glPointSize(7.0);

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(0, 3);
    glVertex2f(0, 5);
    glVertex2f(1, 5);
    glVertex2f(1, 3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(1, 3);
    glVertex2f(1, 6);
    glVertex2f(2, 6);
    glVertex2f(2, 3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(2, 4);
    glVertex2f(2, 7);
    glVertex2f(3, 7);
    glVertex2f(3, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(3, 5);
    glVertex2f(3, 8);
    glVertex2f(4, 8);
    glVertex2f(4, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(4, 2);
    glVertex2f(4, 8);
    glVertex2f(10, 8);
    glVertex2f(10, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(5, 1);
    glVertex2f(5, 2);
    glVertex2f(9, 2);
    glVertex2f(9, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(10, 5);
    glVertex2f(10, 8);
    glVertex2f(11, 8);
    glVertex2f(11, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(11, 4);
    glVertex2f(11, 7);
    glVertex2f(12, 7);
    glVertex2f(12, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(12, 3);
    glVertex2f(12, 6);
    glVertex2f(13, 6);
    glVertex2f(13, 3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.7, .7, 0.5);
    glVertex2f(13, 3);
    glVertex2f(13, 5);
    glVertex2f(14, 5);
    glVertex2f(14, 3);
    glEnd();

    /*-------nose--------*/
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(6, 0);
    glVertex2f(6, 2);
    glVertex2f(8, 2);
    glVertex2f(8, 0);
    glEnd();

    /*----------eye--------------*/

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(5, 5);
    glVertex2f(5, 6);
    glVertex2f(6, 6);
    glVertex2f(6, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(8, 5);
    glVertex2f(8, 6);
    glVertex2f(9, 6);
    glVertex2f(9, 5);
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

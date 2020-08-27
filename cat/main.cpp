#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
void display(void){

    glClear( GL_COLOR_BUFFER_BIT);
    glPointSize(7.0);

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(0, 4);
    glVertex2f(0, 7);
    glVertex2f(1, 7);
    glVertex2f(1, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(1, 3);
    glVertex2f(1, 8);
    glVertex2f(2, 8);
    glVertex2f(2, 3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(2, 2);
    glVertex2f(2, 5);
    glVertex2f(3, 5);
    glVertex2f(3, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(2, 6);
    glVertex2f(2, 9);
    glVertex2f(3, 9);
    glVertex2f(3, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(3, 2);
    glVertex2f(3, 4);
    glVertex2f(4, 4);
    glVertex2f(4, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(4, 0);
    glVertex2f(4, 2);
    glVertex2f(7, 2);
    glVertex2f(7, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(7, 0);
    glVertex2f(7, 1);
    glVertex2f(8, 1);
    glVertex2f(8, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(4, 2);
    glVertex2f(4, 12);
    glVertex2f(12, 12);
    glVertex2f(12, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(9, 0);
    glVertex2f(9, 2);
    glVertex2f(12, 2);
    glVertex2f(12, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(12, 0);
    glVertex2f(12, 1);
    glVertex2f(13, 1);
    glVertex2f(13, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(12, 5);
    glVertex2f(12, 13);
    glVertex2f(13, 13);
    glVertex2f(13, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(13, 6);
    glVertex2f(13, 11);
    glVertex2f(14, 11);
    glVertex2f(14, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(14, 7);
    glVertex2f(14, 10);
    glVertex2f(15, 10);
    glVertex2f(15, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(4, 12);
    glVertex2f(4, 14);
    glVertex2f(6, 14);
    glVertex2f(6, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(4, 14);
    glVertex2f(4, 15);
    glVertex2f(5, 15);
    glVertex2f(5, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(6, 12);
    glVertex2f(6, 13);
    glVertex2f(7, 13);
    glVertex2f(7, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(10, 12);
    glVertex2f(10, 14);
    glVertex2f(12, 14);
    glVertex2f(12, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(10, 14);
    glVertex2f(10, 15);
    glVertex2f(11, 15);
    glVertex2f(11, 14);
    glEnd();

    /*---------------eye nose-----------------*/

    glBegin(GL_POLYGON);
    glColor3f(1.5, 1.1, 0.5);
    glVertex2f(8, 9);
    glVertex2f(8, 10);
    glVertex2f(9, 10);
    glVertex2f(9, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.5, .5, 0.0);
    glVertex2f(11, 7);
    glVertex2f(11, 8);
    glVertex2f(12, 8);
    glVertex2f(12, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.5, 1.1, 0.5);
    glVertex2f(12, 9);
    glVertex2f(12, 10);
    glVertex2f(13, 10);
    glVertex2f(13, 9);
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

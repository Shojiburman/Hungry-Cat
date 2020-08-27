#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat positionup = 0.0f;
GLfloat speed = 0.1f;


GLfloat pos = 0.0f;
GLfloat spe = 0.1f;


void updateNew(int value) {

    if(pos <-1.0)
        pos = .5f;

    pos -= spe;

	glutPostRedisplay();


	glutTimerFunc(100, updateNew, 0);
}


void display(void){

    glClear( GL_COLOR_BUFFER_BIT);
    glPointSize(7.0);
/*---------------------------------------wall----------------*/
    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.5, 0.5);
    glVertex2f(0, 0);
    glVertex2f(0, 101);
    glVertex2f(1, 101); //left wall
    glVertex2f(1, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.5, 0.5);
    glVertex2f(0, 0);
    glVertex2f(0, 1); //bottom wall
    glVertex2f(55, 1);
    glVertex2f(55, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.5, 0.5);
    glVertex2f(54, 0);
    glVertex2f(54, 101); //right wall
    glVertex2f(55, 101);
    glVertex2f(55, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.5, 0.5);
    glVertex2f(0, 100);
    glVertex2f(0, 101); //top wall
    glVertex2f(55, 101);
    glVertex2f(54, 100);
    glEnd();

    /*----------------maze brick 1----------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(0, 14);
    glVertex2f(0, 15); //1
    glVertex2f(15, 15);
    glVertex2f(15, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(7, 7);
    glVertex2f(7, 8); //1
    glVertex2f(15, 8);
    glVertex2f(15, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(14, 7);
    glVertex2f(15, 7); //1
    glVertex2f(15, 14);
    glVertex2f(14, 14);
    glEnd();

    /*----------------maze brick 2----------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(20, 0);
    glVertex2f(21, 0); //2
    glVertex2f(21, 22);
    glVertex2f(20, 22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(7, 21);
    glVertex2f(7, 22); //2
    glVertex2f(20, 22);
    glVertex2f(20, 21);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(7, 22);
    glVertex2f(8, 22); //2
    glVertex2f(8, 29);
    glVertex2f(7, 29);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(8, 28);
    glVertex2f(8, 29); //2
    glVertex2f(14, 29);
    glVertex2f(14, 28);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(14, 28);
    glVertex2f(15, 28); //2
    glVertex2f(15, 50);
    glVertex2f(14, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(21, 6);
    glVertex2f(21, 7); //2
    glVertex2f(28, 7);
    glVertex2f(28, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(7, 43);
    glVertex2f(7, 44); //1
    glVertex2f(14, 44);
    glVertex2f(14, 43);
    glEnd();
    /*----------------------------------3----------------------------*/
    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(14, 50);
    glVertex2f(14, 51); //1
    glVertex2f(28, 51);
    glVertex2f(28, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(20, 51);
    glVertex2f(21, 51); //1
    glVertex2f(21, 86);
    glVertex2f(20, 86);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(14, 65);
    glVertex2f(14, 66); //1
    glVertex2f(20, 66);
    glVertex2f(20, 65);
    glEnd();
/*----------------------------4------------------------------*/
    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(7, 94);
    glVertex2f(7, 95); //1
    glVertex2f(13, 95);
    glVertex2f(13, 94);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(13, 95);
    glVertex2f(14, 95); //1
    glVertex2f(14, 87);
    glVertex2f(13, 87);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(13, 87);
    glVertex2f(13, 86); //1
    glVertex2f(41, 86);
    glVertex2f(41, 87);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(40, 87);
    glVertex2f(41, 87); //1
    glVertex2f(41, 95);
    glVertex2f(40, 95);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(41, 94);
    glVertex2f(41, 95); //1
    glVertex2f(48, 95);
    glVertex2f(48, 94);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(27, 87);
    glVertex2f(28, 87); //1
    glVertex2f(28, 94);
    glVertex2f(27, 94);
    glEnd();

    /*-----------------------------5--------------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(20, 94);
    glVertex2f(21, 94); //1
    glVertex2f(21, 100);
    glVertex2f(20, 100);
    glEnd();

    /*------------------------------6----------------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(34, 94);
    glVertex2f(35, 94); //1
    glVertex2f(35, 100);
    glVertex2f(34, 100);
    glEnd();

    /*-----------------------------------7-----------------------------------*/


    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(1, 50);
    glVertex2f(1, 51); //1
    glVertex2f(8, 51);
    glVertex2f(8, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(7, 51);
    glVertex2f(8, 51); //1
    glVertex2f(8, 73);
    glVertex2f(7, 73);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(8, 57);
    glVertex2f(8, 58);
    glVertex2f(14, 58);
    glVertex2f(14, 57);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(8, 72);
    glVertex2f(8, 73);
    glVertex2f(14, 73);
    glVertex2f(14, 72);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(13, 73);
    glVertex2f(14, 73);
    glVertex2f(14, 80);
    glVertex2f(13, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(13, 79);
    glVertex2f(13, 80);
    glVertex2f(7, 80);
    glVertex2f(7, 79);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(7, 80);
    glVertex2f(8, 80);
    glVertex2f(8, 87);
    glVertex2f(7, 87);
    glEnd();

    /*-------------------------8-------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(1, 36);
    glVertex2f(1, 37);
    glVertex2f(6, 37);
    glVertex2f(6, 36);
    glEnd();

    /*----------------9------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(48, 6);
    glVertex2f(48, 7);
    glVertex2f(34, 7);
    glVertex2f(34, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(34, 7);
    glVertex2f(35, 7);
    glVertex2f(35, 15);
    glVertex2f(34, 15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(34, 14);
    glVertex2f(34, 15);
    glVertex2f(27, 15);
    glVertex2f(27, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(27, 15);
    glVertex2f(28, 15);
    glVertex2f(28, 29);
    glVertex2f(27, 29);
    glEnd();

    /*------------------------------10--------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(27, 28);
    glVertex2f(27, 29);
    glVertex2f(48, 29);
    glVertex2f(48, 28);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(47, 29);
    glVertex2f(48, 29);
    glVertex2f(48, 36);
    glVertex2f(47, 36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(34, 29);
    glVertex2f(35, 29);
    glVertex2f(35, 36);
    glVertex2f(34, 36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(34, 36);
    glVertex2f(34, 37);
    glVertex2f(40, 37);
    glVertex2f(40, 36);
    glEnd();

    /*-----------------------------11----------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(40, 36);
    glVertex2f(41, 36);
    glVertex2f(41, 50);
    glVertex2f(40, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(48, 50);
    glVertex2f(48, 51);
    glVertex2f(34, 51);
    glVertex2f(34, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(34, 51);
    glVertex2f(35, 51);
    glVertex2f(35, 57);
    glVertex2f(34, 57);
    glEnd();

    /*--------------------------------------------12----------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(28, 57);
    glVertex2f(28, 58);
    glVertex2f(54, 58);
    glVertex2f(54, 57);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(41, 58);
    glVertex2f(42, 58);
    glVertex2f(42, 65);
    glVertex2f(41, 65);
    glEnd();

    /*--------------------------------------13--------------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(27, 80);
    glVertex2f(28, 80);
    glVertex2f(28, 65);
    glVertex2f(27, 65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(34, 86);
    glVertex2f(35, 86);
    glVertex2f(35, 65);
    glVertex2f(34, 65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(27, 65);
    glVertex2f(27, 66);
    glVertex2f(34, 66);
    glVertex2f(34, 65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(35, 72);
    glVertex2f(35, 73);
    glVertex2f(48, 73);
    glVertex2f(48, 72);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(47, 72);
    glVertex2f(48, 72);
    glVertex2f(48, 65);
    glVertex2f(47, 65);
    glEnd();

    /*-------------------------------14----------------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(54, 42);
    glVertex2f(54, 43);
    glVertex2f(47, 43);
    glVertex2f(47, 42);
    glEnd();

    /*-----------------------------15---------------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(54, 86);
    glVertex2f(54, 87);
    glVertex2f(47, 87);
    glVertex2f(47, 86);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(47, 86);
    glVertex2f(48, 86);
    glVertex2f(48, 80);
    glVertex2f(47, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(40, 79);
    glVertex2f(40, 80);
    glVertex2f(48, 80);
    glVertex2f(48, 79);
    glEnd();

    /*--------------------------16---------------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(54, 13);
    glVertex2f(54, 14);
    glVertex2f(41, 14);
    glVertex2f(41, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(41, 14);
    glVertex2f(42, 14);
    glVertex2f(42, 21);
    glVertex2f(41, 21);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(48, 21);
    glVertex2f(48, 22);
    glVertex2f(34, 22);
    glVertex2f(34, 21);
    glEnd();


    /*--------------------------17---------------------------------*/

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(21, 28);
    glVertex2f(22, 28);
    glVertex2f(22, 43);
    glVertex2f(21, 43);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(22, 36);
    glVertex2f(22, 37);
    glVertex2f(28, 37);
    glVertex2f(28, 36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(27, 37);
    glVertex2f(28, 37);
    glVertex2f(28, 51);
    glVertex2f(27, 51);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.9, 0.5);
    glVertex2f(28, 43);
    glVertex2f(28, 44);
    glVertex2f(34, 44);
    glVertex2f(34, 43);
    glEnd();

    /*---------------CAT---------------------------------------------------*/

    glPushMatrix();

    glTranslatef(position, positionup, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 2);
    glVertex2f(2, 6);
    glVertex2f(6, 6);
    glVertex2f(6, 2);
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

    glPopMatrix();


    glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    position -= 1;
    break;
case 'd':
    position += 1;
    break;
    case 'w':
    positionup += 1;
    break;
case 's':
    positionup -= 1;
    break;
glutPostRedisplay();
	}
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(0,0);
    glutInitWindowSize(800,800);
    glutCreateWindow ("square");

    glClearColor(1, 1, 1, 0.0);         //  background
    glMatrixMode(GL_PROJECTION);              // setup viewing projection
    glLoadIdentity();                           // start with identity matrix
    glOrtho(0.0, 101, 0.0, 101, -1.0, 1.0);   // setup a 10x10x2 viewing world

    glutDisplayFunc(display);

    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, updateNew, 0);

    glutMainLoop();

 return 0;
}

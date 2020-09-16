#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat positionup = 0.0f;
GLfloat speed = 0.1f;

GLfloat pos = 0.0f;
GLfloat spe = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    //position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void updateNew(int value) {

    if(pos <-1.0)
        pos = 1.0f;

    pos -= spe;

	glutPostRedisplay();


	glutTimerFunc(100, updateNew, 0);
}



void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-.04, -1);
    glVertex2f(-.08, -1);
    glVertex2f(-.08, 1);
    glVertex2f(-.04, 1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(.04, -1);
    glVertex2f(.08, -1);
    glVertex2f(.08, -.04);
    glVertex2f(.04, -.04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(.04, .4);
    glVertex2f(.08, .4);
    glVertex2f(.08, .04);
    glVertex2f(.04, .04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(1, -.04);
    glVertex2f(1, -.08);
    glVertex2f(.04, -.08);
    glVertex2f(.08, -.04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(.5, .04);
    glVertex2f(.5, .08);
    glVertex2f(.04, .08);
    glVertex2f(.04, .04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(.40, .4);
    glVertex2f(.40, .44);
    glVertex2f(.16, .44);
    glVertex2f(.16, .4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(.52, .4);
    glVertex2f(.48, .4);
    glVertex2f(.48, .04);
    glVertex2f(.52, .04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(.3, .14);
    glVertex2f(.34, .14);
    glVertex2f(.34, .18);
    glVertex2f(.3, .18);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(.54, .36);
    glVertex2f(.58, .36);
    glVertex2f(.58, .40);
    glVertex2f(.54, .40);
    glEnd();

    glPushMatrix();

    glTranslatef(position, positionup, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.04f, -0.04f);
    glVertex2f( 0.04f, -0.04f);
    glVertex2f( 0.04f,  0.04f);
    glVertex2f(-0.04f,  0.04f);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(pos, 0, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(.5, .44);
    glVertex2f(.54, .44);
    glVertex2f(.54, .48);
    glVertex2f(.5, .48);
    glEnd();

    glPopMatrix();
    glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    position -= 0.04f;
    break;
case 'd':
    position += 0.04f;
    break;
    case 'w':
    positionup += 0.04f;
    break;
case 's':
    positionup -= 0.04f;
    break;
glutPostRedisplay();
	}}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(800, 800);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);


   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, updateNew, 0);
   glutKeyboardFunc(handleKeypress);
   glutMainLoop();
   return 0;
}

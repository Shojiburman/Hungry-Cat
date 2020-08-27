#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,1);

    glPushMatrix();
        glTranslated(0,0,-2);
        glutSolidSphere(.5,100,100);
    glPopMatrix();

    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Programming Techniques - 3D Spheres");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);

    glutMainLoop();

    return EXIT_SUCCESS;
}

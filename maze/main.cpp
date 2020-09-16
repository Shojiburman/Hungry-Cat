#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

GLfloat score = 0.0f;


GLfloat position = 2.0f;
GLfloat positionup = 2.0f;
GLfloat spe = 0.1f;

GLfloat posi = 45.5f;
GLfloat posiu = 1.5f;

GLfloat posD2 = 0.5f;
GLfloat posupD2 = 105.0f;


GLfloat pos = 0.0f;
GLfloat sped = 0.4f;

int flag = 0;

int flag2 = 0;




void updateDog(int value) {
    if((posi > 24) && (flag == 0)){
        sped = .4f;
        posi -= sped;
        flag = 0;

    }
    else if((posi <= 24) && (posi >= 23)){
        sped = .02f;
        posi -= sped;
        flag = 1;
    }
    else if((posi < 23) && (flag == 1)) {
        posi = 24.1;
        sped = .4f;
        posi += sped;
        flag = 2;
    }
    else if((posi > 24) && (posi < 46) && (flag == 2)) {
        sped = .4f;
        posi += sped;
        if(posi > 45){
            flag = 3;
        } else {
            flag = 2;
        }

    }
    else if ((posi > 45) && (flag == 3)){
        posi = 45;
        sped = .4f;
        posi -= sped;
        flag = 0;
    }

	glutPostRedisplay();

	glutTimerFunc(100, updateDog, 0);
}


void updateDog2(int value) {
    if((posupD2 > 56) && (flag2 == 0)){
        sped = .4f;
        posupD2 -= sped;
        flag2 = 0;

    }
    else if((posupD2 <= 56) && (posupD2 >= 55)){
        sped = .02f;
        posupD2 -= sped;
        flag2 = 1;
    }
    else if((posupD2 < 55) && (flag2 == 1)) {
        posupD2 = 56.1;
        sped = .4f;
        posupD2 += sped;
        flag2 = 2;
    }
    else if((posupD2 > 56) && (posupD2 < 106) && (flag2 == 2)) {
        sped = .4f;
        posupD2 += sped;
        if(posupD2 > 104.5){
            flag2 = 3;
        } else {
            flag2 = 2;
        }

    }
    else if ((posupD2 > 104.5) && (flag2 == 3)){
        posupD2 = 104.5;
        sped = .4f;
        posupD2 -= sped;
        flag2 = 0;
    }

	glutPostRedisplay();

	glutTimerFunc(100, updateDog2, 0);
}

void dog(){

    glPushMatrix();
    glScalef(.5,.5,0.0f);
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

    glPopMatrix();
}


void dog_bone(){
    glPushMatrix();
    glTranslatef(24.5, 2.5, 0.0f);

    glScalef(.4,.4,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(1, 0);
    glVertex2f(1, 1);
    glVertex2f(3, 1);
    glVertex2f(3, 0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(0, 1);
    glVertex2f(0, 3);
    glVertex2f(1, 3);
    glVertex2f(1, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(1, 3);
    glVertex2f(1, 4);
    glVertex2f(2, 4);
    glVertex2f(2, 3);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(0, 4);
    glVertex2f(0, 5);
    glVertex2f(1, 5);
    glVertex2f(1, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(0, 5);
    glVertex2f(0, 6);
    glVertex2f(1, 6);
    glVertex2f(1, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(1, 6);
    glVertex2f(1, 7);
    glVertex2f(2, 7);
    glVertex2f(2, 6);
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
    glVertex2f(3, 5);
    glVertex2f(3, 6);
    glVertex2f(4, 6);
    glVertex2f(4, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 4);
    glVertex2f(3, 5);
    glVertex2f(4, 5);
    glVertex2f(4, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 4);
    glVertex2f(4, 5);
    glVertex2f(5, 5);
    glVertex2f(5, 4);

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 4);
    glVertex2f(5, 5);
    glVertex2f(6, 5);
    glVertex2f(6, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 4);
    glVertex2f(6, 5);
    glVertex2f(7, 5);
    glVertex2f(7, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 4);
    glVertex2f(7, 5);
    glVertex2f(8, 5);
    glVertex2f(8, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 4);
    glVertex2f(8, 5);
    glVertex2f(9, 5);
    glVertex2f(9, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 5);
    glVertex2f(8, 6);
    glVertex2f(9, 6);
    glVertex2f(9, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 6);
    glVertex2f(9, 7);
    glVertex2f(10, 7);
    glVertex2f(10, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 6);
    glVertex2f(10, 7);
    glVertex2f(11, 7);
    glVertex2f(11, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 5);
    glVertex2f(11, 6);
    glVertex2f(12, 6);
    glVertex2f(12, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 4);
    glVertex2f(11, 5);
    glVertex2f(12, 5);
    glVertex2f(12, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 3);
    glVertex2f(10, 4);
    glVertex2f(11, 4);
    glVertex2f(11, 3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 2);
    glVertex2f(11, 3);
    glVertex2f(12, 3);
    glVertex2f(12, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 1);
    glVertex2f(11, 2);
    glVertex2f(12, 2);
    glVertex2f(12, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 0);
    glVertex2f(10, 1);
    glVertex2f(11, 1);
    glVertex2f(11, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 0);
    glVertex2f(9, 1);
    glVertex2f(10, 1);
    glVertex2f(10, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 1);
    glVertex2f(8, 2);
    glVertex2f(9, 2);
    glVertex2f(9, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 2);
    glVertex2f(8, 3);
    glVertex2f(9, 3);
    glVertex2f(9, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 2);
    glVertex2f(7, 3);
    glVertex2f(8, 3);
    glVertex2f(8, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 2);
    glVertex2f(6, 3);
    glVertex2f(7, 3);
    glVertex2f(7, 2);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 2);
    glVertex2f(5, 3);
    glVertex2f(6, 3);
    glVertex2f(6, 2);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 2);
    glVertex2f(4, 3);
    glVertex2f(5, 3);
    glVertex2f(5, 2);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 2);
    glVertex2f(3, 3);
    glVertex2f(4, 3);
    glVertex2f(4, 2);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 1);
    glVertex2f(3, 2);
    glVertex2f(4, 2);
    glVertex2f(4, 1);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 0);
    glVertex2f(2, 1);
    glVertex2f(3, 1);
    glVertex2f(3, 0);
    glEnd();
    glPopMatrix();
}

void maze(){
    glPushMatrix();
    glScalef(1.1,1.1,0.0f);

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
    glPopMatrix();
}

void cat(){
    glPushMatrix();

    glTranslatef(position, positionup, 0.0f);
    glScalef(.2,.2,0.0f);

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 0);
    glVertex2f(7, 1);
    glVertex2f(8, 1);
    glVertex2f(8, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 0);
    glVertex2f(8, 1);
    glVertex2f(9, 1);
    glVertex2f(9, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 0);
    glVertex2f(9, 1);
    glVertex2f(10, 1);
    glVertex2f(10, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 0);
    glVertex2f(10, 1);
    glVertex2f(11, 1);
    glVertex2f(11, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 0);
    glVertex2f(11, 1);
    glVertex2f(12, 1);
    glVertex2f(12, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 0);
    glVertex2f(12, 1);
    glVertex2f(13, 1);
    glVertex2f(13, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 0);
    glVertex2f(13, 1);
    glVertex2f(14, 1);
    glVertex2f(14, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 0);
    glVertex2f(14, 1);
    glVertex2f(15, 1);
    glVertex2f(15, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 1);
    glVertex2f(8, 2);
    glVertex2f(9, 2);
    glVertex2f(9, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 1);
    glVertex2f(9, 2);
    glVertex2f(10, 2);
    glVertex2f(10, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 1);
    glVertex2f(10, 2);
    glVertex2f(11, 2);
    glVertex2f(11, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 1);
    glVertex2f(11, 2);
    glVertex2f(12, 2);
    glVertex2f(12, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 1);
    glVertex2f(12, 2);
    glVertex2f(13, 2);
    glVertex2f(13, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 1);
    glVertex2f(13, 2);
    glVertex2f(14, 2);
    glVertex2f(14, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 2);
    glVertex2f(8, 3);
    glVertex2f(9, 3);
    glVertex2f(9, 2);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 2);
    glVertex2f(9, 3);
    glVertex2f(10, 3);
    glVertex2f(10, 2);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 2);
    glVertex2f(10, 3);
    glVertex2f(11, 3);
    glVertex2f(11, 2);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 2);
    glVertex2f(11, 3);
    glVertex2f(12, 3);
    glVertex2f(12, 2);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 2);
    glVertex2f(12, 3);
    glVertex2f(13, 3);
    glVertex2f(13, 2);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(1, 3);
    glVertex2f(1, 4);
    glVertex2f(2, 4);
    glVertex2f(2, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 3);
    glVertex2f(6, 4);
    glVertex2f(7, 4);
    glVertex2f(7, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 3);
    glVertex2f(7, 4);
    glVertex2f(8, 4);
    glVertex2f(8, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 3);
    glVertex2f(8, 4);
    glVertex2f(9, 4);
    glVertex2f(9, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 3);
    glVertex2f(9, 4);
    glVertex2f(10, 4);
    glVertex2f(10, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 3);
    glVertex2f(10, 4);
    glVertex2f(11, 4);
    glVertex2f(11, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 3);
    glVertex2f(11, 4);
    glVertex2f(12, 4);
    glVertex2f(12, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 3);
    glVertex2f(12, 4);
    glVertex2f(13, 4);
    glVertex2f(13, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 3);
    glVertex2f(13, 4);
    glVertex2f(14, 4);
    glVertex2f(14, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(18, 3);
    glVertex2f(18, 4);
    glVertex2f(19, 4);
    glVertex2f(19, 3);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 4);
    glVertex2f(2, 5);
    glVertex2f(3, 5);
    glVertex2f(3, 4);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 4);
    glVertex2f(4, 5);
    glVertex2f(5, 5);
    glVertex2f(5, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 4);
    glVertex2f(5, 5);
    glVertex2f(6, 5);
    glVertex2f(6, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 4);
    glVertex2f(6, 5);
    glVertex2f(7, 5);
    glVertex2f(7, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 4);
    glVertex2f(7, 5);
    glVertex2f(8, 5);
    glVertex2f(8, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 4);
    glVertex2f(8, 5);
    glVertex2f(9, 5);
    glVertex2f(9, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 4);
    glVertex2f(9, 5);
    glVertex2f(10, 5);
    glVertex2f(10, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 4);
    glVertex2f(10, 5);
    glVertex2f(11, 5);
    glVertex2f(11, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 4);
    glVertex2f(11, 5);
    glVertex2f(12, 5);
    glVertex2f(12, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 4);
    glVertex2f(12, 5);
    glVertex2f(13, 5);
    glVertex2f(13, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 4);
    glVertex2f(13, 5);
    glVertex2f(14, 5);
    glVertex2f(14, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 4);
    glVertex2f(14, 5);
    glVertex2f(15, 5);
    glVertex2f(15, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 4);
    glVertex2f(15, 5);
    glVertex2f(16, 5);
    glVertex2f(16, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 4);
    glVertex2f(17, 5);
    glVertex2f(18, 5);
    glVertex2f(18, 4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 5);
    glVertex2f(3, 6);
    glVertex2f(4, 6);
    glVertex2f(4, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 5);
    glVertex2f(4, 6);
    glVertex2f(5, 6);
    glVertex2f(5, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 5);
    glVertex2f(5, 6);
    glVertex2f(6, 6);
    glVertex2f(6, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 5);
    glVertex2f(6, 6);
    glVertex2f(7, 6);
    glVertex2f(7, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 5);
    glVertex2f(7, 6);
    glVertex2f(8, 6);
    glVertex2f(8, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 5);
    glVertex2f(8, 6);
    glVertex2f(9, 6);
    glVertex2f(9, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 5);
    glVertex2f(9, 6);
    glVertex2f(10, 6);
    glVertex2f(10, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 5);
    glVertex2f(10, 6);
    glVertex2f(11, 6);
    glVertex2f(11, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 5);
    glVertex2f(11, 6);
    glVertex2f(12, 6);
    glVertex2f(12, 5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 5);
    glVertex2f(12, 6);
    glVertex2f(13, 6);
    glVertex2f(13, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 5);
    glVertex2f(13, 6);
    glVertex2f(14, 6);
    glVertex2f(14, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 5);
    glVertex2f(14, 6);
    glVertex2f(15, 6);
    glVertex2f(15, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 5);
    glVertex2f(15, 6);
    glVertex2f(16, 6);
    glVertex2f(16, 5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 5);
    glVertex2f(16, 6);
    glVertex2f(17, 6);
    glVertex2f(17, 5);
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
    glVertex2f(3, 6);
    glVertex2f(3, 7);
    glVertex2f(4, 7);
    glVertex2f(4, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 6);
    glVertex2f(4, 7);
    glVertex2f(5, 7);
    glVertex2f(5, 6);
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
    glVertex2f(6, 6);
    glVertex2f(6, 7);
    glVertex2f(7, 7);
    glVertex2f(7, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 6);
    glVertex2f(7, 7);
    glVertex2f(8, 7);
    glVertex2f(8, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 6);
    glVertex2f(8, 7);
    glVertex2f(9, 7);
    glVertex2f(9, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 6);
    glVertex2f(11, 7);
    glVertex2f(12, 7);
    glVertex2f(12, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 6);
    glVertex2f(12, 7);
    glVertex2f(13, 7);
    glVertex2f(13, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 6);
    glVertex2f(13, 7);
    glVertex2f(14, 7);
    glVertex2f(14, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 6);
    glVertex2f(14, 7);
    glVertex2f(15, 7);
    glVertex2f(15, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 6);
    glVertex2f(15, 7);
    glVertex2f(16, 7);
    glVertex2f(16, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 6);
    glVertex2f(16, 7);
    glVertex2f(17, 7);
    glVertex2f(17, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 6);
    glVertex2f(17, 7);
    glVertex2f(18, 7);
    glVertex2f(18, 6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(0, 7);
    glVertex2f(0, 8);
    glVertex2f(1, 8);
    glVertex2f(1, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(1, 7);
    glVertex2f(1, 8);
    glVertex2f(2, 8);
    glVertex2f(2, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 7);
    glVertex2f(2, 8);
    glVertex2f(3, 8);
    glVertex2f(3, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 7);
    glVertex2f(3, 8);
    glVertex2f(4, 8);
    glVertex2f(4, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 7);
    glVertex2f(4, 8);
    glVertex2f(5, 8);
    glVertex2f(5, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 7);
    glVertex2f(5, 8);
    glVertex2f(6, 8);
    glVertex2f(6, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 7);
    glVertex2f(6, 8);
    glVertex2f(7, 8);
    glVertex2f(7, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 7);
    glVertex2f(7, 8);
    glVertex2f(8, 8);
    glVertex2f(8, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 7);
    glVertex2f(8, 8);
    glVertex2f(9, 8);
    glVertex2f(9, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 7);
    glVertex2f(9, 8);
    glVertex2f(10, 8);
    glVertex2f(10, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 7);
    glVertex2f(10, 8);
    glVertex2f(11, 8);
    glVertex2f(11, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 7);
    glVertex2f(11, 8);
    glVertex2f(12, 8);
    glVertex2f(12, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 7);
    glVertex2f(12, 8);
    glVertex2f(13, 8);
    glVertex2f(13, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 7);
    glVertex2f(13, 8);
    glVertex2f(14, 8);
    glVertex2f(14, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 7);
    glVertex2f(14, 8);
    glVertex2f(15, 8);
    glVertex2f(15, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 7);
    glVertex2f(15, 8);
    glVertex2f(16, 8);
    glVertex2f(16, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 7);
    glVertex2f(16, 8);
    glVertex2f(17, 8);
    glVertex2f(17, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 7);
    glVertex2f(17, 8);
    glVertex2f(18, 8);
    glVertex2f(18, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(18, 7);
    glVertex2f(18, 8);
    glVertex2f(19, 8);
    glVertex2f(19, 7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(19, 7);
    glVertex2f(19, 8);
    glVertex2f(20, 8);
    glVertex2f(20, 7);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 8);
    glVertex2f(2, 9);
    glVertex2f(3, 9);
    glVertex2f(3, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 8);
    glVertex2f(3, 9);
    glVertex2f(4, 9);
    glVertex2f(4, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(4, 8);
    glVertex2f(4, 9);
    glVertex2f(5, 9);
    glVertex2f(5, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(5, 8);
    glVertex2f(5, 9);
    glVertex2f(6, 9);
    glVertex2f(6, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 8);
    glVertex2f(6, 9);
    glVertex2f(7, 9);
    glVertex2f(7, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(7, 8);
    glVertex2f(7, 9);
    glVertex2f(8, 9);
    glVertex2f(8, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(8, 8);
    glVertex2f(8, 9);
    glVertex2f(9, 9);
    glVertex2f(9, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 8);
    glVertex2f(9, 9);
    glVertex2f(10, 9);
    glVertex2f(10, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 8);
    glVertex2f(10, 9);
    glVertex2f(11, 9);
    glVertex2f(11, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(11, 8);
    glVertex2f(11, 9);
    glVertex2f(12, 9);
    glVertex2f(12, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(12, 8);
    glVertex2f(12, 9);
    glVertex2f(13, 9);
    glVertex2f(13, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 8);
    glVertex2f(13, 9);
    glVertex2f(14, 9);
    glVertex2f(14, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(14, 8);
    glVertex2f(14, 9);
    glVertex2f(15, 9);
    glVertex2f(15, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(15, 8);
    glVertex2f(15, 9);
    glVertex2f(16, 9);
    glVertex2f(16, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 8);
    glVertex2f(16, 9);
    glVertex2f(17, 9);
    glVertex2f(17, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 8);
    glVertex2f(17, 9);
    glVertex2f(18, 9);
    glVertex2f(18, 8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 9);
    glVertex2f(2, 10);
    glVertex2f(3, 10);
    glVertex2f(3, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(3, 9);
    glVertex2f(3, 10);
    glVertex2f(4, 10);
    glVertex2f(4, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(4, 9);
    glVertex2f(4, 10);
    glVertex2f(5, 10);
    glVertex2f(5, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(5, 9);
    glVertex2f(5, 10);
    glVertex2f(6, 10);
    glVertex2f(6, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 9);
    glVertex2f(6, 10);
    glVertex2f(7, 10);
    glVertex2f(7, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(7, 9);
    glVertex2f(7, 10);
    glVertex2f(8, 10);
    glVertex2f(8, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(8, 9);
    glVertex2f(8, 10);
    glVertex2f(9, 10);
    glVertex2f(9, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 9);
    glVertex2f(9, 10);
    glVertex2f(10, 10);
    glVertex2f(10, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 9);
    glVertex2f(10, 10);
    glVertex2f(11, 10);
    glVertex2f(11, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(11, 9);
    glVertex2f(11, 10);
    glVertex2f(12, 10);
    glVertex2f(12, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(12, 9);
    glVertex2f(12, 10);
    glVertex2f(13, 10);
    glVertex2f(13, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 9);
    glVertex2f(13, 10);
    glVertex2f(14, 10);
    glVertex2f(14, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(14, 9);
    glVertex2f(14, 10);
    glVertex2f(15, 10);
    glVertex2f(15, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(15, 9);
    glVertex2f(15, 10);
    glVertex2f(16, 10);
    glVertex2f(16, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(16, 9);
    glVertex2f(16, 10);
    glVertex2f(17, 10);
    glVertex2f(17, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 9);
    glVertex2f(17, 10);
    glVertex2f(18, 10);
    glVertex2f(18, 9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 10);
    glVertex2f(2, 11);
    glVertex2f(3, 11);
    glVertex2f(3, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(3, 10);
    glVertex2f(3, 11);
    glVertex2f(4, 11);
    glVertex2f(4, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(4, 10);
    glVertex2f(4, 11);
    glVertex2f(5, 11);
    glVertex2f(5, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(5, 10);
    glVertex2f(5, 11);
    glVertex2f(6, 11);
    glVertex2f(6, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 10);
    glVertex2f(6, 11);
    glVertex2f(7, 11);
    glVertex2f(7, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(7, 10);
    glVertex2f(7, 11);
    glVertex2f(8, 11);
    glVertex2f(8, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 10);
    glVertex2f(8, 11);
    glVertex2f(9, 11);
    glVertex2f(9, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 10);
    glVertex2f(9, 11);
    glVertex2f(10, 11);
    glVertex2f(10, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 10);
    glVertex2f(10, 11);
    glVertex2f(11, 11);
    glVertex2f(11, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 10);
    glVertex2f(11, 11);
    glVertex2f(12, 11);
    glVertex2f(12, 10);
    glEnd();

 glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(12, 10);
    glVertex2f(12, 11);
    glVertex2f(13, 11);
    glVertex2f(13, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 10);
    glVertex2f(13, 11);
    glVertex2f(14, 11);
    glVertex2f(14, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(14, 10);
    glVertex2f(14, 11);
    glVertex2f(15, 11);
    glVertex2f(15, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(15, 10);
    glVertex2f(15, 11);
    glVertex2f(16, 11);
    glVertex2f(16, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(16, 10);
    glVertex2f(16, 11);
    glVertex2f(17, 11);
    glVertex2f(17, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 10);
    glVertex2f(17, 11);
    glVertex2f(18, 11);
    glVertex2f(18, 10);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 11);
    glVertex2f(2, 12);
    glVertex2f(3, 12);
    glVertex2f(3, 11);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 11);
    glVertex2f(3, 12);
    glVertex2f(4, 12);
    glVertex2f(4, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(4, 11);
    glVertex2f(4, 12);
    glVertex2f(5, 12);
    glVertex2f(5, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(5, 11);
    glVertex2f(5, 12);
    glVertex2f(6, 12);
    glVertex2f(6, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(6, 11);
    glVertex2f(6, 12);
    glVertex2f(7, 12);
    glVertex2f(7, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 11);
    glVertex2f(7, 12);
    glVertex2f(8, 12);
    glVertex2f(8, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 11);
    glVertex2f(8, 12);
    glVertex2f(9, 12);
    glVertex2f(9, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 11);
    glVertex2f(9, 12);
    glVertex2f(10, 12);
    glVertex2f(10, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 11);
    glVertex2f(10, 12);
    glVertex2f(11, 12);
    glVertex2f(11, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 11);
    glVertex2f(11, 12);
    glVertex2f(12, 12);
    glVertex2f(12, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 11);
    glVertex2f(12, 12);
    glVertex2f(13, 12);
    glVertex2f(13, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(13, 11);
    glVertex2f(13, 12);
    glVertex2f(14, 12);
    glVertex2f(14, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(14, 11);
    glVertex2f(14, 12);
    glVertex2f(15, 12);
    glVertex2f(15, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(15, 11);
    glVertex2f(15, 12);
    glVertex2f(16, 12);
    glVertex2f(16, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 11);
    glVertex2f(16, 12);
    glVertex2f(17, 12);
    glVertex2f(17, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 11);
    glVertex2f(17, 12);
    glVertex2f(18, 12);
    glVertex2f(18, 11);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 12);
    glVertex2f(3, 13);
    glVertex2f(4, 13);
    glVertex2f(4, 12);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 12);
    glVertex2f(4, 13);
    glVertex2f(5, 13);
    glVertex2f(5, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 12);
    glVertex2f(5, 13);
    glVertex2f(6, 13);
    glVertex2f(6, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 12);
    glVertex2f(6, 13);
    glVertex2f(7, 13);
    glVertex2f(7, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 12);
    glVertex2f(7, 13);
    glVertex2f(8, 13);
    glVertex2f(8, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 12);
    glVertex2f(8, 13);
    glVertex2f(9, 13);
    glVertex2f(9, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 12);
    glVertex2f(9, 13);
    glVertex2f(10, 13);
    glVertex2f(10, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 12);
    glVertex2f(10, 13);
    glVertex2f(11, 13);
    glVertex2f(11, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 12);
    glVertex2f(11, 13);
    glVertex2f(12, 13);
    glVertex2f(12, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 12);
    glVertex2f(12, 13);
    glVertex2f(13, 13);
    glVertex2f(13, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 12);
    glVertex2f(13, 13);
    glVertex2f(14, 13);
    glVertex2f(14, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 12);
    glVertex2f(14, 13);
    glVertex2f(15, 13);
    glVertex2f(15, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 12);
    glVertex2f(15, 13);
    glVertex2f(16, 13);
    glVertex2f(16, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 12);
    glVertex2f(16, 13);
    glVertex2f(17, 13);
    glVertex2f(17, 12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 13);
    glVertex2f(2, 14);
    glVertex2f(3, 14);
    glVertex2f(3, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 13);
    glVertex2f(3, 14);
    glVertex2f(4, 14);
    glVertex2f(4, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 13);
    glVertex2f(4, 14);
    glVertex2f(5, 14);
    glVertex2f(5, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 13);
    glVertex2f(5, 14);
    glVertex2f(6, 14);
    glVertex2f(6, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 13);
    glVertex2f(6, 14);
    glVertex2f(7, 14);
    glVertex2f(7, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 13);
    glVertex2f(7, 14);
    glVertex2f(8, 14);
    glVertex2f(8, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 13);
    glVertex2f(8, 14);
    glVertex2f(9, 14);
    glVertex2f(9, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 13);
    glVertex2f(9, 14);
    glVertex2f(10, 14);
    glVertex2f(10, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 13);
    glVertex2f(10, 14);
    glVertex2f(11, 14);
    glVertex2f(11, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 13);
    glVertex2f(11, 14);
    glVertex2f(12, 14);
    glVertex2f(12, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 13);
    glVertex2f(12, 14);
    glVertex2f(13, 14);
    glVertex2f(13, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 13);
    glVertex2f(13, 14);
    glVertex2f(14, 14);
    glVertex2f(14, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 13);
    glVertex2f(14, 14);
    glVertex2f(15, 14);
    glVertex2f(15, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 13);
    glVertex2f(15, 14);
    glVertex2f(16, 14);
    glVertex2f(16, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 13);
    glVertex2f(16, 14);
    glVertex2f(17, 14);
    glVertex2f(17, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 13);
    glVertex2f(17, 14);
    glVertex2f(18, 14);
    glVertex2f(18, 13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 14);
    glVertex2f(2, 15);
    glVertex2f(3, 15);
    glVertex2f(3, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 14);
    glVertex2f(5, 15);
    glVertex2f(6, 15);
    glVertex2f(6, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 14);
    glVertex2f(6, 15);
    glVertex2f(7, 15);
    glVertex2f(7, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 14);
    glVertex2f(7, 15);
    glVertex2f(8, 15);
    glVertex2f(8, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 14);
    glVertex2f(8, 15);
    glVertex2f(9, 15);
    glVertex2f(9, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 14);
    glVertex2f(9, 15);
    glVertex2f(10, 15);
    glVertex2f(10, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 14);
    glVertex2f(10, 15);
    glVertex2f(11, 15);
    glVertex2f(11, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 14);
    glVertex2f(11, 15);
    glVertex2f(12, 15);
    glVertex2f(12, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 14);
    glVertex2f(12, 15);
    glVertex2f(13, 15);
    glVertex2f(13, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 14);
    glVertex2f(13, 15);
    glVertex2f(14, 15);
    glVertex2f(14, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 14);
    glVertex2f(14, 15);
    glVertex2f(15, 15);
    glVertex2f(15, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 14);
    glVertex2f(17, 15);
    glVertex2f(18, 15);
    glVertex2f(18, 14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 15);
    glVertex2f(2, 16);
    glVertex2f(3, 16);
    glVertex2f(3, 15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 15);
    glVertex2f(5, 16);
    glVertex2f(6, 16);
    glVertex2f(6, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(6, 15);
    glVertex2f(6, 16);
    glVertex2f(7, 16);
    glVertex2f(7, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(7, 15);
    glVertex2f(7, 16);
    glVertex2f(8, 16);
    glVertex2f(8, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(8, 15);
    glVertex2f(8, 16);
    glVertex2f(9, 16);
    glVertex2f(9, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(9, 15);
    glVertex2f(9, 16);
    glVertex2f(10, 16);
    glVertex2f(10, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(10, 15);
    glVertex2f(10, 16);
    glVertex2f(11, 16);
    glVertex2f(11, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(11, 15);
    glVertex2f(11, 16);
    glVertex2f(12, 16);
    glVertex2f(12, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(12, 15);
    glVertex2f(12, 16);
    glVertex2f(13, 16);
    glVertex2f(13, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(13, 15);
    glVertex2f(13, 16);
    glVertex2f(14, 16);
    glVertex2f(14, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 15);
    glVertex2f(14, 16);
    glVertex2f(15, 16);
    glVertex2f(15, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 15);
    glVertex2f(17, 16);
    glVertex2f(18, 16);
    glVertex2f(18, 15);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 16);
    glVertex2f(2, 17);
    glVertex2f(3, 17);
    glVertex2f(3, 16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 16);
    glVertex2f(4, 17);
    glVertex2f(5, 17);
    glVertex2f(5, 16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(5, 16);
    glVertex2f(5, 17);
    glVertex2f(6, 17);
    glVertex2f(6, 16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(14, 16);
    glVertex2f(14, 17);
    glVertex2f(15, 17);
    glVertex2f(15, 16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 16);
    glVertex2f(15, 17);
    glVertex2f(16, 17);
    glVertex2f(16, 16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 16);
    glVertex2f(17, 17);
    glVertex2f(18, 17);
    glVertex2f(18, 16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 17);
    glVertex2f(2, 18);
    glVertex2f(3, 18);
    glVertex2f(3, 17);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 17);
    glVertex2f(3, 18);
    glVertex2f(4, 18);
    glVertex2f(4, 17);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(4, 17);
    glVertex2f(4, 18);
    glVertex2f(5, 18);
    glVertex2f(5, 17);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(15, 17);
    glVertex2f(15, 18);
    glVertex2f(16, 18);
    glVertex2f(16, 17);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 17);
    glVertex2f(16, 18);
    glVertex2f(17, 18);
    glVertex2f(17, 17);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 17);
    glVertex2f(17, 18);
    glVertex2f(18, 18);
    glVertex2f(18, 17);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 18);
    glVertex2f(2, 19);
    glVertex2f(3, 19);
    glVertex2f(3, 18);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(3, 18);
    glVertex2f(3, 19);
    glVertex2f(4, 19);
    glVertex2f(4, 18);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(16, 18);
    glVertex2f(16, 19);
    glVertex2f(17, 19);
    glVertex2f(17, 18);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 18);
    glVertex2f(17, 19);
    glVertex2f(18, 19);
    glVertex2f(18, 18);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(2, 19);
    glVertex2f(2, 20);
    glVertex2f(3, 20);
    glVertex2f(3, 19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.9, 0.1, .5);
    glVertex2f(17, 19);
    glVertex2f(17, 20);
    glVertex2f(18, 20);
    glVertex2f(18, 19);
    glEnd();

    glPopMatrix();
}


void dog_home(){
    glBegin(GL_POLYGON);
    glColor3f(1.8, .2, 0.1);
    glVertex2f(23, 1);
    glVertex2f(23, 7);
    glVertex2f(31, 7);
    glVertex2f(31, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, .8);
    glVertex2f(24, 2);
    glVertex2f(24, 6);
    glVertex2f(30, 6);
    glVertex2f(30, 2);
    glEnd();
}

void end_pont(){
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2f(48, 1);
    glVertex2f(48, 7);
    glVertex2f(54, 7);
    glVertex2f(54, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, .3, 0);
    glVertex2f(49, 2);
    glVertex2f(49, 3);
    glVertex2f(50, 3);
    glVertex2f(50, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, .3, 0);
    glVertex2f(49, 4.5);
    glVertex2f(49, 5.5);
    glVertex2f(50, 5.5);
    glVertex2f(50, 4.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, .3, 0);
    glVertex2f(50.5, 3.3);
    glVertex2f(50.5, 4.3);
    glVertex2f(51.5, 4.3);
    glVertex2f(51.5, 3.3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, .3, 0);
    glVertex2f(52, 2);
    glVertex2f(52, 3);
    glVertex2f(53, 3);
    glVertex2f(53, 2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, .3, 0);
    glVertex2f(52, 4.5);
    glVertex2f(52, 5.5);
    glVertex2f(53, 5.5);
    glVertex2f(53, 4.5);
    glEnd();
    glPopMatrix();

}



void display(void){

    glClear( GL_COLOR_BUFFER_BIT);
    glPointSize(7.0);

    maze();
    cat();

    glPushMatrix();
    glTranslatef(posi, posiu, 0.0f);
    dog();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posD2, posupD2, 0.0f);
    dog();
    glPopMatrix();

    dog_home();
    dog_bone();

    glPushMatrix();
    glTranslatef(28.5, 14.5, 0.0f);
    dog_home();
    dog_bone();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22.5, 54, 0.0f);
    dog_home();
    dog_bone();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-.5,87.5, 0.0f);
    dog_home();
    dog_bone();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.2, 55.6, 0.0f);
    end_pont();
    glPopMatrix();

    glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    position -= 1;
    score += 1;
    cout<<score;
    break;
case 'd':
    position += 1;
    score += 1;
    cout<<score;
    break;
    case 'w':
    positionup += 1;
    score += 1;
    cout<<score;
    break;
case 's':
    positionup -= 1;
    score += 1;
    cout<<score;
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

    glClearColor(1, 1, 1, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 111, 0.0, 111, -1.0, 1.0);
    glutDisplayFunc(display);


    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, updateDog, 0);
    glutTimerFunc(100, updateDog2, 0);
    glutMainLoop();

 return 0;
}

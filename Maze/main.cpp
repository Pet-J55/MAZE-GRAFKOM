#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include <GL/glut.h>
#endif

float PosY = 0;
float PosX = 0;
bool maze = false;

void display1(){
	glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-7.0,7.0);
	glVertex2f(-6.0,7.0);
	glVertex2f(-6.0,-7.0);
	glVertex2f(-7.0,-7.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0,7.0);
	glVertex2f(-1.0,7.0);
	glVertex2f(-1.0,6.0);
	glVertex2f(-6.0,6.0);
	glEnd();

    glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,7.0);
	glVertex2f(6.0,7.0);
	glVertex2f(6.0,6.0);
	glVertex2f(0.0,6.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(5.0,7.0);
	glVertex2f(6.0,7.0);
	glVertex2f(6.0,-7.0);
	glVertex2f(5.0,-7.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0,-6.0);
	glVertex2f(-1.0,-6.0);
	glVertex2f(-1.0,-5.0);
	glVertex2f(-6.0,-5.0);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.0,-6.0);
	glVertex2f(6.0,-6.0);
	glVertex2f(6.0,-5.0);
	glVertex2f(0.0,-5.0);
	glEnd();

//batas dinding

	glBegin(GL_POLYGON);
	glVertex2f(-5.0,5.0);
	glVertex2f(-2.0,5.0);
	glVertex2f(-2.0,4.0);
	glVertex2f(-4,4.0);
	glVertex2f(-4,1.0);
	glVertex2f(-5,1.0);
	glEnd();
//challenge 1

	glBegin(GL_POLYGON);
	glVertex2f(-3.0,0.0);
	glVertex2f(-3.0,3.0);
	glVertex2f(-2.0,3.0);
	glVertex2f(-2.0,-1.0);
	glVertex2f(-5.0,-1.0);
	glVertex2f(-5.0,0.0);
	glVertex2f(-3.0,0.0);
	glEnd();
//challenge 2

	glBegin(GL_POLYGON);
	glVertex2f(-1.0,5.0);
	glVertex2f(2.0,5.0);
	glVertex2f(2.0,4.0);
	glVertex2f(-1.0,4.0);
	glEnd();
//challenge 3

	glBegin(GL_POLYGON);
	glVertex2f(-1.0,3.0);
	glVertex2f(0,3.0);
	glVertex2f(0,-2.0);
	glVertex2f(-1,-2.0);
	glEnd();
//challenge 4a

	glBegin(GL_POLYGON);
	glVertex2f(0,-2.0);
	glVertex2f(0,-1.0);
	glVertex2f(1,-1.0);
	glVertex2f(1,-2.0);
	glEnd();
//challenge 4b

	glBegin(GL_POLYGON);
	glVertex2f(1,3.0);
	glVertex2f(2,3.0);
	glVertex2f(2,-2.0);
	glVertex2f(1,-2.0);
	glEnd();
//challenge 4c


	glBegin(GL_POLYGON);
	glVertex2f(3.0,5.0);
	glVertex2f(4.0,5.0);
	glVertex2f(4.0,1.0);
	glVertex2f(3,1.0);
	glEnd();
//challenge 5

	glBegin(GL_POLYGON);
	glVertex2f(3.0,0.0);
	glVertex2f(4.0,0.0);
	glVertex2f(4.0,-5.0);
	glVertex2f(3,-5.0);
	glEnd();
//challenge 6

	glBegin(GL_POLYGON);
	glVertex2f(-1.0,-3.0);
	glVertex2f(2.0,-3.0);
	glVertex2f(2.0,-4.0);
	glVertex2f(-1,-4.0);
	glEnd();
//challenge 7

	glBegin(GL_POLYGON);
	glVertex2f(-2.0,-2.0);
	glVertex2f(-2.0,-3.0);
	glVertex2f(-5.0,-3.0);
	glVertex2f(-5,-2.0);
	glEnd();
//challenge 8

	glBegin(GL_POLYGON);
	glVertex2f(-3.0,-4.0);
	glVertex2f(-3.0,-5.0);
	glVertex2f(-2.0,-5.0);
	glVertex2f(-2,-4.0);
	glEnd();
//challenge 9

	glBegin(GL_POLYGON);
	glVertex2f(-4.0,-4.0);
	glVertex2f(-4.0,-5.0);
	glVertex2f(-5.0,-5.0);
	glVertex2f(-5,-4.0);
	glEnd();
//challenge 10

// LUAR
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(4.05,0.75);
        glVertex2f(4.25,0.75);
        glVertex2f(4.25,0.25);
        glVertex2f(4.05,0.25);
    glEnd();

// DALAM
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(4.08,0.70);
        glVertex2f(4.22,0.70);
        glVertex2f(4.22,0.30);
        glVertex2f(4.08,0.30);
    glEnd();
//0

// ATAS
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(4.35,0.75);
        glVertex2f(4.55,0.75);
        glVertex2f(4.55,0.65);
        glVertex2f(4.35,0.65);
    glEnd();

// TENGAH
    glBegin(GL_POLYGON);
        glVertex2f(4.35,0.52);
        glVertex2f(4.55,0.52);
        glVertex2f(4.55,0.42);
        glVertex2f(4.35,0.42);
    glEnd();

// BAWAH
    glBegin(GL_POLYGON);
        glVertex2f(4.35,0.30);
        glVertex2f(4.55,0.30);
        glVertex2f(4.55,0.20);
        glVertex2f(4.35,0.20);
    glEnd();

// KANAN
    glBegin(GL_POLYGON);
        glVertex2f(4.50,0.65);
        glVertex2f(4.55,0.65);
        glVertex2f(4.55,0.30);
        glVertex2f(4.50,0.30);
    glEnd();

//3 tengah

// ATAS
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(4.65,0.75);
        glVertex2f(4.85,0.75);
        glVertex2f(4.85,0.65);
        glVertex2f(4.65,0.65);
    glEnd();

// TENGAH
    glBegin(GL_POLYGON);
        glVertex2f(4.65,0.52);
        glVertex2f(4.85,0.52);
        glVertex2f(4.85,0.42);
        glVertex2f(4.65,0.42);
    glEnd();

// BAWAH
    glBegin(GL_POLYGON);
        glVertex2f(4.65,0.30);
        glVertex2f(4.85,0.30);
        glVertex2f(4.85,0.20);
        glVertex2f(4.65,0.20);
    glEnd();

// KANAN
    glBegin(GL_POLYGON);
        glVertex2f(4.80,0.65);
        glVertex2f(4.85,0.65);
        glVertex2f(4.85,0.30);
        glVertex2f(4.80,0.30);
    glEnd();
//3 kanan


	glColor3f(0,1,0);
    glBegin(GL_POLYGON);
	glVertex2f(-1.0 + PosX,7.0 + PosY);
	glVertex2f(0.0 + PosX,7.0 + PosY);
	glVertex2f(0.0 + PosX,6.0 + PosY);
	glVertex2f(-1.0 + PosX,6.0 + PosY);
	glEnd();
//player
	glFlush();
}

void display2(){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-7.0,7.0);
	glVertex2f(-6.0,7.0);
	glVertex2f(-6.0,-7.0);
	glVertex2f(-7.0,-7.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0,7.0);
	glVertex2f(-1.0,7.0);
	glVertex2f(-1.0,6.0);
	glVertex2f(-6.0,6.0);
	glEnd();

    glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,7.0);
	glVertex2f(6.0,7.0);
	glVertex2f(6.0,6.0);
	glVertex2f(0.0,6.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(5.0,7.0);
	glVertex2f(6.0,7.0);
	glVertex2f(6.0,-7.0);
	glVertex2f(5.0,-7.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0,-6.0);
	glVertex2f(-1.0,-6.0);
	glVertex2f(-1.0,-5.0);
	glVertex2f(-6.0,-5.0);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.0,-6.0);
	glVertex2f(6.0,-6.0);
	glVertex2f(6.0,-5.0);
	glVertex2f(0.0,-5.0);
	glEnd();

//batas dinding

	glBegin(GL_POLYGON);
	glVertex2f(-3.0,5.0);
	glVertex2f(0.0,5.0);
	glVertex2f(0.0,4.0);
	glVertex2f(-2,4.0);
	glVertex2f(-2,1.0);
	glVertex2f(-3,1.0);
	glEnd();
//challenge 1

	glBegin(GL_POLYGON);
	glVertex2f(-1.0,0.0);
	glVertex2f(-1.0,3.0);
	glVertex2f(0.0,3.0);
	glVertex2f(0.0,-1.0);
	glVertex2f(-3.0,-1.0);
	glVertex2f(-3.0,0.0);
	glVertex2f(-1.0,0.0);
	glEnd();
//challenge 2

	glBegin(GL_POLYGON);
	glVertex2f(1.0,5.0);
	glVertex2f(4.0,5.0);
	glVertex2f(4.0,4.0);
	glVertex2f(1.0,4.0);
	glEnd();
//challenge 3

	glBegin(GL_POLYGON);
	glVertex2f(1.0,3.0);
	glVertex2f(2,3.0);
	glVertex2f(2,-2.0);
	glVertex2f(1,-2.0);
	glEnd();
//challenge 4a

	glBegin(GL_POLYGON);
	glVertex2f(2,-2.0);
	glVertex2f(2,-1.0);
	glVertex2f(3,-1.0);
	glVertex2f(3,-2.0);
	glEnd();
//challenge 4b

	glBegin(GL_POLYGON);
	glVertex2f(3,3.0);
	glVertex2f(4,3.0);
	glVertex2f(4,-2.0);
	glVertex2f(3,-2.0);
	glEnd();
//challenge 4c


	glBegin(GL_POLYGON);
	glVertex2f(-5.0,5.0);
	glVertex2f(-4.0,5.0);
	glVertex2f(-4.0,1.0);
	glVertex2f(-5,1.0);
	glEnd();
//challenge 5

	glBegin(GL_POLYGON);
	glVertex2f(-5.0,0.0);
	glVertex2f(-4.0,0.0);
	glVertex2f(-4.0,-5.0);
	glVertex2f(-5,-5.0);
	glEnd();
//challenge 6

	glBegin(GL_POLYGON);
	glVertex2f(1.0,-3.0);
	glVertex2f(4.0,-3.0);
	glVertex2f(4.0,-4.0);
	glVertex2f(1,-4.0);
	glEnd();
//challenge 7

	glBegin(GL_POLYGON);
	glVertex2f(0.0,-2.0);
	glVertex2f(0.0,-3.0);
	glVertex2f(-3.0,-3.0);
	glVertex2f(-3,-2.0);
	glEnd();
//challenge 8

	glBegin(GL_POLYGON);
	glVertex2f(-1.0,-3.0);
	glVertex2f(-1.0,-4.0);
	glVertex2f(0.0,-4.0);
	glVertex2f(0,-3.0);
	glEnd();
//challenge 9

	glBegin(GL_POLYGON);
	glVertex2f(-2.0,-4.0);
	glVertex2f(-2.0,-5.0);
	glVertex2f(-3.0,-5.0);
	glVertex2f(-3,-4.0);
	glEnd();
//challenge 10

// LUAR
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(2.05,0.75);
        glVertex2f(2.25,0.75);
        glVertex2f(2.25,0.25);
        glVertex2f(2.05,0.25);
    glEnd();

// DALAM
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(2.08,0.70);
        glVertex2f(2.22,0.70);
        glVertex2f(2.22,0.30);
        glVertex2f(2.08,0.30);
    glEnd();
//0

// ATAS
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(2.35,0.75);
        glVertex2f(2.55,0.75);
        glVertex2f(2.55,0.65);
        glVertex2f(2.35,0.65);
    glEnd();

// TENGAH
    glBegin(GL_POLYGON);
        glVertex2f(2.35,0.52);
        glVertex2f(2.55,0.52);
        glVertex2f(2.55,0.42);
        glVertex2f(2.35,0.42);
    glEnd();

// BAWAH
    glBegin(GL_POLYGON);
        glVertex2f(2.35,0.30);
        glVertex2f(2.55,0.30);
        glVertex2f(2.55,0.20);
        glVertex2f(2.35,0.20);
    glEnd();

// KANAN
    glBegin(GL_POLYGON);
        glVertex2f(2.50,0.65);
        glVertex2f(2.55,0.65);
        glVertex2f(2.55,0.30);
        glVertex2f(2.50,0.30);
    glEnd();

//3 tengah

// ATAS
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(2.65,0.75);
        glVertex2f(2.85,0.75);
        glVertex2f(2.85,0.65);
        glVertex2f(2.65,0.65);
    glEnd();

// TENGAH
    glBegin(GL_POLYGON);
        glVertex2f(2.65,0.52);
        glVertex2f(2.85,0.52);
        glVertex2f(2.85,0.42);
        glVertex2f(2.65,0.42);
    glEnd();

// BAWAH
    glBegin(GL_POLYGON);
        glVertex2f(2.65,0.30);
        glVertex2f(2.85,0.30);
        glVertex2f(2.85,0.20);
        glVertex2f(2.65,0.20);
    glEnd();

// KANAN
    glBegin(GL_POLYGON);
        glVertex2f(2.80,0.65);
        glVertex2f(2.85,0.65);
        glVertex2f(2.85,0.30);
        glVertex2f(2.80,0.30);
    glEnd();
//3 kanan


	glColor3f(0,1,0);
    glBegin(GL_POLYGON);
	glVertex2f(-1.0 + PosX,7.0 + PosY);
	glVertex2f(0.0 + PosX,7.0 + PosY);
	glVertex2f(0.0 + PosX,6.0 + PosY);
	glVertex2f(-1.0 + PosX,6.0 + PosY);
	glEnd();
//player
	glFlush();
}

void gerak(unsigned char key, int x, int y){
    if(key == 'w') {
        PosY += 0.1;
    }
    else if (key == 's') {
        PosY -= 0.1;
    }
    else if (key == 'a') {
        PosX -= 0.1;
    }
    else if (key == 'd') {
        PosX += 0.1;
    }
    else if (key == 'c' || key == 'C'){
        int randAngka = rand() % 2;
        maze = randAngka;
    }

    glutPostRedisplay();
}

void display(){
    if (maze == false){
        display1();
    }else{
    display2();
    }
}

void myinit(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-7,6,-6,7);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	//glutInitWindowPosition(100,100);
	glutCreateWindow("Maze UTS");
	glutDisplayFunc(display);
	glutKeyboardFunc(gerak);
	srand (time(NULL));
	myinit();
	glutMainLoop();

	return 0;
}

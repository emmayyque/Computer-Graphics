#include <iostream>
#include <Windows.h>
#include <gl/Gl.h>
#include <gl/glut.h>


void MyInit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1400.0, 0.0, 800.0);
}

void sky() {
	// Sky Here 
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.749, 1.0);
	glVertex2i(0, 800);
	glVertex2i(1400, 800);
	glVertex2i(1400, 300);
	glVertex2i(0, 300);
	glEnd();

	// Sun Here
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(-50, 630);
	glVertex2i(50, 740);
	glVertex2i(150, 630);
	glEnd();

	// Cloud 1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(15, 790);
	glVertex2i(150, 790);
	glVertex2i(150, 715);
	glVertex2i(15, 715);
	glEnd();

	// Cloud 2
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(0, 650);
	glVertex2i(120, 650);
	glVertex2i(120, 570);
	glVertex2i(0, 570);
	glEnd();

	// Cloud 3
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(330, 765);
	glVertex2i(465, 765);
	glVertex2i(465, 690);
	glVertex2i(330, 690);
	glEnd();
}

void grass() {
	// Grass Here 
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0.0039);
	glVertex2i(0, 100);
	glVertex2i(1400, 100);
	glVertex2i(1400, 0);
	glVertex2i(0, 0);
	glEnd();
}

void road() {
	// Road Here 
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(0, 300);
	glVertex2i(1400, 300);
	glVertex2i(1400, 100);
	glVertex2i(0, 100);
	glEnd();

	// Road Path
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(0, 195);
	glVertex2i(1400, 195);
	glVertex2i(1400, 205);
	glVertex2i(0, 205);
	glEnd();
}

void office() {
	// Office Here 
	// Front
	glBegin(GL_POLYGON);
	glColor3f(0.101, 0.098, 0.6);
	glVertex2i(40, 550);
	glVertex2i(300, 550);
	glVertex2i(300, 300);
	glVertex2i(40, 300);
	glEnd();

	// Roof
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.501, 0.0);
	glVertex2i(70, 620);
	glVertex2i(270, 620);
	glVertex2i(300, 550);
	glVertex2i(40, 550);
	glEnd();

	// Door 
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(110, 450);
	glVertex2i(170, 450);
	glVertex2i(170, 300);
	glVertex2i(110, 300);
	glEnd();

	// Window 
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(200, 510);
	glVertex2i(280, 510);
	glVertex2i(280, 450);
	glVertex2i(200, 450);
	glEnd();

	// Window Lining 1
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(238, 510);
	glVertex2i(244, 510);
	glVertex2i(244, 450);
	glVertex2i(238, 450);
	glEnd();

	// Window Lining 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200, 483);
	glVertex2i(280, 483);
	glVertex2i(280, 477);
	glVertex2i(200, 477);
	glEnd();
}

void alpha_residency() {
	// Alpha Residency Here
	// Front
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.6, 1.0);
	glVertex2i(375, 650);
	glVertex2i(875, 650);
	glVertex2i(875, 300);
	glVertex2i(375, 300);
	glEnd();

	// Roof
	glBegin(GL_POLYGON);
	glColor3f(0.6, 1.0, 1.0);
	glVertex2i(445, 720);
	glVertex2i(805, 720);
	glVertex2i(875, 650);
	glVertex2i(375, 650);
	glEnd();

	// Door 
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(550, 490);
	glVertex2i(700, 490);
	glVertex2i(700, 300);
	glVertex2i(550, 300);
	glEnd();

	// Window Top Center
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(550, 500);
	glVertex2i(700, 500);
	glVertex2i(700, 610);
	glVertex2i(550, 610);
	glEnd();

	// Window Top Left
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(390, 500);
	glVertex2i(540, 500);
	glVertex2i(540, 610);
	glVertex2i(390, 610);
	glEnd();

	// Window Top Right
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(710, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 610);
	glVertex2i(710, 610);
	glEnd();

	// Window Bottom Left
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(390, 330);
	glVertex2i(540, 330);
	glVertex2i(540, 450);
	glVertex2i(390, 450);
	glEnd();

	// Window Bottom Right
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(710, 330);
	glVertex2i(860, 330);
	glVertex2i(860, 450);
	glVertex2i(710, 450);
	glEnd();

	// Middle Lining
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(375, 496);
	glVertex2i(875, 496);
	glVertex2i(875, 490);
	glVertex2i(375, 490);
	glEnd();
}

void trees() {
	// Trees Here
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.501, 0.0);
	glVertex2i(950, 550);
	glVertex2i(1035, 625);
	glVertex2i(1120, 550);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.501, 0.0);
	glVertex2i(925, 500);
	glVertex2i(1035, 575);
	glVertex2i(1145, 500);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.501, 0.0);
	glVertex2i(900, 450);
	glVertex2i(1075, 600);
	glVertex2i(1250, 450);
	glEnd();
}

void home() {
	// Home Here	
	// Front Left
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(1000, 650);
	glVertex2i(1170, 650);
	glVertex2i(1170, 300);
	glVertex2i(1000, 300);
	glEnd();

	// Front Right
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(1170, 480);
	glVertex2i(1340, 480);
	glVertex2i(1340, 300);
	glVertex2i(1170, 300);
	glEnd();

	// Roof 
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(1000, 650);
	glVertex2i(1085, 720);
	glVertex2i(1170, 650);
	glEnd();

	// Windows Left
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1045, 300);
	glVertex2i(1125, 300);
	glVertex2i(1125, 450);
	glVertex2i(1045, 450);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1045, 480);
	glVertex2i(1125, 480);
	glVertex2i(1125, 580);
	glVertex2i(1045, 580);
	glEnd();


	// Window Right
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1205, 430);
	glVertex2i(1305, 430);
	glVertex2i(1305, 350);
	glVertex2i(1205, 350);
	glEnd();
}

void create_scene() {
	glClear(GL_COLOR_BUFFER_BIT);
	sky();
	grass();
	road();
	office();
	alpha_residency();
	trees();
	home();
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1400, 800);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Assignment 1");
	glutDisplayFunc(create_scene);
	MyInit();
	glutMainLoop();
}
#include <iostream>
#include <Windows.h>
#include <gl/Gl.h>
#include <gl/glut.h>


void MyInit() {
	glClearColor(0.5, 0.9, 0.4, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1400.0, 0.0, 800.0);

}


void get_window_1() {
	// Window 1-1
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(930, 370);
	glVertex2i(980, 370);
	glVertex2i(980, 330);
	glVertex2i(930, 330);
	glEnd();

	// Window 1-2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(990, 370);
	glVertex2i(1040, 370);
	glVertex2i(1040, 330);
	glVertex2i(990, 330);
	glEnd();

	// Window 1-3
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(930, 320);
	glVertex2i(980, 320);
	glVertex2i(980, 280);
	glVertex2i(930, 280);
	glEnd();

	// Window 1-4
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(990, 320);
	glVertex2i(1040, 320);
	glVertex2i(1040, 280);
	glVertex2i(990, 280);
	glEnd();
}

void get_window_2() {
	// Window 2-1
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(1150, 370);
	glVertex2i(1200, 370);
	glVertex2i(1200, 330);
	glVertex2i(1150, 330);
	glEnd();

	// Window 2-2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(1210, 370);
	glVertex2i(1260, 370);
	glVertex2i(1260, 330);
	glVertex2i(1210, 330);
	glEnd();

	// Window 2-3
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(1150, 320);
	glVertex2i(1200, 320);
	glVertex2i(1200, 280);
	glVertex2i(1150, 280);
	glEnd();

	// Window 2-4
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(1210, 320);
	glVertex2i(1260, 320);
	glVertex2i(1260, 280);
	glVertex2i(1210, 280);
	glEnd();
}

void triangle() {
	// Roof Triangle
	glBegin(GL_TRIANGLES);
	glColor3f(0.208, 0.9, 0.867);
	glVertex2i(700, 400);
	glVertex2i(800, 550);
	glVertex2i(900, 400);
	glEnd();
}

void draw_home() {
	// Roof Triangle
	glBegin(GL_TRIANGLES);
	glColor3f(0.208, 0.592, 0.867);
	glVertex2i(700, 400);
	glVertex2i(800, 550);
	glVertex2i(900, 400);
	glEnd();

	// Roof 
	glBegin(GL_POLYGON);
	glColor3f(0.208, 0.592, 0.58);
	glVertex2i(800, 550);
	glVertex2i(1250, 550);
	glVertex2i(1350, 400);
	glVertex2i(900, 400);
	glEnd();

	// Door Area
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.349);
	glVertex2i(700, 400);
	glVertex2i(900, 400);
	glVertex2i(900, 100);
	glVertex2i(700, 100);
	glEnd();

	// Door 
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.4);
	glVertex2i(740, 280);
	glVertex2i(860, 280);
	glVertex2i(860, 100);
	glVertex2i(740, 100);
	glEnd();

	// Door Knob 
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(750, 220);
	glVertex2i(780, 220);
	glVertex2i(780, 200);
	glVertex2i(750, 200);
	glEnd();

	// Door Path
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(740, 100);
	glVertex2i(860, 100);
	glVertex2i(840, 0);
	glVertex2i(650, 0);
	glEnd();


	// Tree
	glBegin(GL_POLYGON);
	glColor3f(0.157, 0.09, 0.078);
	glVertex2i(530, 250);
	glVertex2i(570, 250);
	glVertex2i(570, 100);
	glVertex2i(530, 100);
	glEnd();

	// Tree
	glBegin(GL_TRIANGLES);
	glColor3f(0, 0.325, 0.027);
	glVertex2i(510, 250);
	glVertex2i(550, 310);
	glVertex2i(590, 250);
	glEnd();

	// Side Wall
	glBegin(GL_POLYGON);
	glColor3f(0.208, 0.4, 0.349);
	glVertex2i(900, 400);
	glVertex2i(1350, 400);
	glVertex2i(1350, 100);
	glVertex2i(900, 100);
	glEnd();

	get_window_1();
	get_window_2();
}

void draw_mountains() {

	// Mountains 
	glBegin(GL_TRIANGLES);
	glColor3f(0.157, 0.09, 0.078);
	glVertex2i(0, 100);
	glVertex2i(300, 700);
	glVertex2i(600, 100);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.459, 0.231, 0.145);
	glVertex2i(300, 100);
	glVertex2i(600, 600);
	glVertex2i(900, 100);
	glEnd();

}

void transformations() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glScalef(1.3, 1.3, 1.0);
	draw_mountains();
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(250.0, 240.0, 1.0);
	triangle();
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glRotatef(20.0, 0.0, 0.0, 1.0);
	triangle();
	glPopMatrix();
}


void create_scene() {
	glClear(GL_COLOR_BUFFER_BIT);
	transformations();
	draw_home();
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1400, 800);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Practice");
	glutDisplayFunc(create_scene);
	MyInit();
	glutMainLoop();
}
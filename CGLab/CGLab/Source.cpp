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
	gluOrtho2D(0.0, 200.0, 0.0, 200.0);

}

void mydisplay() {
	glLineWidth(10.0);
	glBegin(GL_POLYGON);
	
		// Code for Triangle

		glVertex2i(0, 110);
		glVertex2i(45, 180);
		glVertex2i(45, 180);
		glVertex2i(90, 110);
		glVertex2i(90, 110);
		glVertex2i(0, 110); 


		// Code for Rectangle

		/*glVertex2i(10, 150);
		glVertex2i(100, 150);

		glVertex2i(100, 150);
		glVertex2i(100, 90);

		glVertex2i(100, 90);
		glVertex2i(10, 90);

		glVertex2i(10, 90);
		glVertex2i(10, 150);*/
	glEnd();
	glFlush();
}

void draw_rect_by_rect(void) {
	glColor3f(1.0, 0.0, 0.0);
	glRecti(10, 10, 100, 100);
	glColor3f(0.0, 1.0, 0.0);
	glRecti(80, 80, 150, 150);
	glFlush();
}

void draw_triangle_by_gl() {

	glBegin(GL_TRIANGLES);
		glColor3f(0.5, 0.0, 0.0);
		glVertex2i(10, 10);
		glColor3f(0.5, 0.0, 0.8);
		glVertex2i(100, 150);
		glColor3f(0.5, 0.7, 0.8);
		glVertex2i(180, 10);
	glEnd();
		
	glFlush();
}

void draw_pentagon_by_gl() {
	glBegin(GL_QUADS);
	glVertex2i(50, 100);
	glVertex2i(100, 10);
	glEnd();
	glFlush();
}

void draw_square_by_line() {
	glBegin(GL_LINE_LOOP);
		// Code for Rectangle
		glVertex2i(10, 250);
		glVertex2i(100, 250);
		glVertex2i(100, 300);
		glVertex2i(10, 300);
	glEnd();
	glFlush();
}

void draw_home() {
	glClear(GL_COLOR_BUFFER_BIT);

	// Top Triangle
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.8, 0.7);
	//glColor3f(0.137, 0.81, 0.41);
	glVertex2i(25, 125);
	glVertex2i(50, 175);
	glVertex2i(75, 125);
	glEnd();

	// Roof
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(50, 175);
	glVertex2i(150, 175);
	glVertex2i(175, 125);
	glVertex2i(75, 125);
	glEnd()
;

	// Door Area
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(25, 125);
	glVertex2i(75, 125);
	glVertex2i(75, 25);
	glVertex2i(25, 25);
	glEnd();

	// Door 
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.5, 1.0);
	glVertex2i(35, 80);
	glVertex2i(65, 80);
	glVertex2i(65, 25);
	glVertex2i(35, 25);
	glEnd();

	// Door Knob
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(38, 60);
	glVertex2i(48, 60);
	glVertex2i(48, 50);
	glVertex2i(38, 50);
	glEnd();

	// Door Path
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(35, 25);
	glVertex2i(65, 25);
	glVertex2i(55, 0);
	glVertex2i(10, 0);
	glEnd();

	// Wall 
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.25);
	glVertex2i(75, 125);
	glVertex2i(175, 125);
	glVertex2i(175, 25);
	glVertex2i(75, 25);
	glEnd();


	//// Window Area
	//// Upper Layer Win 1
	// 1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(80, 120);
	glVertex2i(95, 120);
	glVertex2i(95, 105);
	glVertex2i(80, 105);
	glEnd();

	// 2
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(98, 120);
	glVertex2i(113, 120);
	glVertex2i(113, 105);
	glVertex2i(98, 105);
	glEnd();

	// 3
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(80, 102);
	glVertex2i(95, 102);
	glVertex2i(95, 87);
	glVertex2i(80, 87);
	glEnd();

	// 4
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(98, 102);
	glVertex2i(113, 102);
	glVertex2i(113, 87);
	glVertex2i(98, 87);
	glEnd();


	// 1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(125, 120);
	glVertex2i(140, 120);
	glVertex2i(140, 105);
	glVertex2i(125, 105);
	glEnd();

	// 2
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(143, 120);
	glVertex2i(157, 120);
	glVertex2i(157, 105);
	glVertex2i(143, 105);
	glEnd();

	// 3
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(125, 102);
	glVertex2i(140, 102);
	glVertex2i(140, 87);
	glVertex2i(125, 87);
	glEnd();

	// 4
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(143, 102);
	glVertex2i(157, 102);
	glVertex2i(157, 87);
	glVertex2i(143, 87);
	glEnd();


	glFlush();

}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 400);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Practice");
	glutDisplayFunc(draw_home);
	MyInit();
	glutMainLoop();
}
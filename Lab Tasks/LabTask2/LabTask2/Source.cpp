#include <iostream>
#include <Windows.h>
#include <gl/Gl.h>
#include <gl/glut.h>


void MyInit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 500.0);
}


void get_square(GLfloat c1, GLfloat c2, GLfloat c3) {
	glBegin(GL_POLYGON);
	glColor3f(c1, c2, c3);
	glVertex2i(200, 60);
	glVertex2i(600, 60);
	glVertex2i(600, 0);
	glVertex2i(200, 0);
	glEnd();
}

void get_triangle(GLfloat c1, GLfloat c2, GLfloat c3) {
	glBegin(GL_POLYGON);
	glColor3f(c1, c2, c3);
	glVertex2i(350, 300);
	glVertex2i(400, 360);
	glVertex2i(450, 300);
	glEnd();
}

void transformed_rect(GLfloat s1, GLfloat s2, GLfloat s3, GLfloat t1, GLfloat t2, GLfloat t3, GLfloat c1, GLfloat c2, GLfloat c3) {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glScalef(s1, s2, s3);
	glTranslatef(t1, t2, t3);
	get_square(c1, c2, c3);
	glPopMatrix();
}


void create_scene() {
	glClear(GL_COLOR_BUFFER_BIT);
	// Scene will render here
	get_square(0.686, 0.815, 0.215);
	transformed_rect(0.9, 1.0, 0.9, 45.0, 60.0, 1.0, 0.0, 0.705, 0.552);
	transformed_rect(0.8, 1.0, 0.8, 100.0, 120.0, 1.0, 0.184, 0.435, 0.717);
	transformed_rect(0.7, 1.0, 0.8, 175.0, 180.0, 1.0, 0.933, 0.105, 0.164);
	transformed_rect(0.6, 1.0, 0.8, 270.0, 240.0, 1.0, 0.972, 0.603, 0.258);
	get_triangle(0.941, 0.866, 0.090);
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 500);
	glutInitWindowPosition(200, 150);
	glutCreateWindow("Practice");
	glutDisplayFunc(create_scene);
	MyInit();
	glutMainLoop();
}
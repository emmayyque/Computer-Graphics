//#include <iostream>
//#include <Windows.h>
//#include <gl/Gl.h>
//#include <gl/glut.h>
//
//
//// Function to render the scene
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the screen
//    glLoadIdentity(); // Reset transformations
//
//    // Move teapot to a visible position
//    glTranslatef(0.0f, 0.0f, -5.0f);
//
//    // Draw a teapot of size 1.0
//    glutSolidTeapot(1.0);
//
//    glutSwapBuffers(); // Swap buffers for smooth rendering
//}
//
//// Function to set up OpenGL properties
//void init() {
//    glEnable(GL_DEPTH_TEST); // Enable depth testing
//    glClearColor(0.0, 0.0, 0.0, 1.0); // Background color (black)
//}
//
//// Function to handle window resizing
//void reshape(int w, int h) {
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluPerspective(45.0, (float)w / (float)h, 1.0, 10.0);
//    glMatrixMode(GL_MODELVIEW);
//}
//
//// Main function
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//    glutInitWindowSize(800, 600);
//    glutCreateWindow("Teapot in OpenGL");
//
//    init();
//
//    glutDisplayFunc(display);
//    glutReshapeFunc(reshape);
//
//    glutMainLoop();
//    return 0;
//}
#include <iostream>
#include <Windows.h>
#include <gl/Gl.h>
#include <gl/glut.h>
#include <cmath>

// Initialization function
void MyInit() {
    glClearColor(0.8, 0.8, 0.8, 1.0);  // Light grey background
    glColor3f(0.0, 0.0, 0.0);          // Default color is black
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1920.0, 0.0, 1080.0);  // Set 2D orthogonal view
}

void bench_back() {
    glBegin(GL_POLYGON);
    glColor3f(0.639, 0.341, 0.203);
    glVertex2f(150, 480);
    glVertex2f(150, 500);
    glVertex2f(1200, 500);
    glVertex2f(1200, 480);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.701, 0.701, 0.694);
    glVertex2f(165, 485);
    glVertex2f(165, 495);
    glVertex2f(185, 495);
    glVertex2f(185, 485);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.701, 0.701, 0.694);
    glVertex2f(1165, 485);
    glVertex2f(1165, 495);
    glVertex2f(1185, 495);
    glVertex2f(1185, 485);
    glEnd();
}

void swing() {
    // Back Legs
    // Left Back Leg
    glBegin(GL_POLYGON);
    glColor3f(0.682, 0.160, 0.176);
    glVertex2f(1380, 310);
    glVertex2f(1380, 570);
    glVertex2f(1410, 570);
    glVertex2f(1410, 310);
    glEnd();

    // Right Back Leg
    glBegin(GL_POLYGON);
    glColor3f(0.682, 0.160, 0.176);
    glVertex2f(1790, 310);
    glVertex2f(1790, 570);
    glVertex2f(1820, 570);
    glVertex2f(1820, 310);
    glEnd();

    // Base
    glBegin(GL_POLYGON);
    glColor3f(0.737, 0.737, 0.741);
    glVertex2f(1350, 550);
    glVertex2f(1350, 565);
    glVertex2f(1850, 565);
    glVertex2f(1850, 550);
    glEnd();

    // Front Legs
    // Left Front Leg
    glBegin(GL_POLYGON);
    glColor3f(0.909, 0.133, 0.180);
    glVertex2f(1270, 290);
    glVertex2f(1380, 570);
    glVertex2f(1410, 570);
    glVertex2f(1300, 290);
    glEnd();

    // Right Front Leg
    glBegin(GL_POLYGON);
    glColor3f(0.909, 0.133, 0.180);
    glVertex2f(1890, 290);
    glVertex2f(1790, 570);
    glVertex2f(1820, 570);
    glVertex2f(1920, 290);
    glEnd();

    // Seat
    glBegin(GL_POLYGON);
    glColor3f(0.729, 0.403, 0.090);
    glVertex2f(1450, 400);
    glVertex2f(1450, 410);
    glVertex2f(1750, 410);
    glVertex2f(1750, 400);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(1500, 390);
    glVertex2f(1500, 570);
    glVertex2f(1510, 570);
    glVertex2f(1510, 390);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(1690, 390);
    glVertex2f(1690, 570);
    glVertex2f(1700, 570);
    glVertex2f(1700, 390);
    glEnd();
}

void grass() {
    glBegin(GL_POLYGON);
    glColor3f(0.666, 0.815, 0.239);
    glVertex2f(0, 370);
    glVertex2f(0, 700);
    glVertex2f(1920, 700);
    glVertex2f(1920, 370);
    glEnd();
}

void background() {
    glBegin(GL_POLYGON);
    glColor3f(0.764, 0.905, 0.988);
    glVertex2f(0, 700);
    glVertex2f(0, 1080);
    glVertex2f(1920, 1080);
    glVertex2f(1920, 700);
    glEnd();
}

void tree() {
    glBegin(GL_POLYGON);
    glColor3f(0.447, 0.278, 0.113);
    glVertex2f(200, 390);
    glVertex2f(200, 580);
    glVertex2f(270, 580);
    glVertex2f(270, 390);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.4, 0.023);
    glVertex2f(80, 500);
    glVertex2f(235, 580);
    glVertex2f(390, 500);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.4, 0.023);
    glVertex2f(90, 530);
    glVertex2f(235, 600);
    glVertex2f(380, 530);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.4, 0.023);
    glVertex2f(90, 560);
    glVertex2f(235, 620);
    glVertex2f(380, 560);
    glEnd();
}

void group_of_trees() {
    tree();

    glPushMatrix();
    glTranslatef(300, 150, 0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(900, 80, 0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1400, 120, 0);
    tree();
    glPopMatrix();
}

void bench_base() {
    glBegin(GL_POLYGON);
    glColor3f(0.639, 0.341, 0.203);
    glVertex2f(120, 370);
    glVertex2f(150, 380);
    glVertex2f(1200, 380);
    glVertex2f(1230, 370);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.639, 0.341, 0.203);
    glVertex2f(90, 358);
    glVertex2f(120, 368);
    glVertex2f(1230, 368);
    glVertex2f(1260, 358);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.639, 0.341, 0.203);
    glVertex2f(60, 345);
    glVertex2f(90, 355);
    glVertex2f(1260, 355);
    glVertex2f(1290, 345);
    glEnd();
}

void bench_support() {

    // Bench shadow
    glBegin(GL_POLYGON);
    glColor3f(0.760, 0.686, 0.572);
    glVertex2f(150, 250);
    glVertex2f(230, 310);
    glVertex2f(1100, 310);
    glVertex2f(1170, 250);
    glEnd();
    
    // Legs of Bench
    glBegin(GL_POLYGON);
    glColor3f(0.270, 0.215, 0.203);
    glVertex2f(120, 250);
    glVertex2f(120, 340);
    glVertex2f(150, 340);
    glVertex2f(150, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.270, 0.215, 0.203);
    glVertex2f(120, 340);
    glVertex2f(190, 370);
    glVertex2f(220, 370);
    glVertex2f(150, 340);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.270, 0.215, 0.203);
    glVertex2f(1170, 250);
    glVertex2f(1170, 340);
    glVertex2f(1200, 340);
    glVertex2f(1200, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.270, 0.215, 0.203);
    glVertex2f(1170, 340);
    glVertex2f(1100, 370);
    glVertex2f(1130, 370);
    glVertex2f(1200, 340);
    glEnd();

    // Back Support
    glBegin(GL_POLYGON);
    glColor3f(0.270, 0.215, 0.203);
    glVertex2f(200, 310);
    glVertex2f(200, 480);
    glVertex2f(230, 480);
    glVertex2f(230, 310);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.270, 0.215, 0.203);
    glVertex2f(1100, 310);
    glVertex2f(1100, 480);
    glVertex2f(1130, 480);
    glVertex2f(1130, 310);
    glEnd();
}

void bench() {
    // Bench Back
    // Stick 1
    bench_support();

    bench_back();
    glPushMatrix();
        glTranslatef(0, -30, 0);
        bench_back();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0, -60, 0);
        bench_back();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0, -90, 0);
        bench_back();
    glPopMatrix();

    bench_base();
}

void path() {
    glBegin(GL_POLYGON);
        glColor3f(0.862, 0.788, 0.670);
        glVertex2f(0, 110);
        glVertex2f(0, 370);
        glVertex2f(1920, 370);
        glVertex2f(1920, 110);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3f(0.639, 0.564, 0.443);
        glVertex2f(0, 350);
        glVertex2f(0, 370);
        glVertex2f(1920, 370);
        glVertex2f(1920, 350);
    glEnd();
}

void reflection() {
    background();
    path();
    grass();
    group_of_trees();
    bench();
    swing();
}

void pond() {
    glBegin(GL_POLYGON);
        glColor3f(0.713, 0.995, 0.941);
        glVertex2f(0, 0);
        glVertex2f(0, 110);
        glVertex2f(1920, 110);
        glVertex2f(1920, 0);
    glEnd();

    glPushMatrix();
    //glRotatef(360, 1, 0, 0);
    //glTranslatef(200, 0, 0);
    glScalef(-1, 0, 0);
    glTranslatef(500, 0, 0);
    reflection();
    glPopMatrix();
}

void actual_scene() {
    background();
    pond();
    path();
    grass();
    group_of_trees();
    bench();
    swing();
}

// Function to apply transformations and draw the scene
void draw_park_scene() {
    //// Draw objects in their original positions (without transformations)
    //drawBench(300, 150);  // Bench at position (300, 150)
    //drawPond(600, 200, 50);  // Pond at position (600, 200)
    //drawSwing(700, 300);

    glViewport(0, 0, 960, 1080);
    actual_scene();


    glViewport(960, 0, 960, 1080);
    //glBegin(GL_POLYGON);
    //    glColor3f(1.0, 1.0, 0.0);
    //    glVertex2f(0, 1080);      // Reset local coordinates again
    //    glVertex2f(960, 1080);
    //    glVertex2f(960, 0);
    //    glVertex2f(0, 0);
    //glEnd();

    //glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen

    //drawTree(100, 400);  // Tree at position (100, 400)
    //drawBench(300, 150);  // Bench at position (300, 150)
    //drawPond(600, 200, 50);  // Pond at position (600, 200)
    //drawSwing(700, 300);  // Swing at position (700, 300)

    //// Right viewport (after applying transformations)
    //glViewport(960, 0, 960, 1080);  // Right half of the window
    //glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen
    //glColor3f(1.0, 0.0, 0.0);
    

    glFlush();  // Render all of the OpenGL commands
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);  // Window size
    glutCreateWindow("Park Simulation");  // Window title
    MyInit();  // Initialize OpenGL settings
    glutDisplayFunc(draw_park_scene);  // Set the function to draw the scene
    glutMainLoop();  // Start the GLUT main loop
    return 0;
}

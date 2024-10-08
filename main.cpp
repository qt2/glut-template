#include <GL/glut.h>
#include <iostream>

using namespace std;

/// Draw a white rectangle
void draw_rect(double x, double y, double w, double h) {
    double dx = w / 2.0, dy = h / 2.0;
    double x1 = x - dx, x2 = x + dx;
    double y1 = y - dy, y2 = y + dy;

    glColor3d(1.0, 1.0, 1.0); // Fill with white
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2d(x1, y2);
    glVertex2d(x1, y1);
    glVertex2d(x2, y2);
    glVertex2d(x2, y1);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    draw_rect(0.0, 0.0, 0.4, 0.8);
    glFlush();
}

void init() { glClearColor(0.0, 0.0, 0.0, 1.0); }

int main(int argc, char *argv[]) {
    glutInitWindowSize(640, 480);
    glutInit(&argc, argv);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

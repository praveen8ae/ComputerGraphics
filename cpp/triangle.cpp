#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, -0.5); // Vertex 1
    glVertex2f(0.5, -0.5);  // Vertex 2
    glVertex2f(0.0, 0.5);   // Vertex 3
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Triangle Renderer");
    glClearColor(0.0, 0.0, 0.0, 1.0); // Set clear color to black
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Set the coordinate system
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

#include <GL/glut.h>

GLfloat angle = 9.0f;

void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glClearColor(0,0,0,0);
   glLoadIdentity();
   glRotatef(angle, 0.0f, 0.0f, 1.0f); //mengganti gaya putaran

   glBegin(GL_TRIANGLES);  // merah
   glColor3f(1.0f, 0.0f, 0.0f);  
   glVertex2f(-0.2f, -0.2f);       // titik kordinat merah
   glVertex2f(0.0f, -0.6f);
   glVertex2f(0.2f, -0.2f);

   glColor3f(1.0f, 1.0f, 0.0f); //kuning tengah
   glVertex2f(-0.4f, -0.1f);     // titik kordinat kuning
   glVertex2f(0.4f, -0.1f);
   glVertex2f(0.0f, 0.5f);

   glColor3f(0.0f, 1.0f, 0.0f); //hijau
   glVertex2f(-0.2f, 0.2f);      // titik kordinat hijau
   glVertex2f(0.0f, 0.6f);
   glVertex2f(0.2f, 0.2f);

   glColor3f(0.0f, 0.0f, 1.0f); //biru
   glVertex2f(-0.2f, -0.2f);     // titik kordinat biru
   glVertex2f(-0.6f, 0.0f);
   glVertex2f(-0.2f, 0.2f);

   glColor3f(1.0f, 0.0f, 1.0f); //ungu
   glVertex2f(0.2f, -0.2f);      // titik kordinat ungu
   glVertex2f(0.6f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();

   glutSwapBuffers();
}

void spin() {
   angle += 9.0f;
   if (angle > 360.0f) // warna bayangan 1
      angle -= 360.0f; // warna bayangan 2
   glutPostRedisplay();
   
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize(400, 400);
   glutCreateWindow("Shuriken Bintang");
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glutDisplayFunc(display);
   glutIdleFunc(spin);
   glutMainLoop();
   return 0;
}
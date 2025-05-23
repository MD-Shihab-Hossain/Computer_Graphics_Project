#include<windows.h>
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,-0.2f);
   glVertex2f(0.5f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();

glPopMatrix();



   glFlush();
}
void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("a.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("car.wav", NULL, SND_ASYNC | SND_FILENAME);

}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   init();




glutTimerFunc(100, update, 0);

sound();
   glutMainLoop();


   return 0;
}


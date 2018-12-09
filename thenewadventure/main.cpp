
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<windows.h>

float shift = 0 ;
float shift1 = -200;

void shootingstar()
{
   float beta;
    glColor3ub(234,212,173);
    glBegin(GL_POLYGON);
    for(int j = 0; j < 360; j++){
        beta = j * 3.1416/180;
        glVertex2f(290+shift+15 * cos(beta), 950+shift1+15* sin(beta));
    }
    glEnd();

    glColor3ub(245,213,158);
glBegin(GL_TRIANGLES);
glVertex2d (50+shift, 995+shift1);
glVertex2d (285+shift, 940+shift1);
glVertex2d (295+shift, 960+shift1);
glEnd();
}


void ground()
{
    glColor3ub(51,61,71);
glBegin(GL_LINES);
glVertex2d (0, 200);
glVertex2d (150, 250);
glVertex2d (150, 250);
glVertex2d (350, 220);
glVertex2d (350, 220);
glVertex2d (1000, 370);


glEnd();

  glColor3ub(51,61,71);
glBegin(GL_QUADS);
glVertex2d (0, 200);
glVertex2d (0, 0);
glVertex2d (150, 0);
glVertex2d (150, 250);
;
glEnd();

 glColor3ub(51,61,71);
glBegin(GL_QUADS);
glVertex2d (150, 250);
glVertex2d (150, 0);
glVertex2d (350, 0);
glVertex2d (350, 220);
;
glEnd();

glColor3ub(51,61,71);
glBegin(GL_QUADS);
glVertex2d (350, 220);
glVertex2d (350, 0);
glVertex2d (1000, 0);
glVertex2d (1000, 370);
;
glEnd();
}

void hills()
{
    glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (700, 330);
glVertex2d (680, 295);
glVertex2d (730, 301.5);
glEnd();


glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (720, 300);
glVertex2d (890, 345);
glVertex2d (740, 460);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_POLYGON);
glVertex2d (850, 370);
glVertex2d (890, 345);
glVertex2d (950, 357);
glVertex2d (930, 360);
glVertex2d (910, 370);
glVertex2d (890, 350);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (90, 250);
glVertex2d (80, 225);
glVertex2d (110, 237);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (120, 250);
glVertex2d (90, 230);
glVertex2d (130, 243);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (180, 255);
glVertex2d (170, 246);
glVertex2d (190, 245);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (20, 135);
glVertex2d (15, 120);
glVertex2d (30, 125);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (85, 90);
glVertex2d (80, 75);
glVertex2d (90, 85);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_QUADS);
glVertex2d (135, 180);
glVertex2d (130, 170);
glVertex2d (140, 170);
glVertex2d (145, 180);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (805, 185);
glVertex2d (790, 170);
glVertex2d (820, 180);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (825, 230);
glVertex2d (830, 220);
glVertex2d (850, 225);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_QUADS);
glVertex2d (930, 80);
glVertex2d (920, 70);
glVertex2d (940, 70);
glVertex2d (950, 80);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_QUADS);
glVertex2d (810, 40);
glVertex2d (800, 30);
glVertex2d (820, 30);
glVertex2d (830, 40);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_QUADS);
glVertex2d (750, 335);
glVertex2d (730, 300);
glVertex2d (820, 300);
glVertex2d (840, 340);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_QUADS);
glVertex2d (870, 120);
glVertex2d (850, 110);
glVertex2d (880, 110);
glVertex2d (890, 120);
glEnd();

glColor3ub(16,19,18);
glBegin(GL_TRIANGLES);
glVertex2d (880, 330);
glVertex2d (870, 320);
glVertex2d (890, 320);
glEnd();


}


void movingThings()
{
    float theta;
    glColor3ub(12,16,19);
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; i++){
        theta = i * 3.1416/180;
        glVertex2f(352+shift+25 * cos(theta), 323+25* sin(theta));
    }
    glEnd();


   glColor3ub(32,3,11);
glBegin(GL_QUADS);
glVertex2d (339.5+shift, 300);
glVertex2d (339.5+shift, 220);
glVertex2d (365.5+shift, 220);
glVertex2d (365.5+shift, 300);
glEnd();

glColor3ub(32,3,11);
glBegin(GL_QUADS);
glVertex2d (339.5+shift, 300);
glVertex2d (320+shift, 200);
glVertex2d (325+shift, 205);
glVertex2d (350+shift, 280);
glEnd();

glColor3ub(32,3,11);
glBegin(GL_QUADS);
glVertex2d (339.5+shift, 220);
glVertex2d (330+shift, 210);
glVertex2d (335+shift, 230);
glVertex2d (340+shift, 240);
glEnd();

glColor3ub(12,16,19);
glBegin(GL_POLYGON);
glVertex2d (340+shift, 220);
glVertex2d (330+shift, 140);
glVertex2d (335+shift, 138);
glVertex2d (355+shift, 200);
glVertex2d (365+shift, 180);
glVertex2d (367+shift, 140);
glVertex2d (370+shift, 142);
glVertex2d (372+shift, 185);
glVertex2d (365+shift, 220);
glEnd();
    glColor3ub(13,16,19);
glBegin(GL_LINES);
glVertex2d (320+shift, 200);
glVertex2d (290+shift, 180);
glVertex2d (330+shift, 210);
glVertex2d (270+shift, 150);
glEnd();

glColor3ub(13,16,19);
glBegin(GL_TRIANGLES);
glVertex2d (190+shift, 110);
glVertex2d (250+shift, 90);
glVertex2d (290+shift, 180);
glEnd();

glColor3ub(13,16,19);
glBegin(GL_LINES);
glVertex2d (190+shift, 110);
glVertex2d (160+shift, 80);
glVertex2d (250+shift, 90);
glVertex2d (220+shift, 60);
glEnd();

glColor3ub(13,16,19);
glBegin(GL_QUADS);
glVertex2d (160+shift, 80);
glVertex2d (165+shift, 70);
glVertex2d (175+shift, 70);
glVertex2d (180+shift, 101);
glEnd();

glColor3ub(13,16,19);
glBegin(GL_QUADS);
glVertex2d (220+shift, 60);
glVertex2d (225+shift, 50);
glVertex2d (235+shift, 50);
glVertex2d (230+shift, 70);
glEnd();


}


void display(void)
{



/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
shootingstar();
ground();
hills();
movingThings();

glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.254, 0.309, 0.352,0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 1000, 0, 1000);
}


void key(int key, int x, int y) {
      switch(key)
{

  /*
  case GLUT_KEY_LEFT:
         shift--;
         shift1++;

         glutPostRedisplay();
         break;
         */
  case GLUT_KEY_RIGHT:
         shift++;
         shift1--;

         glutPostRedisplay();
         break;
}
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
PlaySound("ambience.wav", NULL, SND_FILENAME| SND_ASYNC);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("The New Adventure");
init ();
glutDisplayFunc(display);
glutSpecialFunc(key);
glutMainLoop();
return 0;
}

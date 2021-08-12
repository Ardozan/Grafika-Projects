//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int);

int main (int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH );
glutInitWindowPosition(200, 100);
glutInitWindowSize(1000, 800);
glutCreateWindow("RUANG TAMU MINIMALIST");
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
init();
glutMainLoop();
}
void init(){
glClearColor(0.0, 0.0, 0.0, 1.0);
const GLfloat light_ambient[] = { 0.1f, 0.1f, 0.1f, 1.0f };
const GLfloat light_diffuse[] = { 0.75f, 0.75f, 0.75f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };
const GLfloat mat_ambient[] = { 30.0f, 30.0f, 0.7f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };
glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
glLightfv(GL_LIGHT0, GL_POSITION, light_position);
glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
glEnable(GL_DEPTH_TEST);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_NORMALIZE);
glShadeModel(GL_SMOOTH);
glEnable(GL_COLOR_MATERIAL);
}
void display(){
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



//~~~~~~~~ALFI~~~~~~~~~~


//TEMBOK 1

//DEPAN
glBegin(GL_QUADS); //+5

glColor3f(0.2, 0.4, 0.6);//GELAP
glVertex3f(-30, 20, 20);//1D
glVertex3f(-30, 0, 20);//2D
glVertex3f(-28, 0, 20);//3D
glVertex3f(-28, 20, 20);//4D
glEnd();

//BELAKANG
glBegin(GL_QUADS); //+5
glColor3f(0.4, 0.6, 1.0);//CERAH
glVertex3f(-30, 20, -20);//1B
glVertex3f(-30, 0, -20);//2B
glVertex3f(-28, 0, -20);//3B
glVertex3f(-28, 20, -20);//4B
glEnd();

//ATAS
glBegin(GL_QUADS); //+5

glVertex3f(-30, 20, -20);//1B
glVertex3f(-30, 20, 20);//1D
glVertex3f(-28, 20, 20);//4D
glVertex3f(-28, 20, -20);//4B
glEnd();

//BAWAH
glBegin(GL_QUADS); //+5

glVertex3f(-30, 0, -20);//2B
glVertex3f(-30, 0, 20);//2D
glVertex3f(-28, 0, 20);//3D
glVertex3f(-28, 0, -20);//3B
glEnd();

//KANAN
glBegin(GL_QUADS); //+5

glColor3f(0.4, 0.6, 1.0);
glVertex3f(-28, 20, 20);//4D
glVertex3f(-28, 0, 20);//3D
glColor3f(0.2, 0.4, 0.6);
glVertex3f(-28, 0, -20);//3B
glVertex3f(-28, 20, -20);//4B
glEnd();

//KIRI
glBegin(GL_QUADS); //+5

glVertex3f(-30, 20, 20);//1D
glVertex3f(-30, 0, 20);//2D
glVertex3f(-30, 0, -20);//2B
glVertex3f(-30, 20, -20);//1B
glEnd();

//TEMBOK 2
//DEPAN
glBegin(GL_QUADS); //+5
glColor3f(0.4, 0.6, 1.0);
glVertex3f(30, 20, -20);//1D
glVertex3f(30, 0, -20);//2D
glVertex3f(30, 0, -22);//3D
glVertex3f(30, 20, -22);//4D
glEnd();

//BELAKANG
glBegin(GL_QUADS); //+5

glVertex3f(-30, 20, -20);//1B
glVertex3f(-30, 0, -20);//2B
glVertex3f(-30, 0, -22);//3B
glVertex3f(-30, 20, -22);//4B
glEnd();

//ATAS
glBegin(GL_QUADS); //+5

glVertex3f(-30, 20, -20);//1B
glVertex3f(30, 20, -20);//1D
glVertex3f(30, 20, -22);//4D
glVertex3f(-30, 20, -22);//4B
glEnd();

//BAWAH
glBegin(GL_QUADS); //+5

glVertex3f(-30, 0, -20);//2B
glVertex3f(30, 0, -20);//2D
glVertex3f(30, 0, -22);//3D
glVertex3f(-30, 0, -22);//3B
glEnd();

//KANAN
glBegin(GL_QUADS); //+5

glVertex3f(30, 20, -22);//4D
glVertex3f(30, 0, -22);//3D
glVertex3f(-30, 0, -22);//3B
glVertex3f(-30, 20, -22);//4B
glEnd();

//KIRI
glBegin(GL_QUADS); //+5

glColor3f(0.2, 0.4, 0.6);
glVertex3f(30, 20, -20);//1D
glVertex3f(30, 0, -20);//2D
glColor3f(0.4, 0.6, 1.0);//CERAH
glVertex3f(-30, 0, -20);//2B
glVertex3f(-30, 20, -20);//1B
glEnd();



//LANTAI
glBegin(GL_QUADS); //+5

glColor3f(1.0, 1.0, 1.0);
glVertex3f(-30, 0, -20);//1D
glVertex3f(-30, 0, 20);//2D
glColor3f(1.0, 1.0, 1.0);
glVertex3f(30, 0, 20);//2B
glColor3f(0.9, 0.9, 0.9);
glVertex3f(30, 0, -20);//1B
glEnd();

//PINTU
glPushMatrix();
glColor3f(0.8, 0.9, 0.9);
glTranslatef(-27, 7, 10);
glScalef(0.1,3.0,-1.3);
glutSolidCube(5.0);
glPopMatrix();








//~~~~~~~~BILLY~~~~~~~~~~

//RAK TV

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-15, 2, -18);
glutSolidCube(5.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-10, 2, -18);
glutSolidCube(5.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-5, 2, -18);
glutSolidCube(5.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(0, 2, -18);
glutSolidCube(5.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(5, 2, -18);
glutSolidCube(5.0);
glPopMatrix();

//TV
glPushMatrix();
glColor3f(0.0, 0.0, 0.0);
glTranslatef(-5, 8, -18);
glScalef(-3.0,2.0,-0.8);
glutSolidCube(6.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0, 1.0, 1.0);
glTranslatef(-5, 9, -17.7);
glScalef(-2.8,1.4,-1.0);
glutSolidCube(6.0);
glPopMatrix();

//SOFA DOUBLE

//sisi kiri
glPushMatrix();
glColor3f(0.3, 0.8, 0.6);
glTranslatef(-10, 3, 10);
glScalef(0.2,1.0,-1.3);
glutSolidCube(5.0);
glPopMatrix();

//sisikanan
glPushMatrix();
glColor3f(0.3, 0.8, 0.6);
glTranslatef(0, 3, 10);
glScalef(0.2,1.0,-1.3);
glutSolidCube(5.0);
glPopMatrix();

//sisi belakang
glPushMatrix();
glColor3f(1.0, 0.9, 0.9);
glTranslatef(-5, 4, 12.7);
glScalef(2.0,0.7,-0.2);
glutSolidCube(5.0);
glPopMatrix();

//SOFA
glPushMatrix();
glColor3f(1.0, 0.9, 0.9);
glTranslatef(-5, 2, 10);
glScalef(2.0,0.7,-1.3);
glutSolidCube(5.0);
glPopMatrix();








//~~~~~~~~FARHAN~~~~~~~~~~

//LAMPU KANAN
glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-25, 0, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-25, 1, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-25, 2, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-25, 3, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-25, 4, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-25, 5, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(225, 224, 112);
glTranslatef(-25, 6, -15);
glutSolidSphere(1.5, 50, 50);
glPopMatrix();

//LEMARI
glPushMatrix();
glColor3f(1.0, 0.7, 0.4);
glTranslatef(26, 7, -18);
glScalef(1.8,3.0,-1.0);
glutSolidCube(5.0);
glPopMatrix();

//AC

glPushMatrix();
glColor3f(1.0, 1.0, 1.0);
glTranslatef(-28, 18, -10);
glScalef(0.6,0.5,-3.0);
glutSolidCube(5.0);
glPopMatrix();








//~~~~~~~~YADI~~~~~~~~~~


//LAMPU KIRI
glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(15, 0, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(15, 1, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(15, 2, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(15, 3, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(15, 4, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(15, 5, -15);
glutSolidCube(1.0);
glPopMatrix();

glPushMatrix();
glColor3f(225, 224, 112);
glTranslatef(15, 6, -15);
glutSolidSphere(1.5, 50, 50);
glPopMatrix();


//SOFA SINGLE

glPushMatrix();
glColor3f(1.0, 0.9, 0.9);
glTranslatef(5, 1, -1);
glScalef(1.0,0.7,-1.3);
glutSolidCube(5.0);
glPopMatrix();

//MEJA
glPushMatrix();
glColor3f(0.4, 0.3, 0.3);
glTranslatef(-5, 2, -1);
glScalef(2.0,0.7,-1.3);
glutSolidCube(5.0);
glPopMatrix();




glFlush();
glutSwapBuffers();
}

void reshape(int w, int h){
glViewport(0,0, (GLsizei)w, (GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(50.0, (double)w / (double)h, 1.0, 200.0);
glTranslatef(0.0f, -6.0, -100.0);
//gluLookAt(0., 0., 0., 1., -1., 1., 0., 1., 0.);
glMatrixMode(GL_MODELVIEW);
}
void keyboard(unsigned char key, int x, int y)
{

switch (key)
{
case 'a':
case 'A':
glTranslatef(1.0, 0.0, 0.0);
break;
case 'd':
case 'D':
glTranslatef(-1.0, 0.0, 0.0);
break;
case 'w':
case 'W':
glTranslatef(0.0, 0.0, 1.0);
break;
case 's':
case 'S':
glTranslatef(0.0, 0.0, -1.0);
break;
case 'z':
case 'Z':
glTranslatef(0.0, -1.0, 0.0);
break;
case 'x':
case 'X':
glTranslatef(0.0, 1.0, 0.0);
break;
case 'o':
case 'O':
glRotatef(3.0, 0.0, 2.0, 0.0); /* rotate left */
break;
case 'p':
case 'P':
glRotatef(-3.0, 0.0, 2.0, 0.0); /* rotate right */
break;
case 'k':
case 'K':
glRotatef(3.0, 1.0, 0.0, 0.0); /* rotate up */
break;
case 'l':
case 'L':
glRotatef(-3.0, 1.0, 0.0, 0.0); /* rotate down */
break;
}
display();
}

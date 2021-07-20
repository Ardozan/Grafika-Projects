//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); //+1
//main program
int main (int argc, char** argv){
//inisialisasi
glutInit(&argc, argv);
glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); //+2 GLUT_DEPTH : mengalokasikan sumbu z
glutInitWindowPosition(200, 100); //atur sumbu x dan y
glutInitWindowSize(500, 500); //atur lebar dan tinggi jendela
glutCreateWindow(" 3D KUBUS ");
glutDisplayFunc(display); //memanggil fungsi display
glutReshapeFunc(reshape); //memanggil fungsi reshape
glutKeyboardFunc(keyboard); // +3 memanggil fungsi keyboard
init();
glutMainLoop(); //looping program utama
}void init(){
glEnable(GL_DEPTH_TEST); //+4
glClearColor(0.0, 0.0, 0.0, 1.0);
}
void display(){
//reset
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //+5
//KUBUS PERTAMA
//depan
glBegin(GL_QUADS); //+5
glColor3f(0.0, 0.0, 1.0);
glVertex3f(-3.0, 3.0, 3.0);
glVertex3f(-3.0, -3.0, 3.0);
glVertex3f(3.0, -3.0, 3.0);
glVertex3f(3.0, 3.0, 3.0);
glEnd();
//belakang
glBegin(GL_QUADS); //+5
glColor3f(0.0, 0.0, 1.0);
glVertex3f(-3.0, 3.0, -3.0);
glVertex3f(-3.0, -3.0, -3.0);
glVertex3f(3.0, -3.0, -3.0);
glVertex3f(3.0, 3.0, -3.0);
glEnd();
//atas
glBegin(GL_QUADS); //+5
glColor3f(0.0, 1.0, 0.0);
glVertex3f(-3.0, 3.0, -3.0);
glVertex3f(-3.0, 3.0, 3.0);
glVertex3f(3.0, 3.0, 3.0);
glVertex3f(3.0, 3.0, -3.0);
glEnd();
//bawah
glBegin(GL_QUADS); //+5
glColor3f(0.0, 1.0, 0.0);
glVertex3f(-3.0, -3.0, -3.0);
glVertex3f(-3.0, -3.0, 3.0);
glVertex3f(3.0, -3.0, 3.0);
glVertex3f(3.0, -3.0, -3.0);
glEnd();
//kanan
glBegin(GL_QUADS); //+5
glColor3f(1.0, 0.0, 0.0);
glVertex3f(3.0, 3.0, 3.0);
glVertex3f(3.0, -3.0, 3.0);
glVertex3f(3.0, -3.0, -3.0);
glVertex3f(3.0, 3.0, -3.0);
glEnd();
//kiri
glBegin(GL_QUADS); //+5
glColor3f(1.0, 0.0, 0.0);
glVertex3f(-3.0, 3.0, -3.0);
glVertex3f(-3.0, -3.0, -3.0);
glVertex3f(-3.0, -3.0, 3.0);
glVertex3f(-3.0, 3.0, 3.0);
glEnd();
//KUBUS KEDUA
//depan
glBegin(GL_QUADS); //+5
glColor3f(0.0, 1.0, 0.0);
glVertex3f(20.0, 3.0, 3.0);
glVertex3f(20.0, -3.0, 3.0);
glVertex3f(14.0, -3.0, 3.0);
glVertex3f(14.0, 3.0, 3.0);
glEnd();
//belakang
glBegin(GL_QUADS); //+5
glColor3f(0.0, 0.0, 1.0);
glVertex3f(20.0, 3.0, -3.0);
glVertex3f(20.0, -3.0, -3.0);
glVertex3f(14.0, -3.0, -3.0);
glVertex3f(14.0, 3.0, -3.0);
glEnd();
//atas
glBegin(GL_QUADS); //+5
glColor3f(0.0, 1.0, 0.0);
glVertex3f(20.0, 3.0, -3.0);
glVertex3f(20.0, 3.0, 3.0);
glVertex3f(14.0, 3.0, 3.0);
glVertex3f(14.0, 3.0, -3.0);
glEnd();
//bawah
glBegin(GL_QUADS); //+5
glColor3f(0.0, 1.0, 0.0);
glVertex3f(20.0, -3.0, -3.0);
glVertex3f(20.0, -3.0, 3.0);
glVertex3f(14.0, -3.0, 3.0);
glVertex3f(14.0, -3.0, -3.0);
glEnd();
//kanan
glBegin(GL_QUADS); //+5
glColor3f(1.0, 0.0, 0.0);
glVertex3f(14.0, 3.0, 3.0);
glVertex3f(14.0, -3.0, 3.0);
glVertex3f(14.0, -3.0, -3.0);
glVertex3f(14.0, 3.0, -3.0);
glEnd();
//kiri
glBegin(GL_QUADS); //+5
glColor3f(1.0, 0.0, 0.0);
glVertex3f(20.0, 3.0, -3.0);
glVertex3f(20.0, -3.0, -3.0);
glVertex3f(20.0, -3.0, 3.0);
glVertex3f(20.0, 3.0, 3.0);
glEnd();
//KUBUS KETIGA
//depan
glBegin(GL_QUADS); //+5
glColor3ub(251, 255, 0);
glVertex3f(-20.0, 3.0, 3.0);
glVertex3f(-20.0, -3.0, 3.0);
glVertex3f(-14.0, -3.0, 3.0);
glVertex3f(-14.0, 3.0, 3.0);
glEnd();
//belakang
glBegin(GL_QUADS); //+5
glColor3ub(255, 0, 111);
glVertex3f(-20.0, 3.0, -3.0);
glVertex3f(-20.0, -3.0, -3.0);
glVertex3f(-14.0, -3.0, -3.0);
glVertex3f(-14.0, 3.0, -3.0);
glEnd();
//atas
glBegin(GL_QUADS); //+5
glColor3ub(255, 0, 234);
glVertex3f(-20.0, 3.0, -3.0);
glVertex3f(-20.0, 3.0, 3.0);
glVertex3f(-14.0, 3.0, 3.0);
glVertex3f(-14.0, 3.0, -3.0);
glEnd();
//bawah
glBegin(GL_QUADS); //+5
glColor3ub(174, 0, 255);
glVertex3f(-20.0, -3.0, -3.0);
glVertex3f(-20.0, -3.0, 3.0);
glVertex3f(-14.0, -3.0, 3.0);
glVertex3f(-14.0, -3.0, -3.0);
glEnd();
//kanan
glBegin(GL_QUADS); //+5
glColor3ub(72, 0, 255);
glVertex3f(-14.0, 3.0, 3.0);
glVertex3f(-14.0, -3.0, 3.0);
glVertex3f(-14.0, -3.0, -3.0);
glVertex3f(-14.0, 3.0, -3.0);
glEnd();
//kiri
glBegin(GL_QUADS); //+5
glColor3ub(0, 179, 255);
glVertex3f(-20.0, 3.0, -3.0);
glVertex3f(-20.0, -3.0, -3.0);
glVertex3f(-20.0, -3.0, 3.0);
glVertex3f(-20.0, 3.0, 3.0);
glEnd();

//KUBUS ATAS
//depan
glBegin(GL_QUADS); //+5
glColor3f(0.0, 0.0, 1.0);
glVertex3f(-3.0, 18.0, 3.0);
glVertex3f(-3.0, 12.0, 3.0);
glVertex3f(3.0, 12.0, 3.0);
glVertex3f(3.0, 18.0, 3.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3f(0.0, 0.0, 1.0);
glVertex3f(-3.0, 18.0, -3.0);
glVertex3f(-3.0, 12.0, -3.0);
glVertex3f(3.0, 12.0, -3.0);
glVertex3f(3.0, 18.0, -3.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3f(0.0, 1.0, 0.0);
glVertex3f(-3.0, 18.0, -3.0);
glVertex3f(-3.0, 18.0, 3.0);
glVertex3f(3.0, 18.0, 3.0);
glVertex3f(3.0, 18.0, -3.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3f(0.0, 1.0, 0.0);
glVertex3f(-3.0, 12.0, -3.0);
glVertex3f(-3.0, 12.0, 3.0);
glVertex3f(3.0, 12.0, 3.0);
glVertex3f(3.0, 12.0, -3.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3f(1.0, 0.0, 0.0);
glVertex3f(3.0, 18.0, 3.0);
glVertex3f(3.0, 12.0, 3.0);
glVertex3f(3.0, 12.0, -3.0);
glVertex3f(3.0, 18.0, -3.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3f(1.0, 0.0, 0.0);
glVertex3f(-3.0, 18.0, 3.0);
glVertex3f(-3.0, 12.0, 3.0);
glVertex3f(-3.0, 12.0, -3.0);
glVertex3f(-3.0, 18.0, -3.0);
glEnd();

glFlush();
glutSwapBuffers();
}//fungsi untuk setting viewport
void reshape(int w, int h){
glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
glLoadIdentity(); //reset transformasi misalnya rotasi pada display
//gluOrtho2D(-10, 10, -10, 10); //setting spesifikasi proyeksi yang diinginkan (2D)
//glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //+6 proyeksi orthografik 3D
gluPerspective(60.0, w / h, 1.0, 400.0); //proyeksi perspektif
/* set initial position */
glTranslatef(0.0, -5.0, -100.0);
glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
//+7
void keyboard(unsigned char key, int x, int y)
{
/* this is the keyboard event handler
the x and y parameters are the mouse
coordinates when the key was struck */
switch (key)
{
//geser//
case '>':
case '.':
glRotatef(3.0, 0.0, 1.0, 0.0); //Putar Ke kanan
break;
case '<':
case ',':
glRotatef(-3.0, 0.0, 1.0, 0.0); //Putar Ke kiri
break;
case 'W':
case 'w':
glTranslatef(1.0,0.0,0.0); // geser kanan
break;
case 'S':
case 's':
glTranslatef(-1.0,0.0,0.0);//geser kiri
break;
case 'o':
case 'O':
glTranslated(0.0, 0.0, 1.0); // geser objek kedalam//
break;
case 'p':
case 'P':
glTranslated(0.0, 0.0, -1.0); // geser ke luar//
break;
case 'u':
case 'U':
glRotatef(3.0, 1.0, 0.0, 0.0); //Putar Keatas
break;
case 'd':
case 'D':
glRotatef(-3.0, 1.0, 0.0, 0.0); //Putar Kebawah
break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}

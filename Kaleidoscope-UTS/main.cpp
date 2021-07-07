#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

//deklarasi

void display();
void init();
void reshape(int w, int h);

//main program
int main(int argc, char** argv){
    //inisialisasi
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(200, 100); // atur
    glutInitWindowSize(500, 500);
    glutCreateWindow("Jendela 1");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
}

void init()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
}
void display()
{
    glShadeModel(GL_SMOOTH);
    //reset
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //A1
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(10.0,-10.0);
    glVertex2f(-10.0,-10.0);
    glVertex2f(-10.0,10.0);
    glVertex2f(10.0,10.0);
    glEnd();

    //A2
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(9.0,-9.0);
    glVertex2f(-9.0,-9.0);
    glVertex2f(-9.0,9.0);
    glVertex2f(9.0,9.0);
    glEnd();

    //A3
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(8.0,-8.0);
    glVertex2f(-8.0,-8.0);
    glVertex2f(-8.0,8.0);
    glVertex2f(8.0,8.0);
    glEnd();

    //A4
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(7.0,-7.0);
    glVertex2f(-7.0,-7.0);
    glVertex2f(-7.0,7.0);
    glVertex2f(7.0,7.0);
    glEnd();

    //A5
     glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(6.0,-6.0);
    glVertex2f(-6.0,-6.0);
    glVertex2f(-6.0,6.0);
    glVertex2f(6.0,6.0);
    glEnd();

    //A6
      glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(5.0,-5.0);
    glVertex2f(-5.0,-5.0);
    glVertex2f(-5.0,5.0);
    glVertex2f(5.0,5.0);
    glEnd();

    //A7
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(4.0,-4.0);
    glVertex2f(-4.0,-4.0);
    glVertex2f(-4.0,4.0);
    glVertex2f(4.0,4.0);
    glEnd();

    //A8
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(3.0,-3.0);
    glVertex2f(-3.0,-3.0);
    glVertex2f(-3.0,3.0);
    glVertex2f(3.0,3.0);
    glEnd();

    //A9
      glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(2.0,-2.0);
    glVertex2f(-2.0,-2.0);
    glVertex2f(-2.0,2.0);
    glVertex2f(2.0,2.0);
    glEnd();

    //A10
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glEnd();


    //B1
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-10.0,10.0);
    glVertex2f(-10.0,2.0);
    glVertex2f(-2.0,2.0);
    glVertex2f(-2.0,10.0);
    glEnd();

    //B2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-9.0,9.0);
    glVertex2f(-9.0,3.0);
    glVertex2f(-3.0,3.0);
    glVertex2f(-3.0,9.0);
    glEnd();

    //B3
        glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-8.0,8.0);
    glVertex2f(-8.0,4.0);
    glVertex2f(-4.0,4.0);
    glVertex2f(-4.0,8.0);
    glEnd();

    //B4
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-7.0,7.0);
    glVertex2f(-7.0,5.0);
    glVertex2f(-5.0,5.0);
    glVertex2f(-5.0,7.0);
    glEnd();

    //C1
      glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(2.0,-2.0);
    glVertex2f(2.0,-10.0);
    glVertex2f(10.0,-10.0);
    glVertex2f(10.0,-2.0);
    glEnd();

    //C2

     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(3.0,-3.0);
    glVertex2f(3.0,-9.0);
    glVertex2f(9.0,-9.0);
    glVertex2f(9.0,-3.0);
    glEnd();

    //C3

     glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(4.0,-4.0);
    glVertex2f(4.0,-8.0);
    glVertex2f(8.0,-8.0);
    glVertex2f(8.0,-4.0);
    glEnd();

    //C4

     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(5.0,-5.0);
    glVertex2f(5.0,-7.0);
    glVertex2f(7.0,-7.0);
    glVertex2f(7.0,-5.0);
    glEnd();

 //P1
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.1,0.1);
    glVertex2f(0.0,2.0);    //tinggi
    glVertex2f(-1.0,0.0);   //kiri
    glVertex2f(1.0,0.0);    //kanan
    glEnd();

    //P2

    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.5,0.0);
    glVertex2f(0.0,4.0);    //tinggi
    glVertex2f(-1.0,2.0);   //kiri
    glVertex2f(1.0,2.0);    //kanan
    glEnd();
    //P3
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.8,0.2);
    glVertex2f(0.0,6.0);    //tinggi
    glVertex2f(-1.0,4.0);   //kiri
    glVertex2f(1.0,4.0);    //kanan
    glEnd();
    //P4
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.1,0.1);
    glVertex2f(0.0,-2.0);    //tinggi
    glVertex2f(-1.0,0.0);   //kiri
    glVertex2f(1.0,0.0);    //kanan
    glEnd();
    //P5
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.5,0.0);
    glVertex2f(0.0,-4.0);    //tinggi
    glVertex2f(1.0,-2.0);   //kiri
    glVertex2f(-1.0,-2.0);    //kanan
    glEnd();

    //P6

    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.8,0.2);
    glVertex2f(0.0,-6.0);    //tinggi
    glVertex2f(1.0,-4.0);   //kiri
    glVertex2f(-1.0,-4.0);    //kanan
    glEnd();

    //D1
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.1,0.1);
    glVertex2f(5.0,1.0);
    glColor3f(1.0,0.1,0.1);
    glVertex2f(5.0,-1.0);
    glColor3f(1.0,0.8,0.2);
    glVertex2f(10.0,-1.0);
    glColor3f(1.0,0.8,0.2);
    glVertex2f(10.0,1.0);
    glEnd();

    //D2
    glBegin(GL_POLYGON);

    glColor3f(1.0,0.8,0.2);
    glVertex2f(-10.0,1.0);
    glColor3f(1.0,0.8,0.2);
    glVertex2f(-10.0,-1.0);
    glColor3f(1.0,0.1,0.1);
    glVertex2f(-5.0,-1.0);
    glColor3f(1.0,0.1,0.1);
    glVertex2f(-5.0,1.0);
    glEnd();

    //A1
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.8,1.0);
    glVertex2f(2.0,-2.0);
    glVertex2f(2.0,-4.0);
    glVertex2f(4.0,-4.0);
    glVertex2f(4.0,-2.0);
    glEnd();

    //A2
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.8,1.0);
    glVertex2f(6.0,-2.0);
    glVertex2f(6.0,-4.0);
    glVertex2f(8.0,-4.0);
    glVertex2f(8.0,-2.0);
    glEnd();

    //A3
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.7,1.0);
    glVertex2f(4.0,-4.0);
    glVertex2f(4.0,-6.0);
    glVertex2f(6.0,-6.0);
    glVertex2f(6.0,-4.0);
    glEnd();

    //A4
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.8,1.0);
    glVertex2f(2.0,-6.0);
    glVertex2f(2.0,-8.0);
    glVertex2f(4.0,-8.0);
    glVertex2f(4.0,-6.0);
    glEnd();

    //A5
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.5,0.7);
    glVertex2f(6.0,-6.0);
    glVertex2f(6.0,-8.0);
    glVertex2f(8.0,-8.0);
    glVertex2f(8.0,-6.0);
    glEnd();

    //A6
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.5,0.7);
    glVertex2f(8.0,-8.0);
    glVertex2f(8.0,-10.0);
    glVertex2f(10.0,-10.0);
    glVertex2f(10.0,-8.0);
    glEnd();

    //B1
    glBegin(GL_POLYGON);
    glColor3f(0.7,1.0,0.7);
    glVertex2f(-4.0,-2.0);
    glVertex2f(-4.0,-4.0);
    glVertex2f(-2.0,-4.0);
    glVertex2f(-2.0,-2.0);
    glEnd();

    //B2
    glBegin(GL_POLYGON);
    glColor3f(0.7,1.0,0.7);
    glVertex2f(-8.0,-2.0);
    glVertex2f(-8.0,-4.0);
    glVertex2f(-6.0,-4.0);
    glVertex2f(-6.0,-2.0);
    glEnd();

    //B3
    glBegin(GL_POLYGON);
    glColor3f(0.3,1.0,0.3);
    glVertex2f(-6.0,-4.0);
    glVertex2f(-6.0,-6.0);
    glVertex2f(-4.0,-6.0);
    glVertex2f(-4.0,-4.0);
    glEnd();

    //B4
    glBegin(GL_POLYGON);
    glColor3f(0.7,1.0,0.7);
    glVertex2f(-4.0,-6.0);
    glVertex2f(-4.0,-8.0);
    glVertex2f(-2.0,-8.0);
    glVertex2f(-2.0,-6.0);
    glEnd();

    //B5
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.7,0.1);
    glVertex2f(-8.0,-6.0);
    glVertex2f(-8.0,-8.0);
    glVertex2f(-6.0,-8.0);
    glVertex2f(-6.0,-6.0);
    glEnd();

    //B6
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.7,0.1);
    glVertex2f(-10.0,-8.0);
    glVertex2f(-10.0,-10.0);
    glVertex2f(-8.0,-10.0);
    glVertex2f(-8.0,-8.0);
    glEnd();

    //C1
    glBegin(GL_POLYGON);
    glColor3f(0.7,1.0,0.7);
    glVertex2f(4.0,2.0);
    glVertex2f(2.0,2.0);
    glVertex2f(2.0,4.0);
    glVertex2f(4.0,4.0);
    glEnd();

    //C2
    glBegin(GL_POLYGON);
    glColor3f(0.3,1.0,0.3);
    glVertex2f(6.0,4.0);
    glVertex2f(4.0,4.0);
    glVertex2f(4.0,6.0);
    glVertex2f(6.0,6.0);
    glEnd();

    //C3
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.7,0.1);
    glVertex2f(8.0,6.0);
    glVertex2f(6.0,6.0);
    glVertex2f(6.0,8.0);
    glVertex2f(8.0,8.0);
    glEnd();

    //C4
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.7,0.1);
    glVertex2f(10.0,8.0);
    glVertex2f(8.0,8.0);
    glVertex2f(8.0,10.0);
    glVertex2f(10.0,10.0);
    glEnd();

    //E1
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.8,1.0);
    glVertex2f(-4.0,4.0);
    glVertex2f(-4.0,2.0);
    glVertex2f(-2.0,2.0);
    glVertex2f(-2.0,4.0);
    glEnd();

    //E2
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.7,1.0);
    glVertex2f(-6.0,6.0);
    glVertex2f(-6.0,4.0);
    glVertex2f(-4.0,4.0);
    glVertex2f(-4.0,6.0);
    glEnd();

    //E3
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.5,0.7);
    glVertex2f(-8.0,8.0);
    glVertex2f(-8.0,6.0);
    glVertex2f(-6.0,6.0);
    glVertex2f(-6.0,8.0);
    glEnd();

    //E4
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.5,0.7);
    glVertex2f(-10.0,10.0);
    glVertex2f(-10.0,8.0);
    glVertex2f(-8.0,8.0);
    glVertex2f(-8.0,10.0);
    glEnd();

    //F1
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.8,0.2);
    glVertex2f(-1.0,10.0);
    glVertex2f(-1.0,8.0);
    glVertex2f(1.0,8.0);
    glVertex2f(1.0,10.0);
    glEnd();







    glFlush();

}
void reshape(int w,int h){
    glViewport(0,0, (GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}

#include<windows.h>
#include<math.h>
#include <GL/glut.h>
#define pi 3.14159265

void task1()
{  //middle square
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.6);
    glVertex2d(-0.4,0.4);
    glVertex2d(0.4,0.4);
    glVertex2d(0.4,-0.4);
    glVertex2d(-0.4,-0.4);
    glEnd();

    //upper triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);
    glVertex2d(-0.4,0.4);
    glVertex2d(0,0.8);
    glVertex2d(0.4,0.4);
    glEnd();

    //right triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0,1,1);
    glVertex2d(0.4,0.4);
    glVertex2d(0.8,0);
    glVertex2d(0.4,-0.4);
    glEnd();

   //lower triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1,0,1);
    glVertex2d(0.4,-0.4);
    glVertex2d(0,-0.8);
    glVertex2d(-0.4,-0.4);
    glEnd();

    //left triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0,1,0);
    glVertex2d(-0.4,-0.4);
    glVertex2d(-0.8,0);
    glVertex2d(-0.4,0.4);
    glEnd();


    glFlush();
}

void task2(){
    //middle square
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.5,0.2);
    glVertex2d(-0.7,0.4);
    glVertex2d(0.7,0.4);
    glVertex2d(0.7,-0.4);
    glVertex2d(-0.7,-0.4);
    glEnd();

    float r = 0.25;

    glBegin(GL_POLYGON); //GL_POLYGON
    for (float theta=0; theta<360; theta+=0.01)
    {
        float x = r*cos((theta*2*pi)/360);
        float y = r*sin((theta*2*pi)/360);
        glColor3f(1,0,0);
        glVertex2d(x,y);
    }
    glEnd();
    glFlush();
}

void task3(){

    //upper triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.3,0.5);
    glVertex2d(-0.4,0.4);
    glVertex2d(0,0.8);
    glVertex2d(0.4,0.4);
    glEnd();

    //right triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0,1,1);
    glVertex2d(0.4,0.4);
    glVertex2d(0.8,0);
    glVertex2d(0.4,-0.4);
    glEnd();

   //lower triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.3,0.5);
    glVertex2d(0.4,-0.4);
    glVertex2d(0,-0.8);
    glVertex2d(-0.4,-0.4);
    glEnd();

    //left triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0,1,1);
    glVertex2d(-0.4,-0.4);
    glVertex2d(-0.8,0);
    glVertex2d(-0.4,0.4);
    glEnd();

    float r = 0.4;

    glBegin(GL_POINTS); //GL_POLYGON
    for (float theta=0; theta<360; theta+=0.01)
    {
        float x = r*cos((theta*2*pi)/360);
        float y = r*sin((theta*2*pi)/360);
        glColor3f(0,0.5,0.5);
        glVertex2d(x,y);
    }
    glEnd();
    glFlush();
}


void task4()
{
    //middle pentagon
    glBegin(GL_POLYGON);
    glColor3f(0,0.4,0.6);
    glVertex2d(-0.3,0.4);
    glVertex2d(0.3,0.4);
    glVertex2d(0.5,0);
    glVertex2d(0,-0.4);
    glVertex2d(-0.5,0);

    glEnd();

    //First triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.9,0,0.1);
    glVertex2d(0,0.9);
    glVertex2d(0.3,0.4);
    glVertex2d(-0.3,0.4);
    glEnd();

    //2nd triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.9,0,0.1);
    glVertex2d(0.3,0.4);
    glVertex2d(0.9,0.4);
    glVertex2d(0.5,0);
    glEnd();

   //3rd triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.9,0,0.1);
    glVertex2d(0.5,0);
    glVertex2d(0.7,-0.6);
    glVertex2d(0,-0.4);
    glEnd();

    //4th triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.9,0,0.1);
    glVertex2d(0,-0.4);
    glVertex2d(-0.7,-0.6);
    glVertex2d(-0.5,0);
    glEnd();

    //5th triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.9,0,0.1);
    glVertex2d(-0.5,0);
    glVertex2d(-0.9,0.4);
    glVertex2d(-0.3,0.4);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Tanjina's Labwork ");
    glutDisplayFunc(task4);
    glutMainLoop();

    return 0;

}


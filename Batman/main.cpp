#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void);
void myInit(void);
void print(int x,int y,int w,int h);

bool white = true;
int x = 0, y = 0,high=10,low=10;

void display(void)
{

    int w = 10, h = 10;
    glClear(GL_COLOR_BUFFER_BIT);



    for(x = 80; x<250; x+=10)
    {
        y = 20;
        glColor3f(0,0,0);
        white = true;
        print(x,y,w,h);
    }

    y += 10;
    print(x,y,w,h);
    x = 70;
    print(x,y,w,h);
    for(x = 80; x < 250; x+=10)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
    }

    glColor3f(0,0,0);

    x+=10;
    y += 10;
    print(x,y,w,h);
    x = 60;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);
    x+=10;

    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
///4th Line

    glColor3f(0,0,0);
    x+=10;
    y += 10;
    print(x,y,w,h);
    x = 50;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }

    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }

    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }

///5th Line

    glColor3f(0,0,0);
    x+=10;
    y += 10;
    print(x,y,w,h);
    x = 40;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }

    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }

    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }

///6th Line

    glColor3f(0,0,0);
    x+=10;
    y += 10;
    print(x,y,w,h);
    x = 30;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 6 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }

    for(int i =0 ; i < 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }

    for(int i =0 ; i < 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 6 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }

///7th Line

    glColor3f(0,0,0);
    x+=10;
    y += 10;
    print(x,y,w,h);
    x = 20;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 22 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }

///8th Line

    glColor3f(0,0,0);
    x+=10;
    y += 10;
    print(x,y,w,h);
    x = 10;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 24 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }

///9-14th Line
    for(int j = 0; j <= 6 ; j++)
    {

        glColor3f(0,0,0);
        x=10;
        y += 10;
        print(x,y,w,h);
        x = 10;
        print(x,y,w,h);
        x+=10;


        for(int i =0 ; i <= 1 ; i++)
        {
            glColor3f(1,1,0);
            print(x,y,w,h);
            x+=10;
        }
        for(int i =0 ; i <= 24 ; i++)
        {
            glColor3f(0,0,0);
            print(x,y,w,h);
            x+=10;
        }
        for(int i =0 ; i <= 1 ; i++)
        {
            glColor3f(1,1,0);
            print(x,y,w,h);
            x+=10;
        }

        glColor3f(0,0,0);
        print(x,y,w,h);
    }
///15th Line

    glColor3f(0,0,0);
    x-=10;
    y += 10;
    print(x,y,w,h);
    x = 20;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 6 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 6 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);
///16th Line

    glColor3f(0,0,0);
    x-=10;
    y += 10;
    print(x,y,w,h);
    x = 30;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 4 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);

///17th Line

    glColor3f(0,0,0);
    x-=10;
    y += 10;
    print(x,y,w,h);
    x = 40;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);


///19th Line

    glColor3f(0,0,0);
    x-=10;
    y += 10;
    print(x,y,w,h);
    x = 50;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 3 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);

///18th Line

    glColor3f(0,0,0);
    x-=10;
    y += 10;
    print(x,y,w,h);
    x = 60;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 2 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    glColor3f(0,0,0);
    print(x,y,w,h);
///20th Line

    glColor3f(0,0,0);
    x-=10;
    y += 10;
    print(x,y,w,h);
    x = 70;
    print(x,y,w,h);
    x+=10;


    for(int i =0 ; i <= 6 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i < 1 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i < 1 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i < 1 ; i++)
    {
        glColor3f(0,0,0);
        print(x,y,w,h);
        x+=10;
    }
    for(int i =0 ; i <= 6 ; i++)
    {
        glColor3f(1,1,0);
        print(x,y,w,h);
        x+=10;
    }

    glColor3f(0,0,0);
    print(x,y,w,h);


///21th Line
    glColor3f(0,0,0);
    x-=10;
    y += 10;
    print(x,y,w,h);
    x = 80;
    print(x,y,w,h);
    x+=10;
    for(; x<240; x+=10)
    {
        glColor3f(1,1,0);
        white = true;
        print(x,y,w,h);
    }
///22th Line
    y += 10;
    for( x = 90; x<240; x+=10)
    {
        glColor3f(0,0,0);
        white = true;
        print(x,y,w,h);
    }
    ///end


    glFlush();
}
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50,400,-50,400);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Batman");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

void print(int x,int y,int w,int h)
{
    glBegin(GL_POLYGON);
    glVertex2i(x,y);
    glVertex2i(x+w,y);
    glVertex2i(x+w,y+h);
    glVertex2i(x,y+h);
    glEnd();
}

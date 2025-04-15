#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;
bool isRed=false;
bool isGreen=false;
bool isMoving = false;

float move_car1 = 0.250f; // for car 1
float speed_car1 = 0.09f;

//OBJ 01
void ROadSide(){
    glBegin(GL_QUADS);
//     if (isDay)
        glColor3ub(202, 202, 202 ); // Day color

	glVertex2f(-2.0, -01.5);
	glVertex2f(2.0, -01.5);
	glVertex2f(2.0, 01.5);
	glVertex2f(-2.0, 01.5);


	glEnd();
}

//OBJ 02
void Building1(){
	glBegin(GL_QUADS);
	glColor3ub(14, 48, 76);

	glVertex2f(-2.0,1.5);
	glVertex2f(-2.0,1.4);
	glVertex2f(-0.7,1.4);
	glVertex2f(-0.5,1.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 81,150);

	glVertex2f(-2.0,1.4);
	glVertex2f(-0.7,1.4);
	glVertex2f(-0.7,1.1);
	glVertex2f(-2.0,1.1);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 81,150);

	glVertex2f(-0.7,1.4);
	glVertex2f(-0.5,1.5);
	glVertex2f(-0.5,1.2);
	glVertex2f(-0.7,1.1);

	glEnd();
}


// static void key(unsigned char key, int x, int y)
// {
//     switch (key)
//     {
//         case 27 :
//         case 'q':
//             exit(0);
//             break;

//         case '+':
//             slices++;
//             stacks++;
//             break;

//         case '-':
//             if (slices>3 && stacks>3)
//             {
//                 slices--;
//                 stacks--;
//             }
//             break;
//     }

//     glutPostRedisplay();
// }


//OBJ 03
void BuildingLine(){
    glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0, 0,0);

	glVertex2f(-0.7,1.4);
	glVertex2f(-0.5,1.5);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);

	glVertex2f(-2.0,1.4);
	glVertex2f(-0.7,1.4);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);

	glVertex2f(-0.7,1.4);
	glVertex2f(-0.7,1.1);

	glEnd();

	glLineWidth(1);

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.9,1.4);
	glVertex2f(-1.9,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.8,1.4);
	glVertex2f(-1.8,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.7,1.4);
	glVertex2f(-1.7,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.6,1.4);
	glVertex2f(-1.6,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.5,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.4,1.4);
	glVertex2f(-1.4,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.3,1.4);
	glVertex2f(-1.3,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.2,1.4);
	glVertex2f(-1.2,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.1,1.4);
	glVertex2f(-1.1,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.0,1.4);
	glVertex2f(-1.0,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.9,1.4);
	glVertex2f(-0.9,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.8,1.4);
	glVertex2f(-0.8,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.7,1.4);
	glVertex2f(-0.7,1.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.6,1.45);
	glVertex2f(-0.6,1.15);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0,1.3);
	glVertex2f(-0.7,1.3);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0,1.2);
	glVertex2f(-0.7,1.2);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.7,1.3);
	glVertex2f(-0.5,1.4);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.7,1.2);
	glVertex2f(-0.5,1.3);
	glEnd();
}

//OBJ 04
void Building2(){
    glBegin(GL_QUADS);
	glColor3ub(162, 162, 162);

	glVertex2f(0.80,1.5);
	glVertex2f(0.70,1.4);
	glVertex2f(1.4,1.4);
	glVertex2f(1.6,1.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(217, 229, 240);

	glVertex2f(0.8,1.5);
	glVertex2f(0.83,1.5);
	glVertex2f(0.74,1.4);
	glVertex2f(0.7,1.4);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(18, 40, 248);

	glVertex2f(0.7,1.4);
	glVertex2f(1.4,1.4);
	glVertex2f(1.4,1.04);
	glVertex2f(0.7,1.04);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(18, 40, 248);

	glVertex2f(1.4,1.4);
	glVertex2f(1.4,1.04);
	glVertex2f(1.6,1.2);
	glVertex2f(1.6,1.5);

	glEnd();
}

//OBJ 05
void Building2Line(){
    glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(0.7,1.4);
	glVertex2f(1.4,1.4);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.4,1.4);
	glVertex2f(1.6,1.5);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.4,1.4);
	glVertex2f(1.4,1.04);
	glEnd();

	 glLineWidth(1);

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(0.7,1.3);
	glVertex2f(1.4,1.3);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(0.7,1.2);
	glVertex2f(1.4,1.2);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(0.7,1.12);
	glVertex2f(1.4,1.12);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.4,1.3);
	glVertex2f(1.6,1.43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.4,1.2);
	glVertex2f(1.6,1.343);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.4,1.12);
	glVertex2f(1.6,1.28);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.5,1.45);
	glVertex2f(1.5,1.123);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.3,1.4);
	glVertex2f(1.3,1.04);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.2,1.4);
	glVertex2f(1.2,1.04);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.1,1.4);
	glVertex2f(1.1,1.04);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.0,1.4);
	glVertex2f(1.0,1.04);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(0.9,1.4);
	glVertex2f(0.9,1.04);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(0.8,1.4);
	glVertex2f(0.8,1.04);
	glEnd();
}

//OBJ 06
void Building3(){
    glBegin(GL_QUADS);
	glColor3ub(162, 162, 162);

	glVertex2f(1.7,1.5);
	glVertex2f(1.6,1.4);
	glVertex2f(2,1.4);
	glVertex2f(2,1.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(217, 229, 240);

	glVertex2f(1.7,1.5);
	glVertex2f(1.72,1.5);
	glVertex2f(1.62,1.4);
	glVertex2f(1.6,1.4);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(86, 157, 250);

	glVertex2f(1.6,1.4);
	glVertex2f(2.0,1.4);
	glVertex2f(2.0,1.05);
	glVertex2f(1.6,1.05);

	glEnd();
}

//OBJ 07
void Building3Line(){
    glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.6,1.3);
	glVertex2f(2.0,1.3);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.6,1.2);
	glVertex2f(2.0,1.2);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.9,1.4);
	glVertex2f(1.9,1.05);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.8,1.4);
	glVertex2f(1.8,1.05);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(1.7,1.4);
	glVertex2f(1.7,1.05);
	glEnd();
}



//OBJ 08
void Roads(){
    glBegin(GL_POLYGON);
        glColor3ub(116, 116, 116 ); // Day color


    // X axis road
    glVertex2f(-2.0, -0.9);
    glVertex2f(-2.0, 0.9);
	glVertex2f(2.0, 0.9);
	glVertex2f(2.0, -0.9);

    glEnd();


    //Y axis Road
     glBegin(GL_POLYGON); // Add missing semicolon here
        glColor3ub(116, 116, 116 ); // Day color

    glVertex2f(-0.40, -01.5);
	glVertex2f(0.40, -01.5);
	glVertex2f(0.40, 01.5);
	glVertex2f(-0.40, 01.5);
    glEnd();
}

//OBJ 09
void LampPost1(float pX, float pY){

    //LampPost Bulb
    glBegin(GL_QUADS);

        glColor3ub(240, 240, 240 ); // Day color


	glVertex2f(-1.52+pX, 0.74+pY);
	glVertex2f(-1.48+pX, 0.74+pY);
	glVertex2f(-1.48+pX, 0.86+pY);
	glVertex2f(-1.52+pX, 0.86+pY);

	glEnd();


	// Lamp post bulb stand
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3 );

	glVertex2f(-1.49+pX, 0.86+pY);
	glVertex2f(-1.48+pX, 0.86+pY);
	glVertex2f(-1.48+pX, 0.94+pY);
	glVertex2f(-1.49+pX, 0.94+pY);

	glEnd();


	//Lamp Post Stand
    glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );


	glVertex2f(-1.57+pX, 0.93+pY);
	glVertex2f(-1.488+pX, 0.93+pY);
	glVertex2f(-1.48+pX, 0.94+pY);
	glVertex2f(-1.57+pX, 0.94+pY);

	glEnd();


	// lamp post poal
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );

	glVertex2f(-1.6+pX, 0.95+pY);
	glVertex2f(-1.57+pX, 0.95+pY);
	glVertex2f(-1.57+pX, 0.92+pY);
	glVertex2f(-1.6+pX, 0.92+pY);

	glEnd();
}

//OBJ 10
void LampPost2(float pX, float pY){

    //lamp post bulb
    glBegin(GL_QUADS);

        glColor3ub(240, 240, 240 ); // Day color


	glVertex2f(-1.32+pX, -0.87+pY);
	glVertex2f(-1.28+pX, -0.87+pY);
	glVertex2f(-1.28+pX, -0.75+pY);
	glVertex2f(-1.32+pX, -0.75+pY);

	glEnd();


	//lamp post bulb stand
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3 );

	glVertex2f(-1.29+pX, -0.96+pY);
	glVertex2f(-1.28+pX, -0.96+pY);
	glVertex2f(-1.28+pX, -0.87+pY);
	glVertex2f(-1.29+pX, -0.87+pY);

	glEnd();


	//lamp post stand
    glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );


	glVertex2f(-1.37+pX, -0.96+pY);
	glVertex2f(-1.28+pX, -0.96+pY);
	glVertex2f(-1.28+pX, -0.95+pY);
	glVertex2f(-1.37+pX, -0.95+pY);

	glEnd();


	//lamp post poal
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );

	glVertex2f(-1.4+pX, -0.97+pY);
	glVertex2f(-1.37+pX, -0.97+pY);
	glVertex2f(-1.37+pX, -0.94+pY);
	glVertex2f(-1.4+pX, -0.94+pY);

	glEnd();
}

//OBJ 11
void LampPost3(float pX, float pY){

    //lamppost bulb
    glBegin(GL_QUADS);

        glColor3ub(240, 240, 240 ); // Day color


	glVertex2f(0.25+pX, -1.32+pY);
	glVertex2f(0.37+pX, -1.32+pY);
	glVertex2f(0.37+pX, -1.28+pY);
	glVertex2f(0.25+pX, -1.28+pY);

	glEnd();


	//lamp post bulb stand
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3 );

	glVertex2f(0.37+pX, -1.288+pY);
	glVertex2f(0.45+pX, -1.288+pY);
	glVertex2f(0.45+pX, -1.28+pY);
	glVertex2f(0.37+pX, -1.28+pY);

	glEnd();


	//lamp post stand
    glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );


	glVertex2f(0.44+pX, -1.37+pY);
	glVertex2f(0.45+pX, -1.37+pY);
	glVertex2f(0.45+pX, -1.28+pY);
	glVertex2f(0.44+pX, -1.28+pY);


	glEnd();


	//lamppost poal
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );

	glVertex2f(0.43+pX, -1.4+pY);
	glVertex2f(0.46+pX, -1.4+pY);
	glVertex2f(0.46+pX, -1.37+pY);
	glVertex2f(0.43+pX, -1.37+pY);


	glEnd();
}

//OBJ 12
void LampPost4(float pX, float pY){

    //lamp post bulb
    glBegin(GL_QUADS);
        glColor3ub(240, 240, 240 ); // Day color


	glVertex2f(-0.36+pX, 1.38+pY);
	glVertex2f(-0.24+pX, 1.38+pY);
	glVertex2f(-0.24+pX, 1.42+pY);
	glVertex2f(-0.36+pX, 1.42+pY);
	glEnd();


	//lamp post bulb stand
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3 );

	glVertex2f(-0.45+pX, 1.41+pY);
	glVertex2f(-0.36+pX, 1.41+pY);
	glVertex2f(-0.36+pX, 1.42+pY);
	glVertex2f(-0.45+pX, 1.42+pY);

	glEnd();


	//lamp post stand
    glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );


	glVertex2f(-0.45+pX, 1.33+pY);
	glVertex2f(-0.44+pX, 1.33+pY);
	glVertex2f(-0.44+pX, 1.42+pY);
	glVertex2f(-0.45+pX, 1.42+pY);

	glEnd();


	//lamp post poal
	glBegin(GL_QUADS);

	glColor3ub(165, 43, 3  );

	glVertex2f(-0.46+pX, 1.3+pY);
	glVertex2f(-0.43+pX, 1.3+pY);
	glVertex2f(-0.43+pX, 1.33+pY);
	glVertex2f(-0.46+pX, 1.33+pY);

	glEnd();
}

//OBJ 13
void TrafficSignal1(){

    //Traffic Signal light body
    glBegin(GL_QUADS);

	glColor3ub(63, 47, 42  );

	glVertex2f(-0.34,0.58);
	glVertex2f(-0.26,0.58);
	glVertex2f(-0.26,0.78);
	glVertex2f(-0.34,0.78);

	glEnd();
// for Red Light
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {  if (isRed)
        glColor3ub(255, 0, 0 );
    else
            glColor3ub(124, 37, 9 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.025;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.3,y+0.74);
        }

        glEnd();

        // for Yellow Light
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(175, 169, 41  );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.025;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.3,y+0.68);
        }

        glEnd();

         // for Green Light
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        { if (isGreen)
        glColor3ub(0,255, 0 ); // Day color
    else
            glColor3ub(8, 85, 15   );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.025;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.3,y+0.625);
        }

        glEnd();


    //Traffic Signal light body stand
    glBegin(GL_QUADS);
	glColor3ub(63, 47, 42  );

	glVertex2f(-0.31,0.78);
	glVertex2f(-0.29,0.78);
	glVertex2f(-0.29,1.08);
	glVertex2f(-0.31,1.08);

	glEnd();


	//Traffic Signal light stand
    glBegin(GL_QUADS);
	glColor3ub(63, 47, 42  );

	glVertex2f(-0.46,1.06);
	glVertex2f(-0.29,1.06);
	glVertex2f(-0.29,1.08);
	glVertex2f(-0.46,1.08);

	glEnd();


	//Traffic Signal light poal
	glBegin(GL_QUADS);
	glColor3ub(63, 47, 42  );

	glVertex2f(-0.54,1.03);
	glVertex2f(-0.46,1.03);
	glVertex2f(-0.46,1.11);
	glVertex2f(-0.54,1.11);

	glEnd();
}

//OBJ 14
void TrafficSignal2(){

    //Traffic Signal light body
    glBegin(GL_QUADS);

	glColor3ub(63, 47, 42  );

	glVertex2f(0.13,-0.98);
	glVertex2f(0.21,-0.98);
	glVertex2f(0.21,-0.78);
	glVertex2f(0.13,-0.78);

	glEnd();
// for Red Light
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        { if (isGreen)
        glColor3ub(255, 0, 0 );
    else
            glColor3ub(124, 37, 9 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.025;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.17,y-0.815);
        }

        glEnd();

        // for Yellow Light
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(175, 169, 41  );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.025;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.17,y-0.875);
        }

        glEnd();

         // for Green Light
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        { if (isRed)
        glColor3ub(0,255, 0 );
    else
            glColor3ub(8, 85, 15   );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.025;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.17,y-0.935);
        }

        glEnd();


    //Traffic Signal light body stand
    glBegin(GL_QUADS);
	glColor3ub(63, 47, 42  );

	glVertex2f(0.21,-0.89);
	glVertex2f(0.54,-0.89);
	glVertex2f(0.54,-0.87);
	glVertex2f(0.21,-0.87);

	glEnd();

	//Traffic Signal light stand
    glBegin(GL_QUADS);
	glColor3ub(63, 47, 42  );

	glVertex2f(0.52,-1.04);
	glVertex2f(0.54,-1.04);
	glVertex2f(0.54,-0.87);
	glVertex2f(0.52,-0.87);


	glEnd();


	//Traffic Signal light poal
	glBegin(GL_QUADS);
	glColor3ub(63, 47, 42  );

	glVertex2f(0.49,-1.12);
	glVertex2f(0.57,-1.12);
	glVertex2f(0.57,-1.04);
	glVertex2f(0.49,-1.04);


	glEnd();
}

//OBJ 15
void Car1(){
    //Car Body
    glBegin(GL_POLYGON);
	glColor3ub(37, 60, 225  );

	glVertex2f(-1.16,0.66);
	glVertex2f(-1.14,0.64);
	glVertex2f(-0.86,0.64);
	glVertex2f(-0.79,0.66);
	glVertex2f(-0.765,0.695);
	glVertex2f(-0.765,0.8);
	glVertex2f(-0.79,0.838);
    glVertex2f(-0.86,0.86);
	glVertex2f(-1.14,0.86);
	glVertex2f(-1.16,0.84);
	glEnd();


	//back glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(-1.11,0.66);
	glVertex2f(-1.085,0.685);
	glVertex2f(-1.085,0.815);
	glVertex2f(-1.11,0.85);

	glEnd();


	//left  back glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(-1.08,0.82);
	glVertex2f(-0.995,0.82);
	glVertex2f(-0.995,0.845);
	glVertex2f(-1.105,0.845);

	glEnd();


	//left front glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(-0.99,0.82);
	glVertex2f(-0.9,0.82);
	glVertex2f(-0.875,0.845);
	glVertex2f(-0.99,0.845);

	glEnd();


	//front glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(-0.9,0.82);
	glVertex2f(-0.895,0.685);
	glVertex2f(-0.87,0.66);
	glVertex2f(-0.87,0.84);

	glEnd();


	//right back glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(-1.105,0.655);
	glVertex2f(-0.995,0.655);
	glVertex2f(-0.995,0.68);
	glVertex2f(-1.108,0.68);

	glEnd();

	//right front glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(-0.99,0.655);
	glVertex2f(-0.875,0.655);
	glVertex2f(-0.9,0.68);
	glVertex2f(-0.99,0.68);

	glEnd();


	//bulb 1
	glBegin(GL_TRIANGLES);

        glColor3ub(240, 240, 240 ); // Day color


	glVertex2f(-0.79,0.66);
	glVertex2f(-0.79,0.695);
	glVertex2f(-0.765,0.695);
	glEnd();


	//bulb 2
	glBegin(GL_TRIANGLES);

        glColor3ub(240, 240, 240 ); // Day color


	glVertex2f(-0.79,0.838);
	glVertex2f(-0.79,0.8);
	glVertex2f(-0.765,0.8);
	glEnd();



}



void display() {
	glClearColor(0.60f, 0.60f, 0.60f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	ROadSide();
	Building1();
	BuildingLine();
	Building2();
	Building2Line();
	Building3();
	Building3Line();
	Roads();
//	ZebraCrosing();

    glPushMatrix();
    glTranslatef(move_car1, 0.0f, 0.0f);
	Car1();
	glPopMatrix();
	glPushMatrix();
/*    glTranslatef(0.0f,move_car2, 0.0f);
	Car2();
	glPopMatrix();
	glPushMatrix();
    glTranslatef(move_car3, 0.0f, 0.0f);
	Car3();
	glPopMatrix();
	glPushMatrix();
    glTranslatef( 0.0f,move_car4, 0.0f);
	Car4();
	glPopMatrix();
	metroBridge();
	glPushMatrix();
	glTranslatef(move_train1, 0.0f, 0.0f);
	Train(0,0);
	glPopMatrix();
    glPushMatrix();
	glTranslatef(-move_train1, 0.0f, 0.0f);
	Train(0,-0.5);
	glPopMatrix();
	RailPower(0,0);
	RailPower(0.4,0);
	RailPower(0.8,0);
	RailPower(1.2,0);
	RailPower(1.6,0);
	RailPower(2.0,0);
	RailPower(2.40,0);
	RailPower(2.80,0);
	RailPower(3.20,0);
	RailPower(3.60,0);
	RailCurrent();
*/

	LampPost1(-0.6,0);
	LampPost1(-0.3,0);
	LampPost1(0,0);
	LampPost1(0.3,0);
	LampPost1(0.6,0);
	LampPost1(0.9,0);
	LampPost1(2.1,0);
	LampPost1(2.4,0);
	LampPost1(2.7,0);
	LampPost1(3.0,0);
	LampPost1(3.3,0);
	LampPost1(3.7,0);
	LampPost1(3.5,0);

	LampPost2(-0.6,0);
	LampPost2(-0.3,0);
	LampPost2(0,0);
	LampPost2(0.3,0);
	LampPost2(0.6,0);
	LampPost2(0.9,0);
	LampPost2(1.83,0);
	LampPost2(2.13,0);
	LampPost2(2.43,0);
	LampPost2(2.73,0);
	LampPost2(3.03,0);
	LampPost2(3.23,0);



	LampPost3(0,-0.1);
	LampPost3(0,0.1);
	LampPost3(0,0.3);
	LampPost3(0,2.35);
	LampPost3(0,2.55);
	LampPost3(0,2.75);


	LampPost4(0.01,0.09);
	LampPost4(0.01,-0.1);
	LampPost4(0.01,-0.3);
	LampPost4(0.01,-2.45);
	LampPost4(0.01,-2.6);
	LampPost4(0.01,-2.8);
//	Rain();


	TrafficSignal1();
	TrafficSignal2();


	glutSwapBuffers();
	glFlush();

}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glLoadIdentity();
	glutCreateWindow("Project");
	glutInitWindowSize(1000, 1000);
	glutDisplayFunc(display);
	/*initializeRain();
	glutKeyboardFunc(toggleDayNight);
	glutTimerFunc(10, updatecar1, 0);
	glutTimerFunc(10, updatecar3, 0);
	glutTimerFunc(10, updatecar4, 0);
	glutTimerFunc(10, updatecar2, 0);
	glutTimerFunc(10, updateTrain, 0);*/
	gluOrtho2D(-2, 2, -1.5, 1.5);

	// Move cout statements before glutMainLoop
	cout << "For day press D/d" << endl;
	cout << "For night press N/n" << endl;
	cout << "For traffic signal red light press R/r" << endl;
	cout << "For traffic signal green light press G/g" << endl;
	cout << "For train move press A/a" << endl;
	cout << "For train stop press S/s" << endl;
	cout << "For rain start press B/b" << endl;
	cout << "For rain stop press V/v" << endl;

	glutMainLoop();

	return 0;
}

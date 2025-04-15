#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;


//OBJ 01 Roadside
void RoadSide(){
    glBegin(GL_POLYGON);
	glColor3ub(216,209,205);
	glVertex2f(-2.0, -01.5);
	glVertex2f(-2.0, -01.5);
	glVertex2f(2.0, -01.5);
	glVertex2f(2.0, 01.5);
	glVertex2f(-2.0, 01.5);
	glEnd();
}

//OBJ 02 Buielding1
void Building1(){
    //top
	glBegin(GL_QUADS);
	glColor3ub(14, 48, 76);
	glVertex2f(-2.0,1.5);
	glVertex2f(-2.0,1.4);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.3,1.5);
	glEnd();

	//top2
	glBegin(GL_QUADS);
	glColor3ub(14, 48, 76);
    glVertex2f(-0.85,1.5);
	glVertex2f(-0.5,1.5);
	glVertex2f(-0.5,1.4);
	glVertex2f(-1.0,1.4);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 81,150);
	glVertex2f(-2.0,1.4);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.5,1.1);
	glVertex2f(-2.0,1.1);

	glEnd();

	//2nd

	glBegin(GL_QUADS);
	glColor3ub(0, 81,150);
	glVertex2f(-1.0,1.4);
	glVertex2f(-0.7,1.4);
	glVertex2f(-0.7,1.1);
	glVertex2f(-1.0,1.1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 81,150);
	glVertex2f(-0.7,1.4);
	glVertex2f(-0.5,1.5);
	glVertex2f(-0.5,1.2);
	glVertex2f(-0.7,1.1);
	glEnd();

	//3rd

	glBegin(GL_QUADS);
	glColor3ub(0, 81,150);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.3,1.5);
	glVertex2f(-1.3,1.2);
	glVertex2f(-1.5,1.1);
	glEnd();
}

//OBJ 03 BuildingLine
void BuildingLine(){

glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(-2.0,1.4);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.3,1.5);
	glEnd();

//horizontal line
	for(int i=0;i<3;i++){
        float f= (i+1)*0.08;
        glLineWidth(1);
        glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(-2.0,1.4-f);
	glVertex2f(-1.5,1.4-f);
	glVertex2f(-1.5,1.4-f);
	glVertex2f(-1.3,1.5-f);
	glEnd();

	}
	//vertical line
	glLineWidth(2.5);
	  glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.5,1.1);
	glEnd();


	//2nd part of left buiidings
    //horizontal line
	for(int i=0;i<4;i++){
    float f= (i+1)*0.08;
    glLineWidth(1);
    glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(-1.0,1.48-f);
	glVertex2f(-0.7,1.48-f);
	glVertex2f(-0.7,1.48-f);
	glVertex2f(-0.5,1.58-f);
	glEnd();

	}
	//vertical line
	glLineWidth(2.5);
    glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(-0.7,1.4);
	glVertex2f(-0.7,1.1);
	glEnd();


}

//OBJ 04 Buildinng2
void Building2(){

    // Mirror on positive side of x-axis
    glBegin(GL_POLYGON);
    glColor3ub(216, 209, 205);
    glVertex2f(2.0, -1.5);
    glVertex2f(2.0, -1.5);
    glVertex2f(2.0, -1.5);
    glVertex2f(2.0, 1.5);
    glVertex2f(2.0, 1.5);
    glEnd();
}


//OBJ 05 Buildinng1_right
void Building1_right() {

    // Original Building1 (left side)
    glBegin(GL_QUADS);
    glColor3ub(14, 48, 76);
    glVertex2f(-2.0, 1.5);
    glVertex2f(-2.0, 1.4);
    glVertex2f(-1.5, 1.4);
    glVertex2f(-1.3, 1.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(14, 48, 76);
    glVertex2f(-0.85, 1.5);
    glVertex2f(-0.5, 1.5);
    glVertex2f(-0.5, 1.4);
    glVertex2f(-1.0, 1.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(-2.0, 1.4);
    glVertex2f(-1.5, 1.4);
    glVertex2f(-1.5, 1.1);
    glVertex2f(-2.0, 1.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(-1.0, 1.4);
    glVertex2f(-0.7, 1.4);
    glVertex2f(-0.7, 1.1);
    glVertex2f(-1.0, 1.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(-0.7, 1.4);
    glVertex2f(-0.5, 1.5);
    glVertex2f(-0.5, 1.2);
    glVertex2f(-0.7, 1.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(-1.5, 1.4);
    glVertex2f(-1.3, 1.5);
    glVertex2f(-1.3, 1.2);
    glVertex2f(-1.5, 1.1);
    glEnd();

    // Mirror Building1 (right side)
    glBegin(GL_QUADS);
    glColor3ub(14, 48, 76);
    glVertex2f(2.0, 1.5);
    glVertex2f(2.0, 1.4);
    glVertex2f(1.5, 1.4);
    glVertex2f(1.3, 1.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(14, 48, 76);
    glVertex2f(0.85, 1.5);
    glVertex2f(0.5, 1.5);
    glVertex2f(0.5, 1.4);
    glVertex2f(1.0, 1.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(2.0, 1.4);
    glVertex2f(1.5, 1.4);
    glVertex2f(1.5, 1.1);
    glVertex2f(2.0, 1.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(1.0, 1.4);
    glVertex2f(0.7, 1.4);
    glVertex2f(0.7, 1.1);
    glVertex2f(1.0, 1.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(0.7, 1.4);
    glVertex2f(0.5, 1.5);
    glVertex2f(0.5, 1.2);
    glVertex2f(0.7, 1.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(1.5, 1.4);
    glVertex2f(1.3, 1.5);
    glVertex2f(1.3, 1.2);
    glVertex2f(1.5, 1.1);
    glEnd();
}


//OBJ 06 BuildingLine_right
void BuildingLine_right() {
    // Original BuildingLine
    // [Original BuildingLine code here]
    // Mirror BuildingLine on positive side of x-axis

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(2.0, 1.4);
    glVertex2f(1.5, 1.4);
    glVertex2f(1.5, 1.4);
    glVertex2f(1.3, 1.5);
    glEnd();

    for (int i = 0; i < 3; i++) {
        float f = (i + 1) * 0.08;
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(0, 0, 0);
        glVertex2f(2.0, 1.4 - f);
        glVertex2f(1.5, 1.4 - f);
        glVertex2f(1.5, 1.4 - f);
        glVertex2f(1.3, 1.5 - f);
        glEnd();
    }

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(1.5, 1.4);
    glVertex2f(1.5, 1.1);
    glEnd();

    // Mirror other parts similarly...
    // 2nd part of left buildings
    // Horizontal line
 for (int i = 0; i < 4; i++) {
    float f = (i + 1) * 0.08;
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(1.0, 1.48 - f);
    glVertex2f(0.7, 1.48 - f);
    glVertex2f(0.7, 1.48 - f);
    glVertex2f(0.5, 1.58 - f);
    glEnd();
}

// Vertical line
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.7, 1.4);
glVertex2f(0.7, 1.1);
glEnd();

}

//OBJ 07 Buildinng_down
void Building1_down() {
    // top
    glBegin(GL_QUADS);
    glColor3ub(14, 48, 76);
    glVertex2f(2.0, -1.5);
    glVertex2f(2.0, -1.4);
    glVertex2f(1.5, -1.4);
    glVertex2f(1.3, -1.5);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(2.0, -1.4);
    glVertex2f(1.5, -1.4);
    glVertex2f(1.5, -1.1);
    glVertex2f(2.0, -1.1);
    glEnd();

    // 3rd
    glBegin(GL_QUADS);
    glColor3ub(0, 81, 150);
    glVertex2f(1.5, -1.4);
    glVertex2f(1.3, -1.5);
    glVertex2f(1.3, -1.2);
    glVertex2f(1.5, -1.1);
    glEnd();
}

//OBJ 08 BuildingLinr_down
void BuildingLine_down() {

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(2.0, -1.4);
    glVertex2f(1.5, -1.4);
    glVertex2f(1.5, -1.4);
    glVertex2f(1.3, -1.5);
    glEnd();

    // horizontal line
    for (int i = 0; i < 3; i++) {
        float f = (i + 1) * 0.08;
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(0, 0, 0);
        glVertex2f(2.0, -1.4 + f);
        glVertex2f(1.5, -1.4 + f);
        glVertex2f(1.5, -1.4 + f);
        glVertex2f(1.3, -1.5 + f);
        glEnd();
    }

    // vertical line
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(1.5, -1.4);
    glVertex2f(1.5, -1.1);
    glEnd();

}





//OBJ 09 Roads
void Roads(){
    glBegin(GL_POLYGON);
    glColor3ub(116, 116, 116 );


    // X axis road
    glVertex2f(-2.0, -0.9);
    glVertex2f(-2.0, 0.9);
	glVertex2f(2.0, 0.9);
	glVertex2f(2.0, -0.9);
    glEnd();


    //Y axis Road
    glBegin(GL_POLYGON);
    glColor3ub(116, 116, 116 );

    glVertex2f(-0.40, -01.5);
	glVertex2f(0.40, -01.5);
	glVertex2f(0.40, 01.5);
	glVertex2f(-0.40, 01.5);
    glEnd();
}


//OBJ 10 Railpath
void Railpath(float nX,float nY){
    glLineWidth(10);

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0 );
	glVertex2f(-1.95+nX, -0.15+nY);
	glVertex2f(-1.95f+nX, -0.35+nY);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );

	glVertex2f(-1.95f+nX, 0.15+nY);
	glVertex2f(-1.95f+nX, 0.35+nY);
	glEnd();
}



//OBJ 11 Car1
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
    glColor3ub(240, 240, 240 );

	glVertex2f(-0.79,0.66);
	glVertex2f(-0.79,0.695);
	glVertex2f(-0.765,0.695);
	glEnd();


	//bulb 2
	glBegin(GL_TRIANGLES);
    glColor3ub(240, 240, 240 );

	glVertex2f(-0.79,0.838);
	glVertex2f(-0.79,0.8);
	glVertex2f(-0.765,0.8);
	glEnd();

}

//OBJ 12 Car2
void Car2(){

    //car 2 body
    glBegin(GL_POLYGON);
	glColor3ub(97, 28, 86 );

	glVertex2f(0.1,1.08);
	glVertex2f(0.12,1.06);
	glVertex2f(0.24,1.06);
	glVertex2f(0.26,1.08);
	glVertex2f(0.28,1.16);
	glVertex2f(0.28,1.4);
	glVertex2f(0.08,1.4);
	glVertex2f(0.08,1.16);

	glEnd();

	//back glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(0.12,1.36);
	glVertex2f(0.24,1.36);
	glVertex2f(0.26,1.38);
	glVertex2f(0.1,1.38);

	glEnd();


	//right back glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(0.12,1.35);
	glVertex2f(0.12,1.28);
	glVertex2f(0.09,1.28);
	glVertex2f(0.09,1.37);

	glEnd();


	//right front glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(0.12,1.22);
	glVertex2f(0.12,1.27);
	glVertex2f(0.09,1.27);
	glVertex2f(0.09,1.17);

	glEnd();


	//front glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(0.12,1.2);
	glVertex2f(0.24,1.2);
	glVertex2f(0.26,1.16);
	glVertex2f(0.1,1.16);

	glEnd();


	//left front glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(0.24,1.22);
	glVertex2f(0.24,1.27);
	glVertex2f(0.27,1.27);
	glVertex2f(0.27,1.17);

	glEnd();

	//left back glass
	glBegin(GL_QUADS);
	glColor3ub(12, 20, 73 );

	glVertex2f(0.24,1.35);
	glVertex2f(0.24,1.28);
	glVertex2f(0.27,1.28);
	glVertex2f(0.27,1.37);

	glEnd();

	//bulb 1
	glBegin(GL_TRIANGLES);
    glColor3ub(240, 240, 240 );

	glVertex2f(0.1,1.08);
	glVertex2f(0.12,1.08);
	glVertex2f(0.12,1.06);
	glEnd();

	//bulb 2
	glBegin(GL_TRIANGLES);
    glColor3ub(240, 240, 240 );

	glVertex2f(0.26,1.08);
	glVertex2f(0.24,1.08);
	glVertex2f(0.24,1.06);
	glEnd();


}


//OBJ 13 Path
void Path(){
    Railpath(0,0);
	Railpath(0.09,0);
	Railpath(0.18,0);
	Railpath(0.27,0);
	Railpath(0.36,0);
	Railpath(0.45,0);
	Railpath(0.54,0);
	Railpath(0.63,0);
	Railpath(0.72,0);
	Railpath(0.81,0);
	Railpath(0.90,0);
	Railpath(0.99,0);
	Railpath(1.08,0);
	Railpath(1.17,0);
	Railpath(1.26,0);
	Railpath(1.35,0);
	Railpath(1.44,0);
	Railpath(1.53,0);
	Railpath(1.62,0);
	Railpath(1.71,0);
	Railpath(1.80,0);
	Railpath(1.89,0);
	Railpath(1.98,0);
	Railpath(2.07,0);
	Railpath(2.16,0);
	Railpath(2.25,0);
	Railpath(2.34,0);
	Railpath(2.43,0);
	Railpath(2.52,0);
	Railpath(2.61,0);
	Railpath(2.70,0);
	Railpath(2.77,0);
	Railpath(2.86,0);
	Railpath(2.95,0);
	Railpath(3.04,0);
	Railpath(3.13,0);
	Railpath(3.22,0);
	Railpath(3.31,0);
	Railpath(3.40,0);
	Railpath(3.49,0);
	Railpath(3.58,0);
	Railpath(3.67,0);
	Railpath(3.76,0);
	Railpath(3.85,0);
	Railpath(3.92,0);

}

//OBJ 14 Metro_Bridge
void metroBridge(){
    glBegin(GL_QUADS);
	glColor3ub(182, 182, 182  );

	glVertex2f(-2,-0.5);
	glVertex2f(2.0,-0.5);
	glVertex2f(2.0,0.5);
	glVertex2f(-2.0,0.5);

	glEnd();

    glLineWidth(4);

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255 );
	glVertex2f(-2.0f, -0.5);
	glVertex2f(2.0f, -0.5);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(255, 255, 255 );

	glVertex2f(-2.0f, 0.5);
	glVertex2f(2.0f, 0.5);
	glEnd();

	Path();
    glLineWidth(4);

	glBegin(GL_LINES);
	glColor3ub(161, 126, 114 );
	glVertex2f(-2.0f, -0.35);
	glVertex2f(2.0f, -0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(161, 126, 114 );
	glVertex2f(-2.0f, -0.15);
	glVertex2f(2.0f, -0.15);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(161, 126, 114 );
	glVertex2f(-2.0f, 0.35);
	glVertex2f(2.0f, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(161, 126, 114 );
	glVertex2f(-2.0f, 0.15);
	glVertex2f(2.0f, 0.15);
	glEnd();
}


//OBJ 15 Train
void Train(float tx,float ty){

    //Train front Head
    glBegin(GL_POLYGON);
	glColor3ub(250, 250, 250  );

	glVertex2f(1.8+tx,0.2+ty);
	glVertex2f(1.78+tx,0.16+ty);
	glVertex2f(1.76+tx,0.12+ty);
	glVertex2f(1.72+tx,0.08+ty);
	glVertex2f(1.64+tx,0.06+ty);
	glVertex2f(1.5+tx,0.05+ty);
	glVertex2f(1.5+tx,0.45+ty);
	glVertex2f(1.64+tx,0.44+ty);
	glVertex2f(1.72+tx,0.42+ty);
	glVertex2f(1.76+tx,0.38+ty);
	glVertex2f(1.78+tx,0.34+ty);
	glVertex2f(1.8+tx,0.3+ty);

	glEnd();

	//BLU
    glBegin(GL_POLYGON);
	glColor3ub(74,86,160);

	glVertex2f(1.6+tx,0.42+ty);
	glVertex2f(1.7+tx,0.38+ty);
	glVertex2f(1.74+tx,0.38+ty);
	glVertex2f(1.76+tx,0.28+ty);
	glVertex2f(1.76+tx,0.22+ty);
	glVertex2f(1.74+tx,0.16+ty);
	glVertex2f(1.7+tx,0.12+ty);
	glVertex2f(1.6+tx,0.08+ty);

    glEnd();

    //GREEN
    glBegin(GL_QUADS);
	glColor3ub(46,54,91);
    glVertex2f(1.5+tx,0.45+ty);
	glVertex2f(1.6+tx,0.42+ty);
	glVertex2f(1.6+tx,0.08+ty);
	glVertex2f(1.5+tx,0.05+ty);
    glEnd();



	//Train back Head
    glBegin(GL_POLYGON);
	glColor3ub(250, 250, 250  );

	glVertex2f(0+tx,0.2+ty);
	glVertex2f(0.02+tx,0.16+ty);
	glVertex2f(0.04+tx,0.12+ty);
	glVertex2f(0.08+tx,0.08+ty);
	glVertex2f(0.16+tx,0.06+ty);
	glVertex2f(0.3+tx,0.05+ty);
	glVertex2f(0.3+tx,0.45+ty);
	glVertex2f(0.16+tx,0.44+ty);
	glVertex2f(0.08+tx,0.42+ty);
	glVertex2f(0.04+tx,0.38+ty);
	glVertex2f(0.02+tx,0.34+ty);
	glVertex2f(0+tx,0.3+ty);

	glEnd();

    //BLU GLASS
    glBegin(GL_POLYGON);
	glColor3ub(74,86,160);

	glVertex2f(0.1+tx,0.1+ty);
	glVertex2f(0.07+tx,0.13+ty);
	glVertex2f(0.05+tx,0.17+ty);
	glVertex2f(0.04+tx,0.22+ty);
	glVertex2f(0.04+tx,0.28+ty);
	glVertex2f(0.05+tx,0.33+ty);
	glVertex2f(0.07+tx,0.37+ty);
	glVertex2f(0.1+tx,0.4+ty);
	glVertex2f(0.2+tx,0.415+ty);
	glVertex2f(0.2+tx,0.083+ty);

	glEnd();

    //GREEN
	glBegin(GL_QUADS);
	glColor3ub(46,54,91);

	glVertex2f(0.2+tx,0.083+ty);
	glVertex2f(0.3+tx,0.0656+ty);
	glVertex2f(0.3+tx,0.4314+ty);
	glVertex2f(0.2+tx,0.416+ty);

	glEnd();



	//Train body

	glBegin(GL_QUADS);
    glColor3ub(255,156,92);
	glVertex2f(0.3+tx,0.05+ty);
	glVertex2f(1.5+tx,0.05+ty);
	glVertex2f(1.5+tx,0.45+ty);
	glVertex2f(0.3+tx,0.45+ty);

	glEnd();

    glLineWidth(4);
    glColor3ub(252, 22, 22);

    glBegin(GL_LINES);
    glVertex2f(0.2+tx,0.08283+ty);
    glVertex2f(0.1+tx,0.1+ty);
    glVertex2f(0.07+tx,0.13+ty);
    glVertex2f(0.05+tx,0.17+ty);
    glVertex2f(0.04+tx,0.22+ty);
    glVertex2f(0.04+tx,0.28+ty);
    glVertex2f(0.05+tx,0.33+ty);
    glVertex2f(0.07+tx,0.37+ty);
    glVertex2f(0.1+tx,0.4+ty);
    glVertex2f(0.2+tx,0.42+ty);
    glVertex2f(0.3+tx,0.45+ty);
    glVertex2f(1.5+tx,0.45+ty);
    glVertex2f(1.6+tx,0.42+ty);
    glVertex2f(1.7+tx,0.38+ty);
    glVertex2f(1.74+tx,0.38+ty);
    glVertex2f(1.76+tx,0.28+ty);
    glVertex2f(1.76+tx,0.22+ty);
    glVertex2f(1.74+tx,0.16+ty);
    glVertex2f(1.7+tx,0.12+ty);
    glVertex2f(1.6+tx,0.08+ty);
    glVertex2f(1.5+tx,0.05+ty);
    glVertex2f(0.3+tx,0.05+ty);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
	glColor3ub(22, 134, 228);
    glVertex2f(1.5+tx,0.45+ty);
    glVertex2f(1.5+tx,0.05+ty);
    glEnd();

    glBegin(GL_LINES);
	glColor3ub(22, 134, 228);
    glVertex2f(1.1+tx,0.45+ty);
    glVertex2f(1.1+tx,0.05+ty);
    glEnd();

    glBegin(GL_LINES);
	glColor3ub(22, 134, 228);
    glVertex2f(0.7+tx,0.45+ty);
    glVertex2f(0.7+tx,0.05+ty);
    glEnd();

    glBegin(GL_LINES);
	glColor3ub(22, 134, 228);
    glVertex2f(0.3+tx,0.45+ty);
    glVertex2f(0.3+tx,0.05+ty);
    glEnd();


}


//OBJ 16 RailPower
void RailPower(float xA,float yA){
    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
	glVertex2f(-1.92+xA,-0.5+yA);
	glVertex2f(-1.88+xA,-0.46+yA);
	glEnd();

	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
    glVertex2f(-1.92+xA,-0.51+yA);
    glVertex2f(-1.92+xA,0.51+yA);

	glEnd();

	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(0, 0,0);
    glVertex2f(-1.88+xA,0.46+yA);
	glVertex2f(-1.92+xA,0.5+yA);
	glEnd();



}

//OBJ 17 ZebraCrosing1
void ZebraCrosing1(float Ax,float By){
    glLineWidth(4);

	glBegin(GL_LINES);
	glColor3f(1.0f, 01.0f, 01.0f);
	glVertex2f(-0.38f+Ax, 0.99f+By);
	glVertex2f(-0.38f+Ax, 0.91f+By);
	glEnd();

}

//OBJ 18 ZebraCrosing2
void ZebraCrosing2(float Ax,float By){
    glLineWidth(4);

	glBegin(GL_LINES);
	glColor3f(1.0f, 01.0f, 01.0f);
	glVertex2f(0.42f+Ax, 0.87f+By);
	glVertex2f(0.5f+Ax, 0.87f+By);
	glEnd();

}


//OBJ 19 ZebraCrosing3
void ZebraCrosing3(float Ax,float By){
    glLineWidth(4);

	glBegin(GL_LINES);
	glColor3f(1.0f, 01.0f, 01.0f);
	glVertex2f(-0.38f+Ax, -0.99f+By);
	glVertex2f(-0.38f+Ax, -0.91f+By);
	glEnd();

}

//OBJ 20 ZebraCrosing4
void ZebraCrosing4(float Ax,float By){
    glLineWidth(4);

	glBegin(GL_LINES);
	glColor3f(1.0f, 01.0f, 01.0f);
	glVertex2f(-0.42f+Ax, 0.87f+By);
	glVertex2f(-0.5f+Ax, 0.87f+By);
	glEnd();

}

//OBJ 21 ZebraCrosing
ZebraCrosing(){
    ZebraCrosing1(0,0);
	ZebraCrosing1(0.04,0);
	ZebraCrosing1(0.08,0);
	ZebraCrosing1(0.12,0);
	ZebraCrosing1(0.16,0);
	ZebraCrosing1(0.20,0);
	ZebraCrosing1(0.24,0);
	ZebraCrosing1(0.28,0);
	ZebraCrosing1(0.32,0);
	ZebraCrosing1(0.36,0);
	ZebraCrosing1(0.40,0);
	ZebraCrosing1(0.44,0);
	ZebraCrosing1(0.48,0);
	ZebraCrosing1(0.52,0);
	ZebraCrosing1(0.56,0);
	ZebraCrosing1(0.60,0);
	ZebraCrosing1(0.64,0);
	ZebraCrosing1(0.68,0);
	ZebraCrosing1(0.72,0);
	ZebraCrosing1(0.76,0);


	ZebraCrosing2(0,0);
	ZebraCrosing2(0,-0.05);
	ZebraCrosing2(0,-0.10);
	ZebraCrosing2(0,-0.15);
	ZebraCrosing2(0,-0.20);
	ZebraCrosing2(0,-0.25);
	ZebraCrosing2(0,-0.30);
	ZebraCrosing2(0,-0.35);
	ZebraCrosing2(0,-0.40);
	ZebraCrosing2(0,-0.45);
	ZebraCrosing2(0,-0.50);
	ZebraCrosing2(0,-0.55);
	ZebraCrosing2(0,-0.60);
	ZebraCrosing2(0,-0.65);
	ZebraCrosing2(0,-0.70);
	ZebraCrosing2(0,-0.75);
	ZebraCrosing2(0,-0.80);
	ZebraCrosing2(0,-0.85);
	ZebraCrosing2(0,-0.90);
	ZebraCrosing2(0,-0.95);
	ZebraCrosing2(0,-1.0);
	ZebraCrosing2(0,-1.05);
	ZebraCrosing2(0,-1.10);
	ZebraCrosing2(0,-1.15);
	ZebraCrosing2(0,-1.20);
	ZebraCrosing2(0,-1.25);
	ZebraCrosing2(0,-1.30);
	ZebraCrosing2(0,-1.35);
	ZebraCrosing2(0,-1.40);
	ZebraCrosing2(0,-1.45);
	ZebraCrosing2(0,-1.50);
	ZebraCrosing2(0,-1.55);
	ZebraCrosing2(0,-1.60);
	ZebraCrosing2(0,-1.65);
	ZebraCrosing2(0,-1.70);
	ZebraCrosing2(0,-1.75);


	ZebraCrosing3(0,0);
    ZebraCrosing3(0.04,0);
	ZebraCrosing3(0.08,0);
	ZebraCrosing3(0.12,0);
	ZebraCrosing3(0.16,0);
	ZebraCrosing3(0.20,0);
	ZebraCrosing3(0.24,0);
	ZebraCrosing3(0.28,0);
	ZebraCrosing3(0.32,0);
	ZebraCrosing3(0.36,0);
	ZebraCrosing3(0.40,0);
	ZebraCrosing3(0.44,0);
	ZebraCrosing3(0.48,0);
	ZebraCrosing3(0.52,0);
	ZebraCrosing3(0.56,0);
	ZebraCrosing3(0.60,0);
	ZebraCrosing3(0.64,0);
	ZebraCrosing3(0.68,0);
	ZebraCrosing3(0.72,0);
	ZebraCrosing3(0.76,0);

	ZebraCrosing4(0,0);
    ZebraCrosing4(0,-0.05);
	ZebraCrosing4(0,-0.10);
	ZebraCrosing4(0,-0.15);
	ZebraCrosing4(0,-0.20);
	ZebraCrosing4(0,-0.25);
	ZebraCrosing4(0,-0.30);
	ZebraCrosing4(0,-0.35);
	ZebraCrosing4(0,-0.40);
	ZebraCrosing4(0,-0.45);
	ZebraCrosing4(0,-0.50);
	ZebraCrosing4(0,-0.55);
	ZebraCrosing4(0,-0.60);
	ZebraCrosing4(0,-0.65);
	ZebraCrosing4(0,-0.70);
	ZebraCrosing4(0,-0.75);
	ZebraCrosing4(0,-0.80);
	ZebraCrosing4(0,-0.85);
	ZebraCrosing4(0,-0.90);
	ZebraCrosing4(0,-0.95);
	ZebraCrosing4(0,-1.0);
	ZebraCrosing4(0,-1.05);
	ZebraCrosing4(0,-1.10);
	ZebraCrosing4(0,-1.15);
	ZebraCrosing4(0,-1.20);
	ZebraCrosing4(0,-1.25);
	ZebraCrosing4(0,-1.30);
	ZebraCrosing4(0,-1.35);
	ZebraCrosing4(0,-1.40);
	ZebraCrosing4(0,-1.45);
	ZebraCrosing4(0,-1.50);
	ZebraCrosing4(0,-1.55);
	ZebraCrosing4(0,-1.60);
	ZebraCrosing4(0,-1.65);
	ZebraCrosing4(0,-1.70);
	ZebraCrosing4(0,-1.75);

	return 0;

}


//OBJ 22 Display
void display() {
	glClearColor(0.60f, 0.60f, 0.60f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	RoadSide();
	Building1_right();
	BuildingLine_right();
	Building1();
	BuildingLine();
    Building1_down();
	BuildingLine_down();
	Roads();
	Path();
	ZebraCrosing();
	Car1();
	Car2();
	metroBridge();
    Train(0,0);
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
	glFlush();

}




int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glLoadIdentity();
	glutCreateWindow("Project");
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1920, 1080);
	glutDisplayFunc(display);

	gluOrtho2D(-2, 2, -1.5, 1.5);

	glutMainLoop();

	return 0;
}

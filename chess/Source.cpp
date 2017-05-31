#include <iostream>
#include <GL/glut.h>
#include <math.h>

using namespace std;

	int xmin, ymin, xmax, ymax, p1,p2, q1, q2, top, bottom, left, right;
	void myDisplay(void)
	{
	glClear (GL_COLOR_BUFFER_BIT);
	//glColor3f (0.0, 0.0, 0.0);

	//GLint y;
	glColor3f(0, 0, 0);
	glPointSize(4.0);

	glBegin(GL_LINE_LOOP);
	glVertex2i(xmin, ymin);
	glVertex2i(xmax, ymin);
	glVertex2i(xmax, ymax);
	glVertex2i(xmin, ymax);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(p1,q1);
	glVertex2i(p2,q2);
	glEnd();
	
	glFlush ();



	
	}

	/*void dda(void)
	{
		float len = abs(x-a);
		if(abs(y-b)>len)
		{
			len = abs(y-b);
		}
		float xi = (x-a)/ len;
		float yi = (y-b) /len;
		float x = a;
		float y = b;
		for(int i = 1; i<len; i++)
		{
			//write point
			x = x + xi;
			y = y + yi;
			 
		}
	*/

	void myInit (void)
	{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (660, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("my first attempt");

	cout << "enter the minimum window co ordinates: " << endl;
	cin >> xmin;
	cin >> ymin;

	cout << "enter the maximum window co ordinates: " << endl;
	cin >> xmax;
	cin >> ymax;
	cout << "enter the co ordinates of first point line: " << endl;
	cin >> p1;
	cin >> q1;
	cout << "enter the co ordinates of second point line: " << endl;
	cin >> p2;
	cin >> q2;

	




	glutDisplayFunc(myDisplay);
	myInit ();
	glutMainLoop();
}
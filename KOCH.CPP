

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void koch(int x1, int y1, int x2, int y2)
{       int a = 60;
	float ang =a*( 3.141/180);
	int x3, y3, x4, y4, x5, y5;

	x3 = (x2 + 2.0*x1)/3.0;
	x4 = (2.0*x2 + x1 )/3.0;

	y3 = (y2 + 2.0*y1)/3.0;
	y4 = (2.0*y2 +y1)/3.0;




     x5 = x3+ (x4-x3)*cos(ang)+(y4-y3)*sin(ang);
     y5 = y3-(x4-x3)*sin(ang)+(y4-y3)*cos(ang);

     setcolor(BLACK);
	line(x3,y3, x4, y4);


	setcolor(GREEN);

      line(x3, y3, x5, y5);
	line(x5, y5, x4, y4);

	if(abs(x2-x1)>2)
	{
	  koch(x1,y1,x3,y3);
	  koch(x3,y3,x5,y5);
	  koch(x5,y5,x4,y4);
	  koch(x4,y4,x2,y2);
	}

}

void main()
{   clrscr();
   int gd=DETECT,gm=0;

    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int  x1=150,y1=200,x2=450,y2=200;
    setcolor(GREEN);
    line(x1,y1,x2,y2);

    koch(x1, y1, x2, y2);
    getch();
    closegraph();

}
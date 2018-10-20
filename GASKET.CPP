#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void gasket(int x1,int y1,int x2,int y2,int x3,int y3)
{    int x4,y4, x5,x6,y5,y6;
     x4=(x1+x2)/2;
     y4=(y1+y2)/2;

     x5=(x2+x3)/2;
     y5=(y2+y3)/2;

     x6=(x1+x3)/2;
     y6=(y1+y3)/2;



     line(x4,y4,x5,y5);
     line(x5,y5,x6,y6);
     line(x4,y4,x6,y6);



     if((x3-x1)>2)
     {   	gasket(x1,y1,x4,y4,x6,y6);
		gasket(x4,y4,x2,y2,x5,y5);
		gasket(x6,y6,x5,y5,x3,y3);
	   }
}
void gasket1(int x2,int y2,int x3,int y3,int x4,int y4)
{    int x5,y5,x6,y6,x7,y7;
     x5=(x2+x4)/2;
     y5=(y2+y4)/2;

     x6=(x3+x4)/2;
     y6=(y3+y4)/2;

     x7=(x2+x3)/2;
     y7=(y2+y3)/2;



     line(x5,y5,x7,y7);
     line(x7,y7,x6,y6);
     line(x5,y5,x6,y6);



     if((x4-x2)>2)
     {   	gasket(x2,y2,x5,y5,x7,y7);
		gasket(x7,y7,x3,y3,x6,y6);
		gasket(x5,y5,x4,y4,x6,y6);
	   }
}

void main()
{ 	int gd=DETECT,gm=0;
	int x1=100, x2=50, x3=400,y1=50,y2=400,y3=50,x4=400,y4=400;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	//cout<<"Enter the value x1 and y1 of triangle";
       //	cin>>x1>>y1;
       //	cout<<"Enter the value x2 and y2 of triangle";
       //	cin>>x2>>y2;
      //	cout<<"Enter the value x3 and y3 of triangle";
      //	cin>>x3>>y3;
	setcolor(YELLOW);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	line(x2,y2,x4,y4);
	line(x3,y3,x4,y4);
	gasket(x1,y1,x2,y2,x3,y3);
	gasket1(x2,y2,x3,y3,x4,y4);

	getch();
     }

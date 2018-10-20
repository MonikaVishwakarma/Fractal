#include<iostream.h>
#include<graphics.h>
#include<conio.h>

void cantor(int x,int y,int len)
{ if(len>=1)
  {line(x,y,x+len,y);
   y=y+20;
   cantor(x,y,len/3);
   cantor(x+len*2/3,y,len/3);
   }
}



void main()
{ 	int gd=DETECT,gm=0;
	int x1, x2, y;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cout<<"Enter the value of x-axis";
	cin>>x1;
	cout<<"Enter the value of y-axis";
	cin>>x2;
	cout<<"Enter the length of the line";
	cin>>y;
	cantor(x1,x2,y);
	getch();
 }

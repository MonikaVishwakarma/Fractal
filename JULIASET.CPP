#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>

typedef struct{
   double x,y;
   }complex;

complex add(complex a,complex b){
   complex c;
   c.x = a.x +b.x;
   c.y = a.y+b.y;
   return c;
   }

 complex sqr(complex a){
  complex c;
  c.x=a.x*a.x -a.y*a.y;
  c.y=2*a.x*a.y;
  return c;
  }

  double mod(complex a){
  return sqrt(a.x*a.x+a.y*a.y);
  }

 complex mapPoint(int width,int height,double radius,int x,int y){
 complex c;
 int l =(width<height)?width:height;
 c.x =2*radius*(x-width/2.0)/l;
 c.y=2*radius*(y-height/2.0)/l;
 return c;
 }

void juliaset(int width,int height,complex c,double radius,int n){
 int x,y,i;
 complex z0,z1;
  for(x=0;x<=width;x++)
    for(y=0;y<=height;y++){
      z0=mapPoint(width,height,radius,x,y);
       for(i=1;i<=n;i++){
	z1=add(sqr(z0),c);
	if(mod(z1)>radius){
	 putpixel(x,y,i%15+1);
	 break;
	 }
	 z0=z1;
      }
      if(i>n)
	putpixel(x,y,0);
      }
   }

  int main(int argC,char* argV[])
  {
    int gd= DETECT, gm=0;
    initgraph(&gd,&gm,NULL);
    int width, height;
    complex c;

    if(argC!=7)
    cout<<"Usage: width and height of screen,real and imaginary parts od c,limit radius and iteration"   ;
    else{
      width=atoi(argV[1]);
      height=atoi(argV[2]);
      c.x=atof(argV[3]);
      c.y=atof(argV[4]);

      juliaset(int width,int height,int c,int atof(argV[5]),int atoi(argV[6]));

      }

      get();

      closegraph();
    }
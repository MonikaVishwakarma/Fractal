#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<complex.h>
#include<math.h>
void main()
{
 int gd=DETECT,gm=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
float cx,cy,ec;
complex  c,z;int iter=25, i, n=2;
ec=pow(2, 1.0/(n-1));
for(cx=(-1)*ec;cx<=ec;cx=cx+0.01)
{
  for(cy=(-1)*ec;cy<=ec;cy=cy+0.01)
     {
       c=complex(cx,cy);
       z=complex(0,0);
       for(i=0;i<iter;i++)
      {
	 z=pow(z,n)+c;
	 if((real(z)*real(z)+imag(z)*imag(z))>ec*ec)
	  break;
      }

       putpixel(200+70*cx,200+70*cy,i);

 } }
       getch();
//       closegraph();
}


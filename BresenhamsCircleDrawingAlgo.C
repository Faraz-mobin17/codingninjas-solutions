#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>

void plot(int xc,int yc, int x, int y) {
  putpixel(x+xc,y+yc,RED);
  putpixel(x+xc,-y+yc,YELLOW);
  putpixel(-x+xc,-y+yc,GREEN);
  putpixel(-x+xc,y+yc,YELLOW);
  putpixel(y+xc,x+yc,12);
  putpixel(y+xc,-x+yc,14);
  putpixel(-y+xc,-x+yc,15);
  putpixel(-y+xc,x+yc,6);
}
void brecircle(int xc, int yc, int r) {
   int x = 0,y = r, v = 3-2*r;
   plot(xc,yc,x,y);
   while (x <= y) {
     if (v <= 0) {
       v = v + 4*x+6;
     }  else {
       v = v + 4* (x - y) + 10;
       y--;
     }
     x++;
     plot(xc,yc,x,y);
   }
}
void main()
{

  int xc=50,yc=50,r=50,gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   brecircle(xc,yc,r);
    getch();
   closegraph();
}
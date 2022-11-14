#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main() {
   int x1 = 100, x2 = 300, y1=100, y2 = 360;
   int i, s1,s2,dx,dy,gd = DETECT,gm,E,X,Y,interchange;
   dx = abs(x2 - x1);
   dy = abs(y2 - y1);
   if ((x2 - x1) < 0 && (y2 - y1) < 0) {
      s1 = -1;
      s2 = -1;
   }
   else if ((x2 - x1) > 0 && (y2 - y1) > 0) {
      s1 = 1; s2 = 1;
   }
   else {
     s1 = 0; s2 = 0;
   }
   if (dy > dx) {
    int temp;
    temp = dx;
    dx = dy;
    dy = temp;
    interchange = 1;
   }
   else {
     interchange = 0;
   }
   E = 2 * dx - dy;
   X = x1;
   Y = y1;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   for (i = 1; i <= dx; i++) {
     putpixel(X,Y,RED);
     while (E > 0) {
       if (interchange == 1) {
	 X += s1;
       }
       else {
	 Y += s2;
       }
       E = E - 2*dx;
     }
     if (interchange == 1) {
       Y = Y + s2;
     } else {
      X = X + s1;
     }
     E = E + 2*dy;
   }
   getch();
   closegraph();
}

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main() {
  int x1 = 100, x2= 300, y1 = 100, y2 = 400;
  int i, length, gd = DETECT,gm;
  double X,Y, xin,yin;
  length = abs(x2-x1);
  if(abs(y2-y1) > length) {
     length = abs(y2-y1);
  }
  xin = (x2-x1)/length;
  yin = (y2-y1)/length;
  X = x1 + 0.5;
  Y = y1 + 0.5;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  for (i = 1; i <= length; i++) {
     putpixel(X,Y,RED);
     X = X + xin;
     Y = Y + yin;
  }
  getch();
  closegraph();
}
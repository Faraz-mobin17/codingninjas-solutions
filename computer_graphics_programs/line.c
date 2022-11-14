#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
   int gd = DETECT, gm;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
   line(100,100,200,200);
   getch();
   closegraph();
}
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main() {
   int gd = DETECT,gm;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
   putpixel(250,250,WHITE);
   getch();
   closegraph();
}
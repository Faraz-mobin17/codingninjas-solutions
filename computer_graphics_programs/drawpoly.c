#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
	int gd = DETECT, gm,points[]={320,150,420,300,250,300,320,150};
 	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 	drawpoly(4,points);
 	getch();
 	closegraph();
}

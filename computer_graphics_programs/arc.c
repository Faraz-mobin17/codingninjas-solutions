#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
	int gd = DETECT, gm;
 	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 	arc(100,100,0,135,50);
 	getch();
 	closegraph();
}
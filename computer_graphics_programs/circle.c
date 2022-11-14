#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	circle(100,200,100);
	
	getch();
	closegraph();
}
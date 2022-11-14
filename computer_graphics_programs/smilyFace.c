#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
	int gd = DETECT, gm;
	clrscr();
 	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 	setcolor(RED);
 	circle(200,200,100);
 	circle(160,160,10);
 	circle(240,160,10);
 	line(200,190,200,210);
 	arc(200,240,180,360,30);
 	getch();
 	closegraph();
}

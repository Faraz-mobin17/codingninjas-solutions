#include<stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

void floodfill4(int x,int y, int n_color, int o_color) {
    if (getpixel(x,y) == o_color) {
        putpixel(x,y,n_color);
        floodfill4(x+1,y,n_color,o_color);
        floodfill4(x-1,y,n_color,o_color);
        floodfill4(x,y+1,n_color,o_color);
        floodfill4(x,y-1,n_color,o_color);
    }
}

int main() {
    int gd = DETECT,gm;
    clrscr();
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setcolor(2);
    rectangle(50,50,100,100);
    floodfill4(51,51,12,0);
    getch();
    closegraph();
return 0;
}
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

void boundaryfill4(int x, int y, int fill_color, int boundary_color) {
    if (getpixel(x,y) != boundary_color && getpixel(x,y) != fill_color) {
        putpixel(x,y,fill_color);
        boundaryfill4(x+1,y,fill_color,boundary_color);
        boundaryfill4(x,y+1,fill_color,boundary_color);
        boundaryfill4(x-1,y,fill_color,boundary_color);
        boundaryfill4(x,y-1,fill_color,boundary_color);
    }
}

int main() {
    int gd = DETECT,gm;
    int x = 200, y = 200, radius = 30;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    circle(x,y,radius);
    boundaryfill4(x,y,6,15);
    getch();
    closegraph();
    return 0;
}
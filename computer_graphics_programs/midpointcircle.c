#include <graphics.h>
#include<conio.h>
#include <stdio.h>

void main() {
    int x,y,x_mid,y_mid,radius,p;
    int gm,gd=DETECT;
    clrscr();
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the coordinates");
    scanf("%d %d",&x_mid,&y_mid);
    printf("\n Now enter the radius");
    scanf("%d",&radius);
    x = 0;
    y = radius;
    p = 1- radius;
    do {
        putpixel(x_mid+x,y_mid+y,YELLOW);
        putpixel(x_mid+y,y_mid+x,YELLOW);
        putpixel(x_mid-y,y_mid+x,YELLOW);
        putpixel(x_mid-x,y_mid+y,YELLOW);
        putpixel(x_mid-x,y_mid-y,YELLOW);
        putpixel(x_mid-y,y_mid-x,YELLOW);
        putpixel(x_mid+y,y_mid-x,YELLOW);
        putpixel(x_mid+x,y_mid-y,YELLOW);
        if (p < 0) {
            p += 2 *x + 3;
        } else {
            y = y - 1;
            p = p + (2 * x) - (2 * y) + 5;
        }
        x = x + 1;
    } while (y > x);
    getch();
    closegraph();
}
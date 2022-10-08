#include<stdio.h>
// #include<graphic.h>
int main(int argc, char const *argv[])
{
    /* code */
    int x = 0, y = 8, v = -13, h = 5, k = 10;
    while (x <= y) {
        setpixel(x+h,y+k);
        setpixel(-x+h,-y+k);
        setpixel(y+h,x+k);
        setpixel(-y+h,-x+k);
        setpixel(-y+h,x+k);
        setpixel(y+h,-x+k);
        setpixel(x+h, y+k);
        setpixel(y+h,-y+k);
        if (v < 0) {
            v = v + 4*(x) + 6;
        } else {
            v = v + 4*(x - y) + 10;
            y--;
        }
        x++;
    }
    return 0;
}

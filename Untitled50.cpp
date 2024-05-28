#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
void drawText(int x, int y, char* str) {
int length, i;
length = strlen(str);
for (i = 0; i < length; i++) {
putpixel(x, y, 1);
x++;}
}void drawCircleText(int xc, int yc, int r, char* str) {
int i, x, y;
double angle;
for (i = 0; i < strlen(str); i++) {
angle = i * 2 * M_PI / strlen(str);
x = xc + r * cos(angle);
y = yc + r * sin(angle);
drawText(x, y, &str[i]);}
}int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
drawCircleText(320, 240, 100, "BCA");
getch();
closegraph();
return 0;}


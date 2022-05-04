#include<stdio.h> 
#include<graphics.h> 
void main() 
{ 
int ax, ay, bx, by, cx, cy; 
int sx, sy; 
int gd = DETECT, gm; 
printf("Enter co-ordinates of triangle: "); 
scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy); 
printf("Enter scaling factor: "); 
scanf("%d %d", &sx, &sy); 
initgraph(&gd, &gm, "c:\\turboc3\\bgi"); 
line(ax, ay, bx, by); 
line(bx, by, cx, cy); 
line(cx, cy, ax, ay); 
ax = ax * sx; 
bx = bx * sx; 
cx = cx * sx;
ay = ay * sy; 
by = by * sy; 
cy = cy * sy; 
line(ax, ay, bx, by); 
line(bx, by, cx, cy); 
line(cx, cy, ax, ay); 
getch(); 
}

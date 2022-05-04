#include<stdio.h> 
#include<graphics.h> 
void main() 
{ 
int ax, ay, bx, by, cx, cy; 
int tx, ty; 
int gd = DETECT, gm; 
printf("Enter co-ordinates of triangle: "); 
scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy); 
printf("Enter transformation vector: "); 
scanf("%d %d", &tx, &ty); 
initgraph(&gd, &gm, "c:\\turboc3\\bgi"); 
line(ax, ay, bx, by); 
line(bx, by, cx, cy); 
line(cx, cy, ax, ay); 
ax = ax + tx; 
bx = bx + tx; 
cx = cx + tx; 
ay = ay + ty; 
by = by + ty; 
cy = cy + ty; 
line(ax, ay, bx, by); 
line(bx, by, cx, cy); 
line(cx, cy, ax, ay); 
getch(); 
}

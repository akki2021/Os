#include<stdio.h> 
#include<graphics.h> 
#include<math.h> 
void main() 
{ 
int ax, ay, bx, by, cx, cy; 
float px, py, qx, qy, rx, ry; 
float th; 
int gd = DETECT, gm; 
printf("Enter co-ordinates of triangle: "); 
scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy); 
printf("Enter angle of rotation "); 
scanf("%f", &th); 
th=(th*M_PI)/180; 
initgraph(&gd, &gm, "c:\\turboc3\\bgi"); 
line(ax, ay, bx, by); 
line(bx, by, cx, cy); 
line(cx, cy, ax, ay); 
px = floor((float)ax*(cos(th)) - (float)ay*(sin(th))); 
py = floor((float)ax*(sin(th)) + (float)ay*(cos(th))); 
qx = floor((float)bx*(cos(th)) - (float)by*(sin(th))); 
qy = floor((float)bx*(sin(th)) + (float)by*(cos(th))); 
rx = floor((float)cx*(cos(th)) - (float)cy*(sin(th)));
ry = floor((float)cx*(sin(th)) + (float)cy*(cos(th))); 
line(px, py, qx, qy); 
line(qx, qy, rx, ry); 
line(rx, ry, px, py); 
getch(); 
}

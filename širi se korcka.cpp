#include<graphics.h>
#include<conio.h>
#include <math.h>

int main(void)
{
	int gd=DETECT, gm;
	int h=0,a=1,i=0,b=0,c=2,n=0,k=0;
	initgraph(&gd, &gm, "c:\\TC\\BGI");;
	cleardevice();
	getch();
	
	for(int i=0;;i++){
	h+=5;
	b+=2;
	n=h/50;
	for(int j=0; j<n ;j++){
	k=h - j*50;
	k=k<0?0:k;
	int colour=j%15;
	rectangle(280-k,180-k,360+k,260+k);
	setfillstyle(SOLID_FILL,colour);
	floodfill(250,250,WHITE);
}
delay(50);
cleardevice();
}

	getch();
	closegraph();
	return 0;
}

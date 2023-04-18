#include <graphics.h>
#include <conio.h>

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	int x=20, y=20;
	char a;
	
	rectangle(150+x, 300+y, 220+x, 280+y);	
	rectangle(130+x, 130+y, 250+x, 350+y);
	circle (180, 210, 20);
	circle (180, 210, 10);
	circle (250, 210, 20);
	circle (250, 210, 10);
	line(100+x, 190+y, 130+x, 300+y);
	line(300+x, 190+y, 250+x, 300+y);
	
	getch();
	closegraph;
	return 0;
	
}

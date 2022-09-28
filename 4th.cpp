#include<graphics.h>
#include<conio.h>
#include<iostream>

using namespace std;

int round(float n) {
    if (n - (int)n < 0.5)
        return (int)n;
    return (int)(n + 1);
}

int main()
{
	int gd = DETECT ,gm;  
	float x1, y1, x2, y2, dx, dy, steps, xinc, yinc;
	initgraph(&gd, &gm, " ");  
	
	cout<<"enter the values of x1 and y1\n";
	cin>>x1>>y1;
	cout<<"enter the values of x2 and y2\n";
	cin>>x2>>y2;
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(abs(dx)>=abs(dy))
           {
		steps = abs(dx);
	}
	else
           {
		steps = abs(dy);
	}
	xinc = (float)dx/steps;
	yinc = (float)dy/steps;
	
	for(int i =0; i<steps; i++)
	{
		putpixel(x1, y1, WHITE);
		x1 = x1 + xinc;
		y1 = y1 + yinc;
		
	}
	getch();
	closegraph();
}



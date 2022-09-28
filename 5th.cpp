#include<iostream>
#include<math.h>
#include<graphics.h>
#include <conio.h>

using namespace std;

int main()
{
     int gmode,gdrive=DETECT;
     
     initgraph(&gdrive,&gmode,"");   
     float x1,x2,y1,y2;

     
     cout<<"Enter endpoints of the line";
     cin>>x1>>y1>>x2>>y2;

     float dx,dy,xend,x,y;
 
     if(x1>x2)
     {
         x=x2;
         y=y2;
         xend=x1;
         dx=x1-x2;
         dy=y1-y2;
     }
     else
      {
        x=x1;
         y=y1;
         xend=x2;
         dx=x2-x1;
         dy=y2-y1;
       }

     float p=2*dy-dx;
     putpixel(ceil(x),ceil(y),RED);

    while(x<xend)
     {
         x++;
         if(p<0)
         {
              p=p+2*dy;
         }
         else
         {
             y++;
             p=p+2*(dy-dx);
         }
         putpixel(ceil(x),ceil(y),RED);
     }
     getch();
return 0;
}


#include <graphics.h>
 #include <dos.h>
 # include <math.h>
 # include <stdlib.h>
 #include<iostream>
 # define MAX 100000
 using namespace std;
 int main ()
 {
 int graphicdriver = DETECT , graphicmode ;
 char driver [1000] = "c:\\ turboc3 \\ bgi ";
 initgraph (& graphicdriver ,& graphicmode , driver ) ;
 int Px , Py , Lx1 , Ly1 , Lx2 , Ly2 ;
 cout<<"\n Enter the coordinates of the point to check where it lies: ";
 cin>>Px>>Py;
 cout<<"\n Enter the coordinates of the line: ";
 cin>>Lx1>>Ly1;
 cin>>Lx2>>Ly2;
 float slope ;
 if( Lx2 - Lx1 == 0){
 slope = MAX ;
 }
 else{
 slope = float ( Ly2 - Ly1 ) /( Lx2 - Lx1 ) ;
}
int intercept = ( Ly1 - round ( slope * Lx1 ) ) ;
 cout<<"\n Equation of line connecting the points: "<<Lx1<<", "<<Ly1<<" and "<<Lx2<<", "<<Ly2;
 if ( slope == MAX ){
 printf ("\n\t x = %d\n", Lx1 ) ;
 }else{
 printf ("\n\t y = %.2 f x %c %d\n", slope , ( intercept <0? ' ' :'+') , intercept ) ;
 }
 if( round ( slope * Px ) + intercept == Py )
 printf ("\n The point (%d ,%d) lies on the line: ",Px , Py ) ;
 else
 {
 printf ("\n The point (%d ,%d) lies in: ",Px , Py ) ;
 int linex = Px ;
 int liney = round ( slope * Px ) + intercept ;
 if (( liney > Py ) &&( slope != MAX ) )
 printf (" Upper ") ;
else if( slope != MAX )
 printf (" Lower ") ;
 liney = Py ;
 linex = round (( liney - intercept ) / slope ) ;
 if (( linex > Px ) &&( slope != 0 ) )
 printf (" Left of the line ") ;
 else if( slope != 0 )
 printf (" Right of the line ") ;
 }
 putpixel ( Px  , Py  , YELLOW ) ;
 setcolor (14) ;
 line ( Lx1  , Ly1  , Lx2  , Ly2 ) ;
 getch () ;
 closegraph () ;
 }



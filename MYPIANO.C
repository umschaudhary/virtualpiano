#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

#include"piano.h"
//#include"border.h"
void border()
{
int i;
  for(i=0;i<630;i++)                 //use of for loop
{
setcolor(9);                       // setting color foreground
circle(i,478,2);                   //drawing circle
circle(630,i,2);
setcolor(14);
circle(2,i,2);
circle(i,2,2);
}
}
 void cover()
 {
border();
 setcolor(GREEN);
	settextstyle(4,0,3);       //setting text style,direction and width
		//stopping sound function
outtextxy(30,100,"PROJECT ON COMPUTER PROGRAMMING");
delay(600);

setlinestyle(DASHED_LINE,0,2);    //line style,direction and width
	line(25,130,530,130);     //drawing line
	delay(600);

setcolor(7);
settextstyle(3,0,3);
outtextxy(90,150,"Project Title: The Virtual Piano");
delay(600);

setcolor(14);
settextstyle(3,0,2);
outtextxy(30,210,"Submitted By:");    //outtext fn to display txt in graphics
delay(600);
line(30,235,160,235);
delay(600);
outtextxy(455,230,"Submitted To:");
delay(600);
outtextxy(50,400,"Under Supervision Of:");
setlinestyle(DOTTED_LINE,0,3);
line(50,425,270,425);
setlinestyle(DASHED_LINE,0,2);
line(450,255,595,255);
delay(600);

settextstyle(1,0,1);
setcolor(12);
outtextxy(440,265,"Birat Kshitiz College");
delay(600);

outtextxy(480,285,"IT DEPARTMENT");
delay(600);
outtextxy(485,305,"BIRATNAGAR-03");
delay(600);
outtextxy(545,325,"MORANG");
delay(600);
outtextxy(565,345,"NEPAL");
delay(600);

setcolor(CYAN);
outtextxy(20,240,"UMESH CHAUDHARY");
delay(600);
outtextxy(20,260,"ROLL.NO : 20151995024");
delay(600);
outtextxy(20,290,"COURSE : B.SC.CSIT");
delay(600);
outtextxy(20,310,"FIRST SEMESTER");
delay(600);
setcolor(RED);
outtextxy(300,405,"SURBHI GARG");
delay(600);
setlinestyle(DOTTED_LINE,0,3);
line(15,440,600,440);
delay(2000);
 getch();

 }

 void page()
{

int a=0,b,i,x=50,ch;
initgraph(&a,&b,"C:\\tc\\bgi");
setbkcolor(DARKGRAY);
for(i=0;i<10;i++)               //for loop
{


rectangle(100-x,200,130-x,400);  //rectangle with respect to x=50
setcolor(7);
rectangle(140-x,200,170-x,400);
setcolor(7);
rectangle(180-x,200,210-x,400);
setcolor(7);
rectangle(220-x,200,250-x,400);
setcolor(7);

rectangle(300-x,200,330-x,400);
setcolor(7);
rectangle(340-x,200,370-x,400);
setcolor(7);


rectangle(420-x,200,450-x,400);
setcolor(7);
rectangle(460-x,200,490-x,400);    //piano body interface
setcolor(7);
rectangle(500-x,200,530-x,400);
setcolor(7);
rectangle(540-x,200,570-x,400);
setcolor(7);
rectangle(20,190,540,410);
settextstyle(4,0,40);
outtextxy(30,30," PIANO");
settextstyle(1,0,1);
outtextxy(10,10,"PRESENTING THE VIRTUAL :");
outtextxy(40,450,"PRESS ANY KEY TO GO TO PLAYING SECTION");
x++;
}
ch=getche();
if(ch==27)
{
exit();
}


}
 void main()
 {
	      int gd=0,gm;
	      initgraph(&gd,&gm,"c:\\tc\\bgi");

	      cover();
	      page();
	      playpiano();
	      cleardevice();




	      getch();
	      closegraph();


 }
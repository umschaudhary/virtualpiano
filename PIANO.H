#ifndef piano_h
#define piano_h
#endif


#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void playnote(a,x)
{

	if(a=='c')
		{
		sound(261);
		delay(x);
		nosound();
		}
	if(a=='d')
		{
		sound(293);
		delay(x);
		nosound();
		}
	if(a=='e')
		{
		sound(329);
		delay(x);
		nosound();
		}
	if(a=='f')
		{
		sound(349);
		delay(x);
		nosound();
		}
	if(a=='g')
		{
		sound(392);
		delay(x);
		nosound();
		}
	if(a=='a')
		{
		sound(440);
		delay(x);
		nosound();
		}
	if(a=='b')
		{
		sound(493);
		delay(x);
		nosound();
		}
	if(a=='C')
		{
		sound(523);
		delay(x);
		nosound();
		}
			if(a==27)
		{
		if(a=='C')
		{
		sound(523);
		delay(x);
		nosound();
		}


}

}
void displaypiano()
{
		int i,j,x1=95,y1=200,k,ch;
	cleardevice();


  for(i=0;i<630;i++)                 //use of for loop
{
setcolor(9);                       // setting color foreground
circle(i,478,2);                   //drawing circle
circle(630,i,2);
setcolor(14);
circle(2,i,2);
circle(i,2,2);
}


      //	displaybox();
	setcolor(7);
								//rectangle(100,200,500,400);
	for(i=1;i<=350;i++)
	{
	setcolor(7);
	line(x1-5,200,x1-5,400);
	x1++;
	}
	x1=100;
	for(i=1;i<=7;i++)
{
	for(j=1;j<=30;j++)
	{
	setcolor(15);
	line(x1,y1+5,x1,y1+195);
	x1++;
	}
	if(i!=8&&i!=3&&i!=7)
	{
	for(j=1;j<=20;j++)
	{
	setcolor(0);
	line(x1,y1+5,x1,y1+100);
	x1++;
	}
	}
}
setcolor(7)    ;
line(230,200,230,400);
line(231,200,231,400);
line(410,200,410,400);
}

void pianokey()
{
	outtextxy(100,100,"For white key: asdfghjk");
	outtextxy(100,110,"For black key: wetyu");
	outtextxy(100,440,"ESC to Exit");
}

void playpiano()
{
	int gdriver=0,gmode,x=180,aint;
	char a;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	displaypiano();
	pianokey();
	while(aint!=27)
	{
	a=getch();
	aint=a;
	if(a=='a')

		playnote('c',x);

	if(a=='s')

		playnote('d',x);

	if(a=='d')

		playnote('e',x);

	if(a=='f')
		playnote('f',x);

	if(a=='g')
		{
		sound(392);
		delay(x);
		nosound();
		}
	if(a=='h')
		{
		sound(440);
		delay(x);
		nosound();
		}
	if(a=='j')
		{
		sound(493);
		delay(x);
		nosound();
		}
	if(a=='k')
		{
		sound(523);
		delay(x);
		nosound();
		}
	if(a=='w')
		{
		sound(277);
		delay(200) ;
		nosound();
		}
	if(a=='e')
		{
		sound(311);
		delay(x)   ;
		nosound();
		}
	if(a=='t')
		{
		sound(369);
		delay(x)  ;
		nosound();
		}
	if(a=='y')
		{
		sound(415);
		delay(x);
		nosound();
		}
	if(a=='u')
		{
		sound(466);
		delay(x) ;
		nosound();
		}
	}

	exit();
}

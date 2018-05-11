#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

int main()
{
	int gd=DETECT,gm;

	int i,j,k,t,q,a;
	int cir[3][1]={{62},{50},{1}};
	int c[3][3],tra[3][3],tx=1,ty=1;
		int cr[3][1]={{460},{120},{1}};

	printf("Enter 1 or 2");
	scanf("%d",&a);

	switch(a)
	{

	case 1:
	{


	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setfillstyle(LINE_FILL,BLACK);
	floodfill(200,40,BROWN);

	setcolor(GREEN);
	line(100,240,0,100);
	line(100,240,213,100);
	line(213,100,313,240);
	line(313,240,416,100);
	line(416,100,533,240);
	line(533,240,640,100);
	line(650,250,0,250);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(200,200,GREEN);

	setfillstyle(SOLID_FILL,BLUE);
	floodfill(350,330,GREEN);


	setcolor(RED);
	setbkcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(62,50,20);
	floodfill(50,50,RED);
	delay(500);


	tra[0][0]=1;
	tra[0][1]=0;
	tra[0][2]=tx;

	tra[1][0]=0;
	tra[1][1]=1;
	tra[1][2]=ty;

	tra[2][0]=0;
	tra[2][1]=0;
	tra[2][2]=1;


	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j] + (tra[i][k]* cir[k][j]);
			}
		}
	}


	delay(500);

		setcolor(CYAN);
		setbkcolor(CYAN);
		setfillstyle(SOLID_FILL,CYAN);
		circle(62,50,20);

		floodfill(50,50,CYAN);

	for(i=0;i<92;i=i+1)
	{
		setcolor(RED);
		setbkcolor(CYAN);
		setfillstyle(SOLID_FILL,YELLOW);
		circle(c[0][0]+i,c[1][0]+i,20);
		floodfill(c[0][0]+i,c[1][0]+i,RED);

		delay(500);

		setcolor(CYAN);
		setbkcolor(CYAN);
		setfillstyle(SOLID_FILL,CYAN);
		circle(c[0][0]+i,c[1][0]+i,20);
		floodfill(c[0][0]+i,c[1][0]+i,CYAN);
	}

	delay(500);
	break;

	}

	case 2:
	{


	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


	setfillstyle(LINE_FILL,BLACK);
	floodfill(200,40,BROWN);

	setcolor(GREEN);
	line(100,240,0,100);
	line(100,240,213,100);
	line(213,100,313,240);
	line(313,240,416,100);
	line(416,100,533,240);
	line(533,240,640,100);
	line(650,250,0,250);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(200,200,GREEN);

	setfillstyle(SOLID_FILL,BLUE);
	floodfill(350,330,GREEN);
	tx=-1;
	ty=1;

	tra[0][0]=1;
	tra[0][1]=0;
	tra[0][2]=-tx;

	tra[1][0]=0;
	tra[1][1]=1;
	tra[1][2]=-ty;

	tra[2][0]=0;
	tra[2][1]=0;
	tra[2][2]=1;




		setbkcolor(LIGHTGRAY);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL,WHITE);
		circle(460,120,20);
		floodfill(460,120,BLUE);



	delay(500);




	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j] + (tra[i][k]* cr[k][j]);
			}
		}
	}

	  setbkcolor(DARKGRAY);

	  setcolor(DARKGRAY);
	  setfillstyle(SOLID_FILL,DARKGRAY);
	  circle(460,120,20);
	 floodfill(460,120,DARKGRAY);



	for(i=0;i<80;i=i+1)
	{

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,WHITE);
	setbkcolor(DARKGRAY);
	circle(c[0][0]+i,c[1][0]-i,20);
	floodfill(c[0][0]+i,c[1][0]-i,BLUE);
	delay(500);

	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	setbkcolor(DARKGRAY);
	circle(c[0][0]+i,c[1][0]-i,20);
	floodfill(c[0][0]+i,c[1][0]-i,DARKGRAY);
	}


	break;
	}
}



	getch();
	closegraph();
	return 0;
}
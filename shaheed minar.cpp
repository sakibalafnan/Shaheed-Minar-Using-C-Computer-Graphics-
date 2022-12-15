#include<graphics.h>

int main()
{

    initwindow(2000,2000);
    int i;
    int page = 1;


    for(i=0;i<2000;i++)
	{

    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(548,360,125);
    floodfill(549,361,RED);

   /* BASE */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(110,650,1000,670);
    floodfill(111,651,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(110,670,1000,690);
    floodfill(111,671,WHITE);


    /*FIRST */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(200,310,320,650);
     floodfill(201,311,WHITE);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    rectangle(220,340,300,650);

    floodfill(221,341,BLACK);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(548,360,125);
    floodfill(549,361,RED);

     /*SECOND */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(340,250,460,650);
    floodfill(341,251,WHITE);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    rectangle(360,280,440,650);
    floodfill(361,281,BLACK);

    /* THIRD */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(470,120,630,650);
    floodfill(471,121,WHITE);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    rectangle(490,150,610,650);
    floodfill(491,151,BLACK);

    /*FORTH*/

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(650,250,780,650);
    floodfill(651,251,WHITE);
     setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    rectangle(670,280,760,650);
    floodfill(671,281,BLACK);
    /*Fifth*/

   setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(800,310,930,650);
    floodfill(801,321,WHITE);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    rectangle(820,340,910,650);
    floodfill(821,341,BLACK);

     setcolor(WHITE);

     line(470,120,540,20);
     line(480,120,550,20);
     line(490,120,560,20);
     line(500,120,570,20);
     line(510,120,580,20);
     line(520,120,590,20);
     line(530,120,600,20);
     line(540,120,610,20);
     line(550,120,620,20);
     line(560,120,630,20);
     line(570,120,640,20);
     line(580,120,650,20);
     line(590,120,660,20);
     line(600,120,670,20);
     line(610,120,680,20);
     line(620,120,690,20);
     line(630,120,700,20);
     line(540,20,700,20);

     /*First */
     line(230,340,230,650);
     line(240,340,240,650);
     line(250,340,250,650);
     line(260,340,260,650);
     line(270,340,270,650);
     line(280,340,280,650);
     line(290,340,290,650);

     /*Second*/

     line(370,280,370,650);
     line(380,280,380,650);
     line(390,280,390,650);
     line(400,280,400,650);
     line(410,280,410,650);
     line(420,280,420,650);
     line(430,280,430,650);

     /*third*/
     line(500,120,500,650);
     line(510,120,510,650);
     line(520,120,520,650);
     line(530,120,530,650);
     line(540,120,540,650);
     line(550,120,550,650);
     line(560,120,560,650);
     line(570,120,570,650);
     line(580,120,580,650);
     line(590,120,590,650);
     line(600,120,600,650);
     line(610,120,610,650);

     /* Forth */

     line(680,280,680,650);
     line(690,280,690,650);
     line(700,280,700,650);
     line(710,280,710,650);
     line(720,280,720,650);
     line(730,280,730,650);
     line(740,280,740,650);
     line(750,280,750,650);
     line(760,280,760,650);
     line(770,280,770,650);

    /* Fifth */
line(830,340,830,650);
line(840,340,840,650);
line(850,340,850,650);
line(860,340,860,650);
line(870,340,870,650);
line(880,340,880,650);
line(890,340,890,650);
line(900,340,900,650);
line(910,340,910,650);
line(920,340,920,650);

    /*CLOUD 1*/
	circle(300+i,70,25);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(301+i,71,WHITE);
    circle(335+i,60,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(336+i,61,WHITE);
    circle(335+i,80,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(336+i,81,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(335+i,90,WHITE);
    circle(360+i,70,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(361+i,71,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(380+i,71,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(360+i,80,WHITE);
    /*CLOUD 2*/
	circle(100+i,70,25);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(101+i,71,WHITE);
    circle(135+i,60,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(136+i,61,WHITE);
    circle(135+i,80,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(136+i,81,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(135+i,90,WHITE);
    circle(160+i,70,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(161+i,71,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(180+i,71,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(160+i,80,WHITE);
    /*CLOUD 3*/
	circle(500+i,70,25);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(501+i,71,WHITE);
    circle(535+i,60,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(536+i,61,WHITE);
    circle(535+i,80,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(536+i,81,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(535+i,90,WHITE);
    circle(560+i,70,30);
	setfillstyle(SOLID_FILL,WHITE);
    floodfill(561+i,71,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(580+i,71,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(560+i,80,WHITE);



    line(300-i,90,320-i,110);
    line(320-i,110,340-i,85);
    line(350-i,140,370-i,160);
    line(370-i,160,390-i,135);
    line(400-i,190,420-i,220);
    line(420-i,220,440-i,185);


page=1-page;

      setcolor(YELLOW);
	circle(980,100-i*0.45,40);
	setfillstyle(1,14);
	floodfill(981,101-i*0.45,YELLOW);

  setcolor(WHITE);
  line(1080,470,1340,470);
  line(1080,510,1340,510);
  line(1080,550,1340,550);
  line(1080,590,1340,590);

  line(1150,420,1150,660);
  line(1200,420,1200,660);
  line(1250,420,1250,660);
  line(1300,420,1300,660);

   setcolor(DARKGRAY);
   setfillstyle(SOLID_FILL,DARKGRAY);
  rectangle(1140,460,1150,640);
  floodfill(1141,461,DARKGRAY);
  setcolor(LIGHTGREEN);
   setfillstyle(SOLID_FILL,LIGHTGREEN);
   circle(1145,420,40);
   floodfill(1146,421,LIGHTGREEN);

   setcolor(DARKGRAY);
   setfillstyle(SOLID_FILL,DARKGRAY);
  rectangle(1240,460,1250,640);
  floodfill(1241,461,DARKGRAY);
  setcolor(LIGHTGREEN);
   setfillstyle(SOLID_FILL,LIGHTGREEN);
   circle(1243,420,40);
   floodfill(1243,421,LIGHTGREEN);

  setcolor(LIGHTRED);
  settextstyle(10,0,5);
  outtextxy(516,691,"SHAHED MINAR");









	}


    getch();
    closegraph();
}

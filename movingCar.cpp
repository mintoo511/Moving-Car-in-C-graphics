#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
void pixel(int a,int b,int x,int y,int c);
void mycircle(int x,int y,int r,int c);
struct point
{
  int x, y;
};
struct line{
    struct point p[2];
};
void print (struct line l)
{
   int midx = getmaxx() / 2;
   int midy = getmaxy() / 2;
   line(l.p[0].x+midx,midy-l.p[0].y,l.p[1].x+midx,midy-l.p[1].y);
}
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy,x=0,y=0,r=0,i=0,j=0,radius=50,c=0,s=1;
   struct line l[15],base;
   struct line a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,g1,g2,h1,h2,i1,i2,j1,j2;
   point center;
   char ch='z';
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   center.x=0;
   center.y=-midy/2;
   //setcolor(RED);
   base.p[0].x=-midx,base.p[0].y=-midy/2-14,base.p[1].x=midx,base.p[1].y=-midy/2-14;
    while(1)
   {
       ch=getch();
       j++;
       if(ch=='d'||ch==77)
      {
        center.x+=10;
        if(center.x>getmaxx())
            center.x=-getmaxx() / 2;
      }
     else if(ch=='a'||ch==75)
     {
         center.x-=10;
         if(center.x<-getmaxx() / 2)
            center.x=getmaxx() ;
     }
     else if(ch=='w'||ch==72)
     {
         center.y+=12;
     }
     else if(ch=='s'||ch==80)
     {
         if(center.y>=-midy/2)
         center.y=-midy/2;
     }
     else if(ch=='x')
        break;
    i++%7;
   setcolor(i);
  bar(0,0,getmaxx(),getmaxy());
   a1.p[0].x=center.x-160,a1.p[0].y=center.y,a1.p[1].x=center.x-160,a1.p[1].y=center.y+15;
   a2.p[0].x=center.x+160,a2.p[0].y=center.y,a2.p[1].x=center.x+160,a2.p[1].y=center.y+15;
   b1.p[0].x=center.x-160,b1.p[0].y=center.y,b1.p[1].x=center.x-110,b1.p[1].y=center.y;
   b2.p[0].x=center.x+160,b2.p[0].y=center.y,b2.p[1].x=center.x+110,b2.p[1].y=center.y;
   c1.p[0].x=center.x-160,c1.p[0].y=center.y+15,c1.p[1].x=center.x-120,c1.p[1].y=center.y+15;
   c2.p[0].x=center.x+160,c2.p[0].y=center.y+15,c2.p[1].x=center.x+120,c2.p[1].y=center.y+15;
   d1.p[0].x=center.x-120,d1.p[0].y=center.y+15,d1.p[1].x=center.x-60,d1.p[1].y=center.y+60;
   d2.p[0].x=center.x+120,d2.p[0].y=center.y+15,d2.p[1].x=center.x+60,d2.p[1].y=center.y+60;
   e2.p[0].x=center.x-60,e2.p[0].y=center.y+60,e2.p[1].x=center.x+60,e2.p[1].y=center.y+60;
   e1.p[0].x=center.x-70,e1.p[0].y=center.y,      e1.p[1].x=center.x+70,  e1.p[1].y=center.y;
   f1.p[0].x=center.x,   f1.p[0].y=center.y,       f1.p[1].x=center.x,    f1.p[1].y=center.y+60;
   g1.p[0].x=center.x-90,g1.p[0].y=center.y+30,g1.p[1].x=center.x-54,g1.p[1].y=center.y+57;
   g2.p[0].x=center.x+90,g2.p[0].y=center.y+30,g2.p[1].x=center.x+54,g2.p[1].y=center.y+57;
   j1.p[0].x=center.x-90,j1.p[0].y=center.y+30,j1.p[1].x=center.x-5,j1.p[1].y=center.y+30;
   j2.p[0].x=center.x+90,j2.p[0].y=center.y+30,j2.p[1].x=center.x+5,j2.p[1].y=center.y+30;
   i1.p[0].x=center.x-5,i1.p[0].y=center.y+30,i1.p[1].x=center.x-5,i1.p[1].y=center.y+57;
   i2.p[0].x=center.x+5,i2.p[0].y=center.y+30,i2.p[1].x=center.x+5,i2.p[1].y=center.y+57;
   h1.p[0].x=center.x-5,h1.p[0].y=center.y+57,h1.p[1].x=center.x-54,h1.p[1].y=center.y+57;
   h2.p[0].x=center.x+5,h2.p[0].y=center.y+57,h2.p[1].x=center.x+54,h2.p[1].y=center.y+57;
   circle(center.x-90+midx,midy-center.y,14);
   circle(center.x+90+midx,midy-center.y,14);
   mycircle(center.x-90+midx,midy-center.y,20,i);
   mycircle(center.x+90+midx,midy-center.y,20,i);
    print(base);
    print(a1);
    print(a2);
    print(b1);
    print(b2);
    print(c1);
    print(c2);
    print(d1);
    print(d2);
    print(e1);
    print(e2);
    print(f1);
    print(g1);
    print(j1);
    print(i1);
    print(h1);
    print(g2);
    print(j2);
    print(i2);
    print(h2);
    if(ch=='a'||ch==75)
    {
    line(center.x+160,midy-center.y-7,center.x+120,midy-center.y-17);
    line(center.x+160,midy-center.y-7,center.x+120,midy-center.y+3);
    }
    if(ch=='d'||ch==77)
    {
    line(center.x+480,midy-center.y-7,center.x+520,midy-center.y-17);
    line(center.x+480,midy-center.y-7,center.x+520,midy-center.y+3);
    }
    if(j%4!=0)
    {
    line(center.x-90+midx+7,midy-center.y+7,center.x-90+midx-7,midy-center.y-7);
    line(center.x-90+midx+7,midy-center.y-7,center.x-90+midx-7,midy-center.y+7);
    line(center.x+90+midx+7,midy-center.y+7,center.x+90+midx-7,midy-center.y-7);
    line(center.x+90+midx+7,midy-center.y-7,center.x+90+midx-7,midy-center.y+7);
    }
    else
    {
    line(center.x-90+midx+9,midy-center.y,center.x-90+midx-9,midy-center.y);
    line(center.x-90+midx,midy-center.y-9,center.x-90+midx,midy-center.y+9);
    line(center.x+90+midx+9,midy-center.y,center.x+90+midx-9,midy-center.y);
    line(center.x+90+midx,midy-center.y-9,center.x+90+midx,midy-center.y+9);
    }
   }
   getch();
   closegraph();
   return 0;
}
void mycircle(int a,int b,int r,int c)
{
    int p=1-r,x=0,y=r;
    pixel(a,b,x,y,c);
    while(x<y)
    {
      if(p<0)
      {
      x++;
      p=p+(2*x)+1;
      }
      else
      {
      x++;
      y--;
      p=p+(2*x)-(2*y)+1;
      }
      pixel(a,b,x,y,c);
  }
}
void pixel(int a,int b,int x,int y,int c)
{
  putpixel(a+x,b-y,c);
  putpixel(a+y,b-x,c);
  putpixel(a-x,b-y,c);
  putpixel(a-y,b-x,c);
}

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
void level1(int &row3,int &col3)
{
    gotoxy(row3,col3);
    printf("%c",2);
}
void level2()
{
    int j;
    for(j=4;j<=8;j++)
    {
	 gotoxy(20,j);
	 printf("%c",2);
	 gotoxy(40,j);
	 printf("%c",2);
    }
    for(j=16;j<=20;j++)
    {
	 gotoxy(20,j);
	 printf("%c",2);
	 gotoxy(40,j);
	 printf("%c",2);
    }
}
void level3()
{
    int i;
    for(i=11;i<=20;i++)
    {
	 gotoxy(i,5);
	 printf("%c",2);
	 gotoxy(i,19);
	 printf("%c",2);
    }
    for(i=40;i<=50;i++)
    {
	 gotoxy(i,5);
	 printf("%c",2);
	 gotoxy(i,19);
	 printf("%c",2);
    }
    for(i=6;i<=18;i++)
    {
	 gotoxy(30,i);
	 printf("%c",2);
    }
}
void level4()
{
    int i;
    for(i=11;i<=20;i++)
    {
	 gotoxy(i,5);
	 printf("%c",2);
	 gotoxy(i,11);
	 printf("%c",2);
	 gotoxy(i,18);
	 printf("%c",2);
    }
    for(i=40;i<=50;i++)
    {
	 gotoxy(i,5);
	 printf("%c",2);
	 gotoxy(i,11);
	 printf("%c",2);
	 gotoxy(i,18);
	 printf("%c",2);
    }
    for(i=6;i<=18;i++)
    {
	 gotoxy(30,i);
	 printf("%c",2);
    }
}
void frontpage()
{
    clrscr();
    textbackground(4);
    textcolor(2);
    int i,j;
    for(j=1;j<=25;j++)
    {
	 for(i=0;i<=79;i++)
	 {
	      gotoxy(i,j);
	      cprintf("%c",177);
	 }
	 delay(50);
    }
    for(j=2;j<=8;j++)
    {
	 gotoxy(10,j);
	 printf(" ");
	 gotoxy(16,j);
	 printf(" ");
	 if(j>4)
	 {
	      gotoxy(13,j);
	      printf(" ");
	 }
	 delay(50);
    }
    for(i=10;i<=16;i++)
    {
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=7;j++)
    {
	 gotoxy(19,j);
	 printf(" ");
	 delay(50);
    }
    for(i=19;i<=25;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=8;j++)
    {
	 gotoxy(28,j);
	 printf(" ");
	 delay(50);
    }
    for(i=28;i<=34;i++)
    {
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=8;j++)
    {
	 gotoxy(37,j);
	 printf(" ");
	 delay(50);
    }
    for(i=37;i<=43;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=8;j++)
    {
	 gotoxy(46,j);
	 printf(" ");
	 gotoxy(52,j);
	 printf(" ");
	 delay(50);
    }
    for(i=46;i<=52;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=8;j++)
    {
	 gotoxy(55,j);
	 printf(" ");
	 gotoxy(61,j);
	 printf(" ");
	 if(j<6)
	 {
	      gotoxy(58,j);
	      printf(" ");
	 }
	 delay(50);

    }
    for(i=55;i<=61;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=7;j++)
    {
	 gotoxy(63,j);
	 printf(" ");
	 delay(50);
    }
    for(i=63;i<=69;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(i=33;i<=39;i++)
    {
	 gotoxy(i,10);
	 printf(" ");
	 delay(50);
    }
    for(j=10;j<=16;j++)
    {
	 gotoxy(36,j);
	 printf(" ");
	 delay(50);
    }
    for(j=10;j<=16;j++)
    {
	 gotoxy(41,j);
	 printf(" ");
	 gotoxy(47,j);
	 printf(" ");
	 delay(50);
    }
    for(i=41;i<=47;i++)
    {
	 gotoxy(i,10);
	 printf(" ");
	 gotoxy(i,16);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=24;j++)
    {
	 gotoxy(12,j);
	 printf(" ");
	 gotoxy(18,j);
	 printf(" ");
	 delay(50);
    }
    for(i=12;i<=18;i++)
    {
	 gotoxy(i,18);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=24;j++)
    {
	 gotoxy(23,j);
	 printf(" ");
	 gotoxy(28,j);
	 printf(" ");
	 delay(50);
    }
    for(i=21;i<=27;i++)
    {
	 gotoxy(i,18);
	 printf(" ");
	 gotoxy(i,24);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=24;j++)
    {
	 gotoxy(31,j);
	 printf(" ");
	 gotoxy(36,j);
	 printf(" ");
	 delay(50);
    }
    for(i=30;i<=36;i++)
    {
	 gotoxy(i,18);
	 printf(" ");
	 gotoxy(i,24);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=24;j++)
    {
	 gotoxy(44,j);
	 printf(" ");
	 gotoxy(50,j);
	 printf(" ");
	 delay(50);
    }
    gotoxy(45,19);
    printf(" ");
    gotoxy(46,20);
    printf(" ");
    gotoxy(47,21);
    printf(" ");
    gotoxy(48,22);
    printf(" ");
    gotoxy(49,23);
    printf(" ");
    for(j=18;j<=24;j++)
    {
	 gotoxy(53,j);
	 printf(" ");
	 gotoxy(59,j);
	 printf(" ");
	 delay(50);
    }
    for(i=53;i<=59;i++)
    {
	 gotoxy(i,24);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=24;j++)
    {
	 gotoxy(62,j);
	 printf(" ");
	 gotoxy(68,j);
	 printf(" ");
	 if(j<22)
	 {
	      gotoxy(65,j);
	      printf(" ");
	 }
	 delay(50);

    }
    for(i=62;i<=68;i++)
    {
	 gotoxy(i,18);
	 printf(" ");
	 delay(50);
    }
    textbackground(0);
    for(j=1;j<=25;j++)
    {
	 delay(50);
	 gotoxy(1,j);
	 cprintf("                                                                                   ");
    }
}
void congratulations()
{
    clrscr();
    textbackground(4);
    textcolor(2);
    int i,j;
    for(j=1;j<=25;j++)
    {
	 for(i=0;i<=79;i++)
	 {
	      gotoxy(i,j);
	      cprintf("%c",177);
	 }
	 delay(50);
    }
    for(j=2;j<=7;j++)
    {
	 gotoxy(9,j);
	 printf(" ");
	 delay(50);
    }
    for(i=9;i<=14;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,7);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=7;j++)
    {
	 gotoxy(17,j);
	 printf(" ");
	 gotoxy(22,j);
	 printf(" ");
	 delay(50);
    }
    for(i=17;i<=22;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,7);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=7;j++)
    {
	 gotoxy(25,j);
	 printf(" ");
	 gotoxy(30,j);
	 printf(" ");
	 delay(50);
    }
    gotoxy(26,3);
    printf(" ");
    gotoxy(27,4);
    printf(" ");
    gotoxy(28,5);
    printf(" ");
    gotoxy(29,6);
    printf(" ");
    for(j=2;j<=7;j++)
    {
	 gotoxy(33,j);
	 printf(" ");
	 delay(50);
    }
    for(i=33;i<=39;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 if(i<=37)
	 {
	      gotoxy(i,7);
	      printf(" ");
	 }
	 delay(50);
    }
    for(j=7;j>=5;j--)
    {
	 gotoxy(37,j);
	 printf(" ");
	 delay(50);
    }
    for(i=36;i<=39;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 delay(50);
    }
    for(j=5;j<=7;j++)
    {
	 gotoxy(39,j);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=7;j++)
    {
	 gotoxy(42,j);
	 printf(" ");
	 delay(50);
    }
    for(i=42;i<=47;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,4);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=4;j++)
    {
	 gotoxy(47,j);
	 printf(" ");
	 delay(50);
    }
    gotoxy(45,5);
    printf(" ");
    gotoxy(46,6);
    printf(" ");
    gotoxy(47,7);
    printf(" ");
    for(j=2;j<=7;j++)
    {
	 gotoxy(50,j);
	 printf(" ");
	 gotoxy(55,j);
	 printf(" ");
	 delay(50);
    }
    for(i=50;i<=55;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 gotoxy(i,4);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=7;j++)
    {
	 gotoxy(61,j);
	 printf(" ");
	 delay(50);
    }
    for(i=58;i<=64;i++)
    {
	 gotoxy(i,2);
	 printf(" ");
	 delay(50);
    }
    for(i=72;i>=67;i--)
    {
	 gotoxy(i,2);
	 printf(" ");
	 delay(50);
    }
    for(j=2;j<=4;j++)
    {
	 gotoxy(67,j);
	 printf(" ");
	 delay(50);
    }
    for(i=67;i<=72;i++)
    {
	 gotoxy(i,4);
	 printf(" ");
	 delay(50);
    }
    for(j=5;j<=7;j++)
    {
	 gotoxy(72,j);
	 printf(" ");
	 delay(50);
    }
    for(i=72;i>=67;i--)
    {
	 gotoxy(i,7);
	 printf(" ");
	 delay(50);
    }
    // line 2
    for(j=10;j<=15;j++)
    {
	 gotoxy(19,j);
	 printf(" ");
	 delay(50);
    }
    for(i=19;i<=24;i++)
    {
	 gotoxy(i,15);
	 printf(" ");
	 delay(50);
    }
    for(j=10;j<=15;j++)
    {
	 gotoxy(27,j);
	 printf(" ");
	 delay(50);
    }
    for(i=27;i<=32;i++)
    {
	 gotoxy(i,10);
	 printf(" ");
	 gotoxy(i,12);
	 printf(" ");
	 gotoxy(i,15);
	 printf(" ");
	 delay(50);
    }
    gotoxy(40,15);
    printf(" ");
    gotoxy(39,14);
    printf(" ");
    gotoxy(41,14);
    printf(" ");
    gotoxy(38,13);
    printf(" ");
    gotoxy(42,13);
    printf(" ");
    gotoxy(37,12);
    printf(" ");
    gotoxy(43,12);
    printf(" ");
    gotoxy(36,11);
    printf(" ");
    gotoxy(44,11);
    printf(" ");
    gotoxy(35,10);
    printf(" ");
    gotoxy(45,10);
    printf(" ");
    for(j=10;j<=15;j++)
    {
	 gotoxy(48,j);
	 printf(" ");
	 delay(50);
    }
    for(i=48;i<=53;i++)
    {
	 gotoxy(i,10);
	 printf(" ");
	 gotoxy(i,12);
	 printf(" ");
	 gotoxy(i,15);
	 printf(" ");
	 delay(50);
    }
    for(j=10;j<=15;j++)
    {
	 gotoxy(56,j);
	 printf(" ");
	 delay(50);
    }
    for(i=56;i<=61;i++)
    {
	 gotoxy(15,i);
	 printf(" ");
	 delay(50);
    }
    //line 3
    for(i=25;i<=30;i++)
    {
	 gotoxy(i,18);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=23;j++)
    {
	 gotoxy(30,j);
	 printf(" ");
	 delay(50);
    }
    for(i=30;i>=25;i--)
    {
	 gotoxy(i,23);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=23;j++)
    {
	 gotoxy(26,j);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=23;j++)
    {
	 gotoxy(33,j);
	 printf(" ");
	 gotoxy(38,j);
	 printf(" ");
	 delay(50);
    }
    for(i=33;i<=38;i++)
    {
	 gotoxy(i,18);
	 printf(" ");
	 gotoxy(i,23);
	 printf(" ");
	 delay(50);
    }
    for(j=18;j<=23;j++)
    {
	 gotoxy(42,j);
	 printf(" ");
	 gotoxy(47,j);
	 printf(" ");
	 delay(50);
    }
    gotoxy(43,19);
    printf(" ");
    gotoxy(44,20);
    printf(" ");
    gotoxy(45,21);
    printf(" ");
    gotoxy(46,22);
    printf(" ");
    for(j=18;j<=23;j++)
    {
	 gotoxy(50,j);
	 printf(" ");
	 delay(50);
    }
    for(i=50;i<=55;i++)
    {
	 gotoxy(i,18);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 gotoxy(i,23);
	 printf(" ");
	 delay(50);
    }
    textbackground(3);
    textcolor(15);
    for(j=1;j<=25;j++)
    {
	 delay(50);
	 gotoxy(1,j);
	 cprintf("                                                                                   ");
    }
}
void page()
{
    textbackground(3);
    textcolor(15);
    for(int m=1;m<=79;m++)
    {
	 gotoxy(m,1);
	 printf("%c",205);
    }
    for(int k=1;k<=79;k++)
    {
	 gotoxy(k,24);
	 printf("%c",205);
    }
    gotoxy(1,1);
    printf("%c",201);
    gotoxy(79,1);
    printf("%c",187);
     for(int n=2;n<24;n++)
    {
	 gotoxy(1,n);
	 printf("%c",186);
	 gotoxy(65,n);
	 printf("%c",179);
    }
    for(int l=2;l<24;l++)
    {
	 gotoxy(79,l);
	 printf("%c",186);
    }
    gotoxy(1,24);
    printf("%c",200);
    gotoxy(79,24);
    printf("%c",188);
    gotoxy(65,1);
    printf("%c",209);
    gotoxy(65,24);
    printf("%c",207);
    gotoxy(67,3);
    printf("Score =");
    for(int z1=66;z1<=78;z1++)
    {
	 gotoxy(z1,5);
	 printf("%c",196);
    }
    gotoxy(65,5);
    printf("%c",195);
    gotoxy(79,5);
    printf("%c",182);
    gotoxy(66,6);
    printf("1.Instrutions");
    gotoxy(66,8);
    printf("* w = UP ");
    gotoxy(66,9);
    printf("* a = Left");
    gotoxy(66,10);
    printf("* d = Right");
    gotoxy(66,11);
    printf("* s = Down");
    gotoxy(66,12);
}
void gameover(int &flag)
{
    delay(1000);
    clrscr();
    textbackground(4);
    textcolor(2);
    int i,j;
    char c;
    for(j=1;j<=25;j++)
    {
	 for(i=0;i<=79;i++)
	 {
	      gotoxy(i,j);
	      cprintf("%c",177);
	 }
	 delay(100);
    }
    //g
    for(i=24;i<=30;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 if(i<=28)
	 {
	      gotoxy(i,11);
	      printf(" ");
	 }
	 delay(50);
    }
    for(j=5;j<=11;j++)
    {
	 gotoxy(24,j);
	 printf(" ");
	 if(j>=9)
	 {
	      gotoxy(28,j);
	      printf(" ");
	 }
	 delay(50);
    }
    for(i=27;i<=30;i++)
    {
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(j=8;j<=11;j++)
    {
	 gotoxy(30,j);
	 printf(" ");
	 delay(50);
    }
    //a
    for(j=5;j<=11;j++)
    {
	 gotoxy(39,j);
	 printf(" ");
	 gotoxy(33,j);
	 printf(" ");
	 delay(50);
    }
    for(i=33;i<=39;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,7);
	 printf(" ");
	 delay(50);
    }
    //m
    for(j=5;j<=11;j++)
    {
	 gotoxy(42,j);
	 printf(" ");
	 gotoxy(48,j);
	 printf(" ");
	 if(j<=7)
	 {
	      gotoxy(45,j);
	      printf(" ");
	 }
	 delay(50);
    }
    for(i=42;i<=48;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
    }
    //e
    for(j=5;j<=11;j++)
    {
	 gotoxy(51,j);
	 printf(" ");
	 delay(50);
    }
    for(i=51;i<=57;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 gotoxy(i,11);
	 printf(" ");
	 delay(50);
    }
    //o
    for(j=14;j<=20;j++)
    {
	 gotoxy(17,j);
	 printf(" ");
	 gotoxy(23,j);
	 printf(" ");
	 delay(50);
    }
    for(i=17;i<=23;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    //v
    gotoxy(26,14);
    printf(" ");
    gotoxy(27,15);
    printf(" ");
    gotoxy(28,16);
    printf(" ");
    gotoxy(29,17);
    printf(" ");
    gotoxy(30,18);
    printf(" ");
    gotoxy(31,19);
    printf(" ");
    gotoxy(32,20);
    printf(" ");
    gotoxy(33,19);
    printf(" ");
    gotoxy(34,18);
    printf(" ");
    gotoxy(35,17);
    printf(" ");
    gotoxy(36,16);
    printf(" ");
    gotoxy(37,15);
    printf(" ");
    gotoxy(38,14);
    printf(" ");
    for(j=14;j<=20;j++)
    {
	 gotoxy(41,j);
	 printf(" ");
	 delay(50);
    }
    for(i=41;i<=47;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,17);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    for(j=14;j<=20;j++)
    {
	 gotoxy(50,j);
	 printf(" ");
	 if(j<=16)
	 {
	      gotoxy(56,j);
	      printf(" ");
	 }
	 delay(50);
    }
    for(i=50;i<=56;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,16);
	 printf(" ");
	 delay(50);
    }
    gotoxy(53,17);
    printf(" ");
    gotoxy(54,18);
    printf(" ");
    gotoxy(55,19);
    printf(" ");
    gotoxy(56,20);
    printf(" ");
    textbackground(3);
    textcolor(15);
    for(j=1;j<=25;j++)
    {
	 delay(100);
	 gotoxy(1,j);
	 cprintf("                                                                                   ");
    }
    clrscr();
    gotoxy(7,8);
    printf(" Do you want to play again ");
    c=getche();
    if(c=='y' || c=='Y')
    {
	 flag=1;
    }
    else
    {
	 flag=0;
    }
}
void start(int s)
{
    clrscr();
    textbackground(4);
    textcolor(2);
    int i,j;
    for(j=1;j<=25;j++)
    {
	 for(i=0;i<=79;i++)
	 {
	      gotoxy(i,j);
	      cprintf("%c",177);
	 }
	 delay(50);
    }
    for(j=5;j<=11;j++)
    {
	 gotoxy(8,j);
	 printf(" ");
	 delay(50);
    }
    for(i=8;i<=14;i++)
    {
	 gotoxy(i,11);
	 printf(" ");
	 delay(50);
    }
    for(j=5;j<=11;j++)
    {
	 gotoxy(17,j);
	 printf(" ");
	 delay(50);
    }
    for(i=17;i<=23;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 gotoxy(i,11);
	 printf(" ");
	 delay(50);
    }
    gotoxy(26,5);
    printf(" ");
    gotoxy(27,6);
    printf(" ");
    gotoxy(28,7);
    printf(" ");
    gotoxy(29,8);
    printf(" ");
    gotoxy(30,9);
    printf(" ");
    gotoxy(31,10);
    printf(" ");
    gotoxy(32,11);
    printf(" ");
    gotoxy(33,10);
    printf(" ");
    gotoxy(34,9);
    printf(" ");
    gotoxy(35,8);
    printf(" ");
    gotoxy(36,7);
    printf(" ");
    gotoxy(37,6);
    printf(" ");
    gotoxy(38,5);
    printf(" ");
    for(j=5;j<=11;j++)
    {
	 gotoxy(41,j);
	 printf(" ");
	 delay(50);
    }
    for(i=41;i<=47;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 gotoxy(i,11);
	 printf(" ");
	 delay(50);
    }
    for(j=5;j<=11;j++)
    {
	 gotoxy(50,j);
	 printf(" ");
	 delay(50);
    }
    for(i=50;i<=56;i++)
    {
	 gotoxy(i,11);
	 printf(" ");
	 delay(50);
    }
    for(i=59;i<=64;i++)
    {
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    // no.
    if(s==2)
    {
	 for(i=68;i<=74;i++)
	 {
	      gotoxy(i,5);
	      printf(" ");
	      delay(50);
	 }
	 for(j=5;j<=8;j++)
	 {
	      gotoxy(74,j);
	      printf(" ");
	      delay(50);
	 }
	 for(i=74;i>=68;i--)
	 {
	      gotoxy(i,8);
	      printf(" ");
	      delay(50);
	 }
	 for(j=8;j<=11;j++)
	 {
	      gotoxy(68,j);
	      printf(" ");
	      delay(50);
	 }
	 for(i=68;i<=74;i++)
	 {
	      gotoxy(i,11);
	      printf(" ");
	      delay(50);
	 }
    }
    if(s==3)
    {
	 for(i=68;i<=74;i++)
	 {
	      gotoxy(i,5);
	      printf(" ");
	      gotoxy(i,8);
	      printf(" ");
	      gotoxy(i,11);
	      printf(" ");
	      delay(50);
	 }
	 for(j=5;j<=11;j++)
	 {
	     gotoxy(74,j);
	     printf(" ");
	     delay(50);
	 }
    }
    if(s==4)
    {
	 for(j=5;j<=11;j++)
	 {
	      gotoxy(74,j);
	      printf(" ");
	      if(j<=7)
	      {
		   gotoxy(68,j);
		   printf(" ");
	      }
	      delay(50);
	 }
	 for(i=68;i<=74;i++)
	 {
	      gotoxy(i,7);
	      printf(" ");
	      delay(50);
	 }
    }

    //line 2
    for(i=15;i<=21;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,17);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    for(j=14;j<=20;j++)
    {
	 if(j<=17)
	 {
	      gotoxy(15,j);
	      printf(" ");
	 }
	 if(j>17)
	 {
	      gotoxy(21,j);
	      printf(" ");
	 }
	 delay(50);
    }
    for(j=14;j<=20;j++)
    {
	 gotoxy(27,j);
	 printf(" ");
	 delay(50);
    }
    for(i=24;i<=30;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 delay(50);
    }
    for(j=14;j<=20;j++)
    {
	 gotoxy(39,j);
	 printf(" ");
	 gotoxy(33,j);
	 printf(" ");
	 delay(50);
    }
    for(i=33;i<=39;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,16);
	 printf(" ");
	 delay(50);
    }
    for(j=14;j<=20;j++)
    {
	 gotoxy(42,j);
	 printf(" ");
	 delay(50);
    }
    for(i=42;i<=48;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,17);
	 printf(" ");
	 delay(50);
    }
    for(j=14;j<=17;j++)
    {
	 gotoxy(48,j);
	 printf(" ");
	 delay(50);
    }
    gotoxy(46,18);
    printf(" ");
    gotoxy(47,19);
    printf(" ");
    gotoxy(48,20);
    printf(" ");
    for(j=14;j<=20;j++)
    {
	 gotoxy(54,j);
	 printf(" ");
	 delay(50);
    }
    for(i=51;i<=57;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 delay(50);
    }
    for(i=60;i<=66;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,17);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    for(j=14;j<=20;j++)
    {
	 if(j<=17)
	 {
	      gotoxy(60,j);
	      printf(" ");
	 }
	 if(j>17)
	 {
	      gotoxy(66,j);
	      printf(" ");
	 }
	 delay(50);
    }
    textbackground(3);
    textcolor(15);
    for(j=1;j<=25;j++)
    {
	 delay(50);
	 gotoxy(1,j);
	 cprintf("                                                                                   ");
    }
}
void complete()
{
    clrscr();
    textbackground(4);
    textcolor(2);
    int i,j;
    for(j=1;j<=25;j++)
    {
	 for(i=0;i<=79;i++)
	 {
	      gotoxy(i,j);
	      cprintf("%c",177);
	 }
	 delay(100);
    }
    //g
    for(i=24;i<=30;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 if(i<=28)
	 {
	      gotoxy(i,11);
	      printf(" ");
	 }
	 delay(50);
    }
    for(j=5;j<=11;j++)
    {
	 gotoxy(24,j);
	 printf(" ");
	 if(j>=9)
	 {
	      gotoxy(28,j);
	      printf(" ");
	 }
	 delay(50);
    }
    for(i=27;i<=30;i++)
    {
	 gotoxy(i,8);
	 printf(" ");
	 delay(50);
    }
    for(j=8;j<=11;j++)
    {
	 gotoxy(30,j);
	 printf(" ");
	 delay(50);
    }
    //a
    for(j=5;j<=11;j++)
    {
	 gotoxy(39,j);
	 printf(" ");
	 gotoxy(33,j);
	 printf(" ");
	 delay(50);
    }
    for(i=33;i<=39;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,7);
	 printf(" ");
	 delay(50);
    }
    //m
    for(j=5;j<=11;j++)
    {
	 gotoxy(42,j);
	 printf(" ");
	 gotoxy(48,j);
	 printf(" ");
	 if(j<=7)
	 {
	      gotoxy(45,j);
	      printf(" ");
	 }
	 delay(50);
    }
    for(i=42;i<=48;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
    }
    //e
    for(j=5;j<=11;j++)
    {
	 gotoxy(51,j);
	 printf(" ");
	 delay(50);
    }
    for(i=51;i<=57;i++)
    {
	 gotoxy(i,5);
	 printf(" ");
	 gotoxy(i,8);
	 printf(" ");
	 gotoxy(i,11);
	 printf(" ");
	 delay(50);
    }
    // line 2
    //c
    for(j=14;j<=20;j++)
    {
	 gotoxy(6,j);
	 printf(" ");
	 delay(50);
    }
    for(i=6;i<=12;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    //o
    for(j=14;j<=20;j++)
    {
	 gotoxy(15,j);
	 printf(" ");
	 gotoxy(21,j);
	 printf(" ");
	 delay(50);
    }
    for(i=15;i<=21;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    //m
    for(j=14;j<=20;j++)
    {
	 gotoxy(24,j);
	 printf(" ");
	 if(j<=16)
	 {
	      gotoxy(27,j);
	      printf(" ");
	 }
	 gotoxy(30,j);
	 printf(" ");
	 delay(50);
    }
    for(i=24;i<=30;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 delay(50);
    }
    //p
    for(j=14;j<=20;j++)
    {
	 gotoxy(33,j);
	 printf(" ");
	 delay(50);
	 if(j<=16)
	 {
	      gotoxy(39,j);
	      printf(" ");
	 }
    }
    for(i=33;i<=39;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,16);
	 printf(" ");
	 delay(50);
    }
    //l
    for(j=14;j<=20;j++)
    {
	 gotoxy(41,j);
	 printf(" ");
	 delay(50);
    }
    for(i=41;i<=46;i++)
    {
	 gotoxy(20,i);
	 printf(" ");
	 delay(50);
    }
    //e
    for(j=14;j<=20;j++)
    {
	 gotoxy(51,j);
	 printf(" ");
	 delay(50);
    }
    for(i=50;i<=56;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,17);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
    //t
    for(j=14;j<=20;j++)
    {
	 gotoxy(62,j);
	 printf(" ");
	 delay(50);
    }
    for(i=59;i<=65;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 delay(50);
    }
    //e
    for(j=14;j<=20;j++)
    {
	 gotoxy(69,j);
	 printf(" ");
	 delay(50);
    }
    for(i=68;i<=74;i++)
    {
	 gotoxy(i,14);
	 printf(" ");
	 gotoxy(i,17);
	 printf(" ");
	 gotoxy(i,20);
	 printf(" ");
	 delay(50);
    }
}
void main()
{
    frontpage();
    textbackground(3);
    textcolor(15);
    clrscr();
    page();
    char c;
    int row1=2,col1=2,score=0,rand,row2,col2,row3=0,col3=0,count=1,time=0,flag,flag1,flag2=-1;
    randomize();
    row2=2+random(61);
    col2=2+random(22);
    rand=random(10);
    gotoxy(row2,col2);
    printf("%d",rand);
    do
    {
	 if (kbhit())
	    c=getche();
	 gotoxy(41,20);
	 cout<<" ";
	 gotoxy(31,18);
	 cout<<" ";
	 gotoxy(row1,col1);
	 printf("  ");
	 if(row1+1==65)
	 {
	      gotoxy(row1,col1);
	      printf(" %c",179);
	 }
	 if(c=='d')
	 {
	      if(row1==64)
	      {
		   row1=1;
	      }
	      row1++;
	 }
	 if(c=='s')
	 {
	      if(col1==23)
	      {
		   col1=1;
	      }
	      col1++;
	 }
	 if(c=='w')
	 {
	      if(col1==2)
	      {
		   col1=24;
	      }
	      col1--;
	 }
	 if(c=='a')
	 {
	      if(row1==2)
	      {
		   row1=64;
	      }
	      row1--;
	 }
	 gotoxy(row1,col1);
	 printf("%c",177);
	 if(score<25)
	 {
	      delay(200);
	 }
	 else if(score>=25 && score<50)
	 {
	      delay(175);
	 }
	 else if(score>=50 && score<75)
	 {
	      delay(125);
	 }
	 else
	 {
	      delay(100);
	 }
	 if((row2==row1 && col2==col1) || (row2==row1+1 && col2==col1))
	 {
	       score=score+rand;
	       row2=2+random(62);
	       col2=random(22)+2;
	       rand=random(10);
	       gotoxy(row2,col2);
	       printf("%d",rand);
	       gotoxy(76,3);
	       printf("%d",score);
	       count++;

	 }
	 if(score<25)
	 {
	      if(count%5==0)
	      {
		   row3=random(61)+2;
		   col3=random(21)+2;
		   level1(row3,col3);
		   gotoxy(row2,col2);
		   cout<<" ";
		   flag=1;
		   count=1;

	      }
	      if((row3==row1 && col3==col1) || (row3==row1+1 && col3==col1))
	      {
		   gameover(flag2);
		   if(flag2==0)
		   {
			return;
		   }
		   else
		   {
			score=0;
			clrscr();
			page();
			row1=2;
			col1=2;
			count=1;
		   }
	      }
	      if(flag==1)
	      {
		   time++;
	      }
	      if(time==25)
	      {
		   gotoxy(row3,col3);
		   cout<<"   ";
		   row2=2+random(62);
		   col2=random(22)+2;
		   rand=random(10);
		   gotoxy(row2,col2);
		   printf("%d",rand);
		   row3=0;col3=0;
		   time=0;
		   flag=0;
	      }
	      flag1=1;
	 }
	 else if(score>=25 && score <50)
	 {
	      if(flag1==1)
	      {
		   row1=2;
		   col1=2;
		   congratulations();
		   start(2);
		   flag1=0;
		   clrscr();
		   row2=2+random(62);
		   col2=random(22)+2;
		   rand=random(10);
		   gotoxy(row2,col2);
		   printf("%d",rand);
	      }
	      page();
	      gotoxy(76,3);
	      printf("%d",score);
	      level2();
	      int x3;
	      for(x3=4;x3<=8;x3++)
	      {
		   if((row2==20 && col2==x3)||(row2==40 && col2==x3))
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(x3=16;x3<=20;x3++)
	      {
		   if((row2==20 && col2==x3)||(row2==40 && col2==x3))
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(int k=4;k<=7;k++)
	      {
		   if((row1==20 && col1==k) || (row1+1==20 && col1==k))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	      for(int l=16;l<=20;l++)
	      {
		   if((row1==20 && col1==l) || (row1+1==20 && col1==l))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	      for(int n=4;n<=7;n++)
	      {
		   if((row1==40 && col1==n) || (row1+1==40 && col1==n))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	      for(int p=16;p<=20;p++)
	      {
		   if((row1==40 && col1==p) || (row1+1==40 && col1==p))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	 }
	 else if(score>=50 && score<75)
	 {

	      if(flag1==0)
	      {
		   row1=2;
		   col1=2;
		   congratulations();
		   start(3);
		   flag1=3;
		   clrscr();
		   row2=2+random(62);
		   col2=random(22)+2;
		   rand=random(10);
		   gotoxy(row2,col2);
		   printf("%d",rand);
	      }
	      page();
	      gotoxy(76,3);
	      printf("%d",score);
	      level3();
	      int x4;
	      for(x4=11;x4<=20;x4++)
	      {
		   if((row2==x4 && col2==5)||(row2==x4 && col2==19))
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(x4=40;x4<=50;x4++)
	      {
		   if((row2==x4 && col2==5)||(row2==x4 && col2==19))
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(x4=6;x4<=18;x4++)
	      {
		   if(row2==30 && col2==x4)
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(int r=11;r<=20;r++)
	      {
		   if((row1==r && col1==5) || (row1+1==r && col1==5))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
		   if((row1==r && col1==19) || (row1+1==r && col1==19))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	      for(int t=40;t<=50;t++)
	      {
		   if((row1==t && col1==5) || (row1+1==t && col1==5))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
		   if((row1==t && col1==19) || (row1+1==t && col1==19))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	      for(int v=6;v<=18;v++)
	      {
		   if((row1==30 && col1==v) || (row1+1==30 && col1==v))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	 }
	 else if(score>=75 && score<100)
	 {    int x1,x2;
	      if(flag1==3)
	      {
		   row1=2;
		   col1=2;
		   congratulations();
		   start(4);
		   flag1=4;
		   clrscr();
		   row2=2+random(62);
		   col2=random(22)+2;
		   rand=random(10);
		   gotoxy(row2,col2);
		   printf("%d",rand);
	      }
	      page();
	      gotoxy(76,3);
	      printf("%d",score);
	      level4();
	      for(x1=11;x1<=20;x1++)
	      {
		   if((row2==x1 && col2==4)||(row2==x1 && col2==10)||(row2==x1 && col2==16))
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(x1=40;x1<=50;x1++)
	      {
		   if((row2==x1 && col2==4)||(row2==x1 && col2==10)||(row2==x1 && col2==16))
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(x1=6;x1<=18;x1++)
	      {
		   if(row2==30 && col2==x1)
		   {
			row2=2+random(62);
			col2=random(22)+2;
			rand=random(10);
			gotoxy(row2,col2);
			printf("%d",rand);
		   }
	      }
	      for(x1=11;x1<=20;x1++)
	      {
		   if((row1==x1 && col1==5) || (row1+1==x1 && col1==5))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
		   if((row1==x1 && col1==11) || (row1+1==x1 && col1==11))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
		   if((row1==x1 && col1==18) || (row1+1==x1 && col1==18))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	      for(x1=40;x1<=50;x1++)
	      {
		   if((row1==x1 && col1==5) || (row1+1==x1 && col1==5))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
		   if((row1==x1 && col1==11) || (row1+1==x1 && col1==11))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
		   if((row1==x1 && col1==18) || (row1+1==x1 && col1==18))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	      for(x1=6;x1<=18;x1++)
	      {
		   if((row1==30 && col1==x1) || (row1+1==30 && col1==x1))
		   {
			gameover(flag2);
			if(flag2==0)
			{
			     return;
			}
			else
			{
			     score=0;
			     clrscr();
			     page();
			     row1=2;
			     col1=2;
			     count=1;
			     gotoxy(row2,col2);
			     printf("%d",rand);
			}
		   }
	      }
	 }
	 else
	 {
	      complete();
	      return;
	 }
    }while(c!='q');
}
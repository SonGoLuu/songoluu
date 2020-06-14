#include "graphics.h"
#include <stdio.h>
#include <math.h>
#pragma comment(lib, "graphics.lib")
 void Khungstart()
 {   setbkcolor(7);
     setcolor(5);
     setfillstyle(SOLID_FILL,7);
     bar(0,0,1050,650);
	 settextstyle(TRIPLEX_FONT,0,7); 
	 outtextxy(110,40,"Who Wants to Be");
	 outtextxy(10,120,"a Millionaire of UTC2?");
	 setcolor(3); settextstyle(TRIPLEX_FONT,0,6); 
     outtextxy(400,350,"Play Game");
	
 }
 
void Khunggame()
{  
   setcolor(0);
   setfillstyle(SOLID_FILL,YELLOW);
   setcolor(GREEN); setlinestyle(1,2,4); 
   rectangle(50,130,1000,250);
   bar(50,300,450,430); bar(600,300,1000,430);
   bar(50,470,450,600); bar(600,470,1000,600);
   setcolor(13); setfillstyle(SOLID_FILL,13);  pieslice(525, 450, 0, 360, 40); 
   setcolor(0); setbkcolor(13); settextstyle(GOTHIC_FONT,0,2); outtextxy(500,430,"Tro"); outtextxy(493,450,"Giup"); 
    
}
void c5050(int x,int y, int cau)
{
  setbkcolor(YELLOW); setcolor(0);settextstyle(GOTHIC_FONT,0,4); 
  if (cau==6) {outtextxy(620,320,"                       "); outtextxy(70,490,"                       ");}	
  if (cau==7) {outtextxy(620,490,"                       "); outtextxy(70,490,"                       ");}	
  if (cau==8) {outtextxy(620,490,"                       "); outtextxy(70,490,"                       ");}	
  if (cau==9) {outtextxy(620,320,"                       "); outtextxy(70,490,"                       ");}
  if (cau==10) {outtextxy(70,320,"                       "); outtextxy(620,320,"                       ");}	
}
void Trogiup(int x, int y, int cau)
{ 
   
			if(x>=485 && x<=565 && y>=410 &&y<=490)
			{
				setbkcolor(7);setcolor(4); settextstyle(GOTHIC_FONT,0,2); outtextxy(490,265,"50/50");
				while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
           
			if (x>=490 && x<=590 && y>=265 && y<=283) {c5050(x,y,cau); break;}
		    }}
			}

		    
}
void Money(int cau)
{
	setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(BLACK); outtextxy(23,29,"Money: 0$");
	outtextxy(23,29,"Money: 200$");
	outtextxy(23,29,"Money: 400$");
}
void Result(int r)
{
 if (r==0) 
 { setfillstyle(SOLID_FILL,BLUE); setcolor(WHITE); setbkcolor(BLUE); settextstyle(GOTHIC_FONT,0,4); 
	 bar(230,330,830,500); outtextxy(395,365,"Ban thua roi"); outtextxy (310,420,"Nhan nut     de thoat"); setbkcolor(RED);outtextxy (517,420,"X");
 }
 if (r==1)
{ setfillstyle(SOLID_FILL,BLUE); setcolor(WHITE); setbkcolor(BLUE); settextstyle(GOTHIC_FONT,0,4); 
 bar(160,330,900,500); outtextxy(175,365,"Wow ban da tro thanh trieu phu :))"); outtextxy (310,420,"Nhan nut     de thoat"); setbkcolor(RED);outtextxy (517,420,"X");
 {setcolor(BLACK); setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,9); outtextxy(260,140,"150000$");}
}
}
void Cauhoi()
{  int count,cau,r;
	switch(1){
	case 1:  cau=1; setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 0$");
		     setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		     outtextxy(70,150,"Cau 1. Ma truong Dai hoc GTVT phan hieu TPHCM la gi?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"GSB");outtextxy(620,320,"GSA");outtextxy(70,490,"GSC");outtextxy(620,490,"GSX");
			 int x,y;
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
           
			if(x>=600 && x<=1000 && y>=300 && y<=430){setcolor(5); setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,3);  outtextxy(450,50,"Chinh xac!"); count=1; break;}
			if(x>=50 && x<=450 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 || x>=600 && x<=1000 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,3); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		    }}
	case 2:  cau=2; 
		if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		     outtextxy(70,150,"Cau 2. Son Goku la nhan vat trong bo phim anime nao?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"Dragon Ball");outtextxy(620,320,"Basket Ball");outtextxy(70,490,"Red Dragon");outtextxy(620,490,"Doraemon"); setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 200$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            
			if(x>=50 && x<=450 && y>=300 &&y<=430){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!"); count=1; break;}
			if(x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 || x>=600 && x<=1000 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
    case 3:  cau=3; 
		if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		     outtextxy(70,150,"Cau 3. Chien dich Bien Gioi - Thu Dong dien ra nam nao?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"1950");outtextxy(620,320,"1979");outtextxy(70,490,"1945");outtextxy(620,490,"1975"); setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 400$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            
			if(x>=50 && x<=450 && y>=300 &&y<=430){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 || x>=600 && x<=1000 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	 case 4:  cau=4;
		 if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		     outtextxy(70,150,"Cau 4. Logo trinh duyet Firefox co hinh con gi?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"Soi");outtextxy(620,320,"Cao");outtextxy(70,490,"Gau truc do");outtextxy(620,490,"Soc"); setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 600$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
           
			if(x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=300 &&y<=430 || x>=600 && x<=1000 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r);break;}
		}}}
	  case 5:  cau=5;
		  if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		     outtextxy(70,150,"Cau 5. Ai la tac gia cua ''Dai Thanh Toan Phap''?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"Ngo Bao Chau");outtextxy(620,320,"Ta Quang Buu");outtextxy(70,490,"Luong The Vinh");outtextxy(620,490,"Bui Trong Lieu"); setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 1000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
           
			if(x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=300 &&y<=430 || x>=600 && x<=1000 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	   case 6:  cau=6;
		   if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		     outtextxy(70,150,"Cau 6. Doraemon tung duoc phat song tren VTV1 vao");
			 outtextxy(70,190,"nam nao?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"2003");outtextxy(620,320,"2002");outtextxy(70,490,"2001");outtextxy(620,490,"2000");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 2000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            Trogiup(x,y,cau);
			if(x>=600 && x<=1000 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=300 &&y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
		case 7:  cau=7;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 7. Cham ngon cua chu tich Ho Chi Minh:");
		outtextxy(70,190,"''Lua thu vang gian nan thu...''?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"Suc");outtextxy(620,320,"Ban");outtextxy(70,490,"Long");outtextxy(620,490,"Lua");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 3000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            Trogiup(x,y,cau);
			if(x>=600 && x<=1000 && y>=300 && y<=430 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=470 && y<=600 || x>=50 && x<=450 && y>=300 &&y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	    case 8:  cau=8;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 8. To tien menh gia nao in hinh truong Dai hoc");
		outtextxy(70,190,"dau tien cua Viet Nam");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"100.000 VND");outtextxy(620,320,"200.000 VND");outtextxy(70,490,"50.000 VND");outtextxy(620,490,"20.000 VND");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 6000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
             Trogiup(x,y,cau);
			if(x>=50 && x<=450 && y>=300 &&y<=430){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=470 && y<=600 || x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	    case 9:  cau=9;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 9. Cay di san Viet Nam nao sau day o Thanh Hoa?");
	    setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
		outtextxy(70,320,"Cay da");outtextxy(70,360,"muoi ba goc");outtextxy(620,320,"Cay ma de");outtextxy(70,490,"Cay luoi ho");outtextxy(620,490,"Cay gao Phu Yen");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 10000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            Trogiup(x,y,cau);
			if(x>=600 && x<=1000 && y>=470 && y<=600){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=50 && x<=450 && y>=300 &&y<=430 || x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	    case 10:  cau=10;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 10. FIFA lan dao su dung quy tac phat the do,");
		outtextxy(70,190,"the vang trong World Cup nam nao?");
	    setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
		outtextxy(70,320,"1962");outtextxy(620,320,"1966");outtextxy(70,490,"1970");outtextxy(620,490,"1974");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 14000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            Trogiup(x,y,cau);
			if(x>=50 && x<=450 && y>=470 && y<=600){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=50 && x<=450 && y>=300 &&y<=430 || x>=600 && x<=1000 && y>=300 && y<=430 ||x>=600 && x<=1000 && y>=470 && y<=600  ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r);break;}
		}}}
	    case 11:  cau=11;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 11. Nha van nao CHUA tung dat giai Nobel Van hoc?");
	    setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
		outtextxy(70,320,"E.Hemingway");outtextxy(620,320,"Victor Hugo");outtextxy(70,490,"Bob Dylan");outtextxy(620,490,"Mac Ngon");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 22000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
             
			if(x>=600 && x<=1000 && y>=300 && y<=430){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=50 && x<=450 && y>=300 &&y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ||x>=600 && x<=1000 && y>=470 && y<=600  ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
        case 12: cau=12;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 12. ''Cong dau cong uong cong thua,");
		outtextxy(70,190,"        cong dau ganh nuoc tuoi dua ...''?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"Que anh");outtextxy(620,320,"Ben Tre");outtextxy(70,490,"Ha Giang");outtextxy(620,490,"Tam Quan");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 30000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
             
			if(x>=600 && x<=1000 && y>=470 && y<=600){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if( x>=50 && x<=450 && y>=300 &&y<=430|| x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
        case 13:  cau=13;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 13. Dau KHONG phai la bai hat cua nhom Chillies?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"Tang thuong 102");outtextxy(620,320,"Mascara");outtextxy(70,490,"Va the la het");outtextxy(620,490,"Vung ky uc");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 40000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            
			if(x>=50 && x<=450 && y>=300 &&y<=430){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=470 && y<=600 || x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	    case 14:  cau=14;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 14. So 3 trong he nhi phan duoc viet nhu the nao?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4);  
			 outtextxy(70,320,"11");outtextxy(620,320,"110");outtextxy(70,490,"010");outtextxy(620,490,"0101");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 60000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            
			if(x>=50 && x<=450 && y>=300 &&y<=430){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; break;}
			if(x>=600 && x<=1000 && y>=470 && y<=600 || x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	    case 15:  cau=15;
			if (count==1){
		delay(2500); cleardevice(); Khunggame();
		setcolor(0); setbkcolor(7); settextstyle(GOTHIC_FONT,0,3); 
		outtextxy(70,150,"Cau 15. Which color has the RGB coefficient (255,255,0)?");
			 setbkcolor(YELLOW); settextstyle(GOTHIC_FONT,0,4); 
			 outtextxy(70,320,"Red");outtextxy(620,320,"Green");outtextxy(70,490,"Black");outtextxy(620,490,"Yellow");  setbkcolor(LIGHTGRAY); settextstyle(GOTHIC_FONT,0,2); setcolor(14); outtextxy(23,29,"Money: 85000$");
			 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
            
			if(x>=600 && x<=1000 && y>=470 && y<=600){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Chinh xac!");count=1; r=1; Result(r); break;}
			if( x>=50 && x<=450 && y>=300 &&y<=430|| x>=600 && x<=1000 && y>=300 && y<=430 || x>=50 && x<=450 && y>=470 && y<=600 ){setcolor(5); setbkcolor(LIGHTGRAY); outtextxy(450,50,"Sai roi!"); count=0; r=0; Result(r); break;}
		}}}
	}
}



 void Play()
 {   int x,y;
	 while(1){
        if (ismouseclick(WM_LBUTTONDOWN)){
            getmouseclick(WM_LBUTTONDOWN, x, y);
         
			if(x>=400 && x<=780 && y>=350 &&y<=395){ cleardevice(); Khunggame(); Cauhoi(); }
		    }}
    
 }
   
 
int main()
{ 
   int gd = DETECT, gm; 
   initgraph(&gd, &gm, "");
   initwindow(1050,650,"Ai la trieu phu");
   Khungstart();
   Play();
   getch();
   closegraph();   
   return 0;
}
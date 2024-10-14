#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x , int y);
char getCharAtxy(short int x, short int y);
 void printmaze();
 void printplayer1();
void eraseplayer1();
void printEnemy2();
void eraseEnemy2();
void moveplayer1right();
void moveplayer1left();
void moveplayer1up();
void moveplayer1down();
 int pX = 8 , pY = 27;
 int e2X = 78, e2Y = 24;
 int e1X = 46, e1Y = 27;
 int e3X = 50, e3Y = 20;
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
main()
{
   
system("cls");
 printmaze();
 printEnemy1();
 printEnemy2();
 printplayer1();
 while(true)
{
 if (GetAsyncKeyState(VK_LEFT))
 {
	moveplayer1left();
 }
 if (GetAsyncKeyState(VK_RIGHT))
 {
	moveplayer1right();
 }
  if (GetAsyncKeyState(VK_DOWN))
 {
	moveplayer1down();
 }
   if (GetAsyncKeyState(VK_UP))
 {
	moveplayer1up();
 }
moveEnemy1();
 moveEnemy2();
 moveEnemy3();
Sleep(200);
}



 gotoxy (0,60);
}

    void printmaze()
{
cout<<"################################################################################################################################"<<endl;
cout<<"#         ^ ^                                                                          ^ ^           *                         #"<<endl;
cout<<"#        <(o)>                                          *                 '           <(o)>                                    #"<<endl;
cout<<"#                            *                                           ''                                       *            #"<<endl;
cout<<"#                     *                                                 ' '                                                    #"<<endl;
cout<<"#       *                               *                               ' '                            *                       #"<<endl;
cout<<"#                                                                       ' '                                                    #"<<endl;
cout<<"#                                                                       ' '                    *                               #"<<endl;
cout<<"#                                  *                                     ''                                                    #"<<endl;
cout<<"#      *                                                   *              '                                   *                #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                             ^             ^ ^                ^                                    ^                          #"<<endl;
cout<<"#                           ^^ ^^          <(o)>             ^^ ^^                                ^^ ^^                        #"<<endl;
cout<<"#                         ^^     ^^                        ^^     ^^                            ^^     ^^                      #"<<endl;
cout<<"#                       ^^         ^^                    ^^         ^^                        ^^         ^^                    #"<<endl;
cout<<"#^^^^^^^^^^^^^^^^^^^^^^^             ^^^^^^^^^^^^^^^^^^^^             ^^^^^^^^^^^^^^^^^^^^^^^^             ^^^^^^^^^^^^^^^^^^^ #"<<endl;
cout<<"#                                                                                                                 ^ ^          #"<<endl;
cout<<"#                                                                                                                <(o)>         #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#                                                                              _________                                       #"<<endl;
cout<<"#                                                                             |_________|                                      #"<<endl;
cout<<"#                                                                                                                              #"<<endl;
cout<<"#    _________                                   __________                                                                    #"<<endl;
cout<<"#____|_______|_                    ______________|________|____________________________________________________________________#"<<endl;
cout<<"#             \\                  /                                                                                            #"<<endl;
cout<<"#              \\________________/                                                                                             #"<<endl;
cout<<"################################################################################################################################"<<endl;
}
void printplayer1()
{
       gotoxy(pX,pY);
       cout<<"  o"<<endl;
       gotoxy(pX,pY+1);
       cout<<"/ | \\ "<<endl;
       gotoxy(pX,pY+2);
       cout<<"  |  == >"<<endl;
       gotoxy(pX,pY+3);
       cout<<" / \\" <<endl;
         
}
void eraseplayer1()
{
       gotoxy(pX,pY);
       cout<<"   "<<endl;
       gotoxy(pX,pY+1);
       cout<<"       "<<endl;
       gotoxy(pX,pY+2);
       cout<<"         "<<endl;
       gotoxy(pX,pY+3);
       cout<<"     " <<endl;   
}


void moveplayer1up() {
    
    if (getCharAtxy(pX, pY - 1) != '^' && pY -1 > 15) {
        eraseplayer1();
        Sleep(50);
        pY = pY - 1; 
        printplayer1();
    }
}


void moveplayer1down()
{	
    if (getCharAtxy(pX, pY + 1) != '#' && pY+1 < 28)  {
	
	eraseplayer1();
	Sleep(50);
	pY= pY + 1;
	printplayer1();
}
}
void moveplayer1right(){
 
    if (getCharAtxy(pX+2, pY) != '#' && pX + 2 < 120) {
	eraseplayer1();
	Sleep(50);
	pX= pX + 2;
	printplayer1();
}

}
void moveplayer1left()
{	
    if (getCharAtxy(pX-2, pY) != '#' && pX -2 > 2) {
	eraseplayer1();
	Sleep(50);
	pX= pX - 2;
	printplayer1();
}
}
void printEnemy1(){
        gotoxy(e1X,e1Y);
       cout<<"        *"<<endl;
       gotoxy(e1X,e1Y+1);
       cout<<"      / | \\ "<<endl;
        gotoxy(e1X,e1Y+2);
       cout<<"  <---  |"<<endl;
       gotoxy(e1X,e1Y+3);
       cout<<"       / \\" <<endl;

}
void eraseEnemy1(){
        gotoxy(e1X,e1Y);
       cout<<"         "<<endl;
       gotoxy(e1X,e1Y+1);
       cout<<"             "<<endl;
        gotoxy(e1X,e1Y+2);
       cout<<"         "<<endl;
       gotoxy(e1X,e1Y+3);
       cout<<"           " <<endl;


}
void printEnemy2(){
    
        gotoxy(e2X,e2Y);
       cout<<"        ^"<<endl;
       gotoxy(e2X,e2Y+1);
       cout<<"      / | \\ "<<endl;
        gotoxy(e2X,e2Y+2);
       cout<<" <====  |"<<endl;
       gotoxy(e2X,e2Y+3);
       cout<<"       / \\" <<endl;

}
void eraseEnemy2(){
    
        gotoxy(e2X,e2Y);
       cout<<"         "<<endl;
       gotoxy(e2X,e2Y+1);
       cout<<"             "<<endl;
        gotoxy(e2X,e2Y+2);
       cout<<"         "<<endl;
       gotoxy(e2X,e2Y+3);
       cout<<"           " <<endl;

}
void printEnemy3(){
    
        gotoxy(e3X,e3Y);
       cout<<"        @"<<endl;
       gotoxy(e3X,e3Y+1);
       cout<<"      / | \\ "<<endl;
        gotoxy(e3X,e3Y+2);
       cout<<" <====  |"<<endl;
       gotoxy(e3X,e3Y+3);
       cout<<"       / \\" <<endl;

}
void eraseEnemy3(){
    
        gotoxy(e3X,e3Y);
       cout<<"         "<<endl;
       gotoxy(e3X,e3Y+1);
       cout<<"             "<<endl;
        gotoxy(e3X,e3Y+2);
       cout<<"         "<<endl;
       gotoxy(e3X,e3Y+3);
       cout<<"           " <<endl;

}
void moveEnemy1()
{
    eraseEnemy1();
    e1X++;
    if (e1X > 54 )
    e1X = 46;	
    printEnemy1();
}
void moveEnemy2()
{
    eraseEnemy2();
    e2Y--;
    if (e2Y < 16  )
    e2Y = 24;
    printEnemy2();
}
void moveEnemy3() {
    eraseEnemy3();
    
   
    e3X++; 
    e3Y++; 
    if (e3X > 58) e3X = 50; 
    if (e3Y > 22) e3Y = 20; 

    printEnemy3();

}
void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)

{

CHAR_INFO ci;

COORD xy = {0, 0};

SMALL_RECT rect = {x, y, x, y};

COORD coordBufSize;

coordBufSize.X = 1;

coordBufSize.Y = 1;

return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';

}

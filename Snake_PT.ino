

#include <MeggyJrSimple.h>   

void setup()                   
{
  MeggyJrSimpleSetup();
  Serial.begin (9600);  
}

int x = 3; //cordinates of plyr dot
int y = 4;
int direction =0; //possible values r 0,90,180,270

/*
Draw player-
Display Slate / delay 100
Check Buttons-
update directions if a button is pressed-
update player based on direction-
correct for wrapping-
*/

void loop()
{
Serial.print ("x is");
Serial.print(x);
Serial.print("y is");
Serial.print(y);

//draw player
DrawPx(x,y,Blue) ;
DrawPx(xapple,yapple,Red) ;
DisplaySlate() ;
delay(5) ; //speed
ClearSlate(); 

//apple
if (xapple==xplayer){
if (yapple==yplayer){
  
  xapple=random(8) ;
  yapple=random(8) ;
  
}
}
  
  
//BUTTONS
CheckButtonsDown() ;
if(Button_Right)
  direction=90;
  
if(Button_Left)
  direction=270;
  
if(Button_Up)
  direction=0;
  
if(Button_Down)
  direction=180;
//break

if(direction==90)
  x++;
  
if(direction==0)
  y++;
  
if(direction==180)
  y--;
  
if(direction==270)
  x--;
//break

if(x>7)
  x=0;

if(y>7)
  y=0;
  
if(x<0)
  x=7;
  
if(y<0)
  y=7;
  
  
}

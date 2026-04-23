
#include "bat.h"
#include "Ball.h"
#include<SFML/Graphics.hpp>
#include<sstream>

int main(){
  VideoMode vm(1920,1080);
  RenderWindow window(vm,"Pong!!!");
  View view(FloatRect(0,0,1920,1080));
  window.setView(view);
  
  Bat bat(1920/2 , 1080-20);
  Ball ball(1920/2 , 0);
  int score = 0;
  bool coli = false;
  int lives = 3;
  Text hud;
  Font font;
  font.loadFromFile("font/KOMIKAP_.ttf");
  hud.setFont(font);
  hud.setCharacterSize(75);
  hud.setFillColor(Color::White);
  hud.setPosition(20,20);
  
  
  Clock clock;
  
  
 while(window.isOpen()){
    	Event event;
    	while(window.pollEvent(event)){
    		if(event.type==Event::Closed){
    		   window.close();
    		}
         }
         
         if(Keyboard::isKeyPressed(Keyboard::Escape)){ 
             window.close();
         }
    
    //Handle Player input
    if(Keyboard::isKeyPressed(Keyboard::Left)){
          bat.moveLeft();
    }else{
          bat.stopLeft();
    }
     if(Keyboard::isKeyPressed(Keyboard::Right)){
          bat.moveRight();
    }else{
          bat.stopRight();
    }
    
    //update Bat , Ball and Hud
    Time dt = clock.restart();
    bat.update(dt);
    ball.update(dt);
    std::stringstream ss;
    ss<<"Score: "<<score<<" Lives: "<<lives;
    hud.setString(ss.str());
    if(ball.getPosition().top>1080){
       ball.reboundBottom();
       lives--;
       if(lives<1){
         score = 0;
         lives=3;
       }
    }
     if(ball.getPosition().top<0){
        ball.reboundBatOrTop();
        coli = false;
    }
    
    if(ball.getPosition().left<0 || ball.getPosition().left+ball.getPosition().width>1920){
        ball.reboundSides();
    }
    
    if(ball.getPosition().intersects(bat.getPosition())&& coli == false){
       ball.reboundBatOrTop();
       score++;
       coli=true;
    }
    
    
    //Draw the things
    window.clear();
    window.draw(hud);
    window.draw(bat.getShape());
    window.draw(ball.getShape());
    window.display();
    
    }
   }

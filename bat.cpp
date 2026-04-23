#include "bat.h"
Bat::Bat(int st_x, int st_y){
m_Position.x = st_x;
m_Position.y = st_y;
m_Shape.setSize(Vector2f(100,5));
m_Shape.setPosition(m_Position);
}
FloatRect Bat::getPosition(){
return m_Shape.getGlobalBounds();
}
RectangleShape Bat::getShape(){
return m_Shape;
}
void Bat::moveLeft(){
 m_MovingLeft = true;
 }
void Bat::moveRight(){
 m_MovingRight = true;
 }
void Bat::stopLeft(){
m_MovingLeft = false;
}
void Bat::stopRight(){
m_MovingRight = false;
}
void Bat::update(Time dt){
 if(m_MovingLeft)
 if(m_Position.x>0)
 m_Position.x -= m_Speed*dt.asSeconds();
 
 if(m_MovingRight){
 if(m_Position.x<1820)
 m_Position.x += m_Speed*dt.asSeconds();
 }
m_Shape.setPosition(m_Position);
}

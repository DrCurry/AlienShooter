#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Alien.h"
#include "ofApp.h"

Alien::Alien()
{
    //ctor
}
void Alien::setAlien(float x,float y,float VelX,float VelY,char fileName[])
{
    alienX = x;
    alienY = y;
    alienVelX = VelX;
    alienVelY = VelY;
    enemy.loadImage(fileName);
}

void Alien::drawAndMove()
{   alienX = alienX+alienVelX;
    alienY = alienY+alienVelY;

    if((alienX<0)||(alienX>1366))
    {
        alienVelX = -1*alienVelX;
    }
    if((alienY<0)||(alienY>560))
    {
        alienVelY = -1*alienVelY;
    }
    enemy.draw(alienX,alienY);
}

Alien::~Alien()
{
    //dtor
}

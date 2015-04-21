#include "Shield.h"
#include "ofApp.h"

Shield::Shield()
{
    //ctor
}
void Shield::setShield(float x,float VelX,char fileName[])
{
    shieldX = x;
    shieldVelX = VelX;
    shield.loadImage(fileName);
}
void Shield::drawMoveShield()
{
    shieldX = shieldX+shieldVelX;

    if((shieldX<0)||(shieldX>1366))
    {
        shieldVelX = -1*shieldVelX;
    }
   /* if((shieldY<0)||(shieldY>768))
    {
        shieldVelY = -1*shieldVelY;

    }*/
    shield.draw(shieldX,561);
}
Shield::~Shield()
{
    //dtor
}

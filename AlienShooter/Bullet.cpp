#include "Bullet.h"
#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Alien.h"
#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Shield.h"
#include "ofApp.h"


Bullet::Bullet()
{
    //ctor
}

void Bullet::setBullet(float x,float y,float vely,char fileName[])
{
    bullX = x;
    bullY = y;
    bullVelY = vely;
    bullet.loadImage(fileName);
}

int Bullet::drawMoveTest(const Shield s[], const Alien a[],int numAliens,int numShields)
{
    int i;
    bullY = bullY + bullVelY;
    bullet.draw(bullX,bullY);
    for (i=0;i<numShields;i++)
    {
        if((bullY<s[i].shieldY+s[i].shield.height)&&(bullY+bullet.height>s[i].shieldY))
        {
            if(bullX<s[i].shieldX && bullX>s[i].shieldX+50);
            {
				bullY = 0-bullet.height;
            }
        }
    }

	for(i=0;i<numAliens;i++)
	{
		if ((bullX>a[i].alienX)&&(bullX<a[i].alienX+30))
			if((bullY<a[i].alienY)&&(bullY>a[i].alienY+36))
			{
				bullY = 0-bullet.height;

			}
	}
}
Bullet::~Bullet()
{
    //dtor
}


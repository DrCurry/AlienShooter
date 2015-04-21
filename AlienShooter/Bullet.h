#ifndef BULLET_H
#define BULLET_H
#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Alien.h"
#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Shield.h"
#include "ofApp.h"



class Bullet
{
    public:
        float bullX;
        float bullY;
        float bullVelY;
        void setBullet(float x,float y,float vely,char fileName[]);
        ofImage bullet;
        int drawMoveTest(const Shield s[], const Alien a[],int numAlien,int numShields);
        Bullet();
        virtual ~Bullet();
    protected:
    private:
};

#endif // BULLET_H

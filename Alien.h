#ifndef ALIEN_H
#define ALIEN_H
#include "ofApp.h"


class Alien
{
    public:
        float alienX;
        float alienY;
        float alienVelX;
        float alienVelY;
        ofImage enemy;
        void setAlien(float x,float y,float VelX,float VelY,char fileName[]);
        void drawAndMove();

        Alien();
        virtual ~Alien();
    protected:
    private:
};

#endif // ALIEN_H

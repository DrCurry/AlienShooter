#ifndef SHIELD_H
#define SHIELD_H
#include "ofApp.h"


class Shield
{
    public:
        float shieldX;
        float shieldY;
        float shieldVelX;
        float shieldVelY;
        ofImage shield;
        void setShield(float x,float VelX,char fileName[]);
        void drawMoveShield();
        Shield();
        virtual ~Shield();
    protected:
    private:
};

#endif // SHIELD_H

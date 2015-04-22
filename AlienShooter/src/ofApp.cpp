#include "ofApp.h"
#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Alien.h"
#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Shield.h"
#include "C:\OPENFRAMEWORKS\examples\empty\AlienShooter\Bullet.h"

#define MAXBULLETS 20
#define NumShield 6


Alien aliens[NumAliens];
Shield shields[NumShield];
Bullet bullets[MAXBULLETS];
int NumAliens  = 15;
int
int i;
int numBullets = NumAliens+5;
int bulletCounter;
ofImage spaceShip;
float clickX;
int MouseX;



//--------------------------------------------------------------
void ofApp::setup(){
    for(i=0;i<NumAliens;i++)
    {
        aliens[i].setAlien(100+50*i , i*i+10 ,1.2 ,i/13.5 , "alien.jpg");
    }
    for (i=0;i<NumShield;i++)
    {
        shields[i].setShield(150*i, 2.1 ,"shield.png");

    }
    bulletCounter=0;
spaceShip.loadImage("spaceShip.png");
}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    for(i=0;i<NumAliens;i++)
    {
        aliens[i].drawAndMove();
    }
    for(i=0;i<NumShield;i++)
    {
        shields[i].drawMoveShield();
    }
    for(i=0;i<bulletCounter;i++)
    {
        bullets[i].drawMoveTest(shields,aliens,NumAliens,NumShield);
    }
    for(int l=0;l<MAXBULLETS;l++)
    {
        bullets[l].drawMoveTest(shields,aliens,NumAliens,NumShield);

    }

spaceShip.draw(MouseX,630);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    MouseX = x;

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    clickX = x+50;
        bullets[bulletCounter].setBullet(clickX,700,-2.6,"bullet.png");
        bulletCounter++;
        if(bulletCounter==MAXBULLETS)
        {
            bulletCounter=0;
        }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

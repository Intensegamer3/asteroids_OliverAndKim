#define PLAY_IMPLEMENTATION
#define PLAY_USING_GAMEOBJECT_MANAGER
#define _USE_MATH_DEFINES
#pragma once
#include "Play.h"
#include <cmath>
#include <iostream>
#include "Asteroid.h"
#include "Ship.h"


int DISPLAY_WIDTH = 480;
int DISPLAY_HEIGHT = 640;
int DISPLAY_SCALE = 2;

int rando(int scope)//used for radomizing 
{
    int randomT = time(0);//time gives a seed for the randomizer, which is declared in srand, and used by rand.
    srand(randomT);
    return (rand() % (scope + 1));//modolus used to keep the number within the scope, returning from 0 to given int value
}

class RigidBody
{
protected:
    Play::Point2D pos;
    Play::Vector2D velo;
    Play::Vector2D acc;
    float radius;//half of size/from center to edge of sprite
    float rotation;//use radians


public:
    virtual void Simulate();//
    virtual void Collide()
    {
        if (pos.x >= DISPLAY_WIDTH + radius)
        {
            pos.x = 1 - radius;
        }
        if (pos.x <= 0 - radius)
        {
            pos.x = 1 - DISPLAY_WIDTH + radius;
        }
        if (pos.y >= DISPLAY_HEIGHT + radius)
        {
            pos.y = 1 - radius;
        }
        if (pos.y >= 0 - radius)
        {
            pos.y = 1 - DISPLAY_HEIGHT + radius;
        }
    }
    virtual void Draw();

};
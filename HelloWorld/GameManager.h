#define PLAY_IMPLEMENTATION
#define PLAY_USING_GAMEOBJECT_MANAGER
#include "Play.h"


int DISPLAY_WIDTH = 480;
int DISPLAY_HEIGHT = 640;
int DISPLAY_SCALE = 2;

class RigidBody
{
protected:
    Play::Point2D pos;
    Play::Point2D velo;
    float acc;
    float radius;//half of size/from center to edge of sprite
    float rotation;//use radians


public:
    virtual void Simulate() {}//
    virtual void Collide()
    {
        if (pos.x >= DISPLAY_WIDTH + radius * 2)
        {
            pos.x = 1 - radius * 2;
        }
        if (pos.x <= 0 - radius * 2)
        {
            pos.x = 1 - DISPLAY_WIDTH + radius * 2;
        }
        if (pos.y >= DISPLAY_HEIGHT + radius * 2)
        {
            pos.y = 1 - radius * 2;
        }
        if (pos.y >= 0 - radius * 2)
        {
            pos.y = 1 - DISPLAY_HEIGHT + radius * 2;
        }
    }
    virtual void Draw() {}

};
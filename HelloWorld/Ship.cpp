#include "Ship.h"



void Ship::Thrust(Play::Vector2D acceleration, Play::Vector2D currentVelocity, float currentRotation, float elapsedTime) {
	acceleration.x += thrust * sin(rotation) * elapsedTime;
	acceleration.y -= thrust * cos(rotation) * elapsedTime;
}

void Ship::Simulate(float elapsedTime) {
	if (Play::KeyDown(KEY_SPACE))
	{
		Thrust(acc, velo, rotation, elapsedTime);
	}

	pos += velo * elapsedTime;
	velo += acc * elapsedTime;

	acc.x = 0;
	acc.y = 0;
}

Ship::Ship() {
	shipSprite = "HelloWorld/Data/Sprites/ship.png";
	pos = { 0, DISPLAY_HEIGHT };
	rotation = 0;
	radius = 10;
	acc.x = 0;
	acc.y = 0;
	float thrust = 1;
};
Ship::~Ship() {

}
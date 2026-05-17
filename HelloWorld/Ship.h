#include "GameManager.h"

class Ship : RigidBody {
	float thrust;
	const char* shipSprite;

	void Thrust(Play::Vector2D acceleration, Play::Vector2D currentVelocity, float currentRotation, float elapsedTime);
	void Simulate(float elapsedTime);

	Ship();
	~Ship();

};
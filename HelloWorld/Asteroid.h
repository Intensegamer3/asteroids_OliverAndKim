#include "GameManager.h"

class Asteroid : RigidBody
{
	float scale;
	float rotSpeed;//how many degrees it 
	const char* png;
	void Simulate();
	void Draw();
public:
	Asteroid();
	~Asteroid();
};
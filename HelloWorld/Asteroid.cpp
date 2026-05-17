#pragma once
#include "Asteroid.h"


void Asteroid::Simulate()
{
	rotation += rotSpeed * (M_PI / 180);
	pos += velo;
}
void Asteroid::Draw()
{
	DrawSpriteRotated(png, pos, 0, rotation, scale);
}
Asteroid::Asteroid()
{
	png = "HelloWorld/Data/Sprites/asteroid.png";
	pos = { 0, DISPLAY_HEIGHT };
	rotation = 0;
	rotSpeed = (float)rando(6);
	scale = (float)rando(9)+1 / 10;
	radius = 14 * scale;
	acc.x = (float)rando(30)+1 / 10;
	acc.y = acc.x;
	float veloX = 0;
	float veloY = 0;
	do
	{
		veloX = (float)rando(2) - 1;
		veloY = (float)rando(2) - 1;
	} while (veloX == 0 && veloY == 0);
	velo = { veloX*acc.x, veloY*acc.y};

}
Asteroid::~Asteroid()
{

}

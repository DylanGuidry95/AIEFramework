#ifndef Base_H
#define Base_H
#include "Game1.h"
#include <string>

class Player;
class Enemy;
class Projectiles;
class Walls;

enum e_GameStates
{
	e_Init,
	e_Start,
	e_Update,
	e_Pause,
	e_Exit
};

enum e_ObjectStates
{
	e_Init,
	e_Idle,
	e_Move,
	e_Dead
};

class Base
{
public:
	float m_xPos; //Position the object is located at in game space on the X-Axis
	float m_yPos; //Position the object is located at in game space on the Y-Axis
	int m_sHeight; //Height of the sprite that represents the object it is assossciated with
	int m_sWidth; //Width of the sprite that represents the object it is assossciated with
	float m_Speed; //How fast the object can move around the screen
	std::string m_spriteName; //Name used to refrence object
};
#endif
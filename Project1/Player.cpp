#include "Player.h"

Player::Player(std::string a_Name,float a_xPos, float a_yPos, int a_Height, int a_Width, float a_speed)
{
	m_spriteName = a_Name;
	m_xPos = a_xPos;
	m_xPos = a_yPos;
	m_sHeight = a_Height;
	m_sWidth = a_Width;
	m_Speed = a_speed;
	objectImage = new Texture("./Images/Agent.png");
}

void Player::Draw()
{

}

void Player::Update(float a_dt)
{
	
}
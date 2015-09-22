#ifndef Player_H
#define Player_H
#include "BaseClass.h"


class Player : Base
{
private:
	Texture *objectImage;
public:
	Player(std::string, float, float, int, int, float);

	void Draw();

	void Update(float a_dt);
};
#endif
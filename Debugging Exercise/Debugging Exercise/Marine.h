#pragma once
#include "Entity.h"

class Marine : public Entity
{
public:
	Marine();
	~Marine();

	int attack();
	void takeDamage(int damage);

};


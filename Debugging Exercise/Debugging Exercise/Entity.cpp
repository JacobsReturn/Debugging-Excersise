#include "Entity.h"

Entity::Entity()
{
	health = 100;
	maxHealth = health;
}

int Entity::attack() { return 0; }
void Entity::takeDamage(int damage) {}

Entity::~Entity()
{
}

bool Entity::isAlive()
{
	return health == 0;
}

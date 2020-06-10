#pragma once
class Entity
{
public:
	Entity();
	~Entity();

	int health;
	int maxHealth;

	virtual int attack();
	virtual void takeDamage(int damage);
	bool isAlive();

//private:

};


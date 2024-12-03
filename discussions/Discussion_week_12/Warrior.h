#pragma once
#include "Character.h"

class Warrior : public Character
{
public:
	Warrior(const std::string& name);
	~Warrior()
	{
		Print(__FUNCTION__);

	}
	virtual void UseAbility() override;
private:

};


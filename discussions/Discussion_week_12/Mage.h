#pragma once
#include <string>
#include "Print_t.h"
#include "Character.h"

class Mage : public Character
{
public:
	Mage(const std::string& name);
	~Mage() {
		Print(__FUNCTION__);

	}
	virtual void UseAbility(Character* other) override;


};


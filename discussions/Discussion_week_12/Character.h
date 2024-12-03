#pragma once
#include <string>
#include "Print_t.h"

class Character
{
public:
	Character(const std::string& name, float health, float dmg);
	virtual ~Character()
	{
		Print(__FUNCTION__);

	}
	void DisplayStatus() const;

	void Attack(Character* other);
	void TakeDamage(float dmg);

	virtual void UseAbility(Character* other) { Print("base ability other"); }
	virtual void UseAbility() { Print("base ability self"); }

	//Character(const Character&) = delete;
	Character(Character&& other);

protected:
	std::string m_Name;
	float m_Health, m_Damage, m_Armor;
};


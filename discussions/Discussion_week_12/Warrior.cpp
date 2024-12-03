#include "Warrior.h"

Warrior::Warrior(const std::string& name)
	: Character(name, 10.0f, 2.0f)
{
	Print(__FUNCTION__);
	m_Armor = 2.0f;
}

void Warrior::UseAbility()
{
	Print("warrior ability");
	m_Armor += 2;
}

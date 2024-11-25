#include "Character.h"

Character::Character(const std::string& name, float health, float dmg)
	: m_Name(name), m_Health(health), m_Damage(dmg), m_Armor(0)
{
	Print(__FUNCTION__);

}

void Character::DisplayStatus() const
{
	Print(m_Name, " has ", m_Health, " health");
}

void Character::Attack(Character* other)
{
	Print(m_Name, " attacked ", other->m_Name);
	other->TakeDamage(m_Damage);
}

void Character::TakeDamage(float dmg)
{
	Print(m_Name, " took ", dmg - m_Armor, " damage");

	m_Health -= (dmg - m_Armor);
}

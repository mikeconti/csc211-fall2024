#include "Mage.h"

Mage::Mage(const std::string& name)
	: Character(name, 8.0f, 2.5f)
{
	Print(__FUNCTION__);

}

void Mage::UseAbility(Character* other)
{
	Print(m_Name, " used fireball!");
	other->TakeDamage(5.0f);
}

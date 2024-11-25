#include <iostream>
#include "Print_t.h"
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include <vector>

#include <memory>

// discussion 12
// By David Perrone

int main() 
{
	std::unique_ptr<Character> ptr_warrior = std::make_unique<Warrior>("David");
	std::shared_ptr<Character> ptr_mage = std::make_shared<Mage>("Bob");

	auto other = std::move(ptr_warrior);
	

	/*std::vector<Character*> charVec;

	Character* warrior = new Warrior("David");
	Character* mage = new Mage("David");

	charVec.push_back(warrior);
	charVec[0]->UseAbility();

	delete warrior;
	delete mage;*/

}
// Было: #include "HeroBuilder.h"
// Стало:
#include <iostream>
#include <string>
#include <list>
#include "../include/HeroBuilder.h"
#include "../include/CharacterBuilder.h"
#include "../include/Character.h"
#include "../include/Item.h"

Hero HeroBuilder::buildWizard() {
	Hero wizard = Hero("Gandalf the Grey", 30, 30, 100);
	wizard.addItem(MagicWand("Holy Stick", 90, 50.0f));
	wizard.addItem(Spellbook("Ancient Dictionary", 130, 50.0f));
	return wizard;
}

Hero HeroBuilder::buildRogue() {
	Hero rogue = Hero("Legolas", 30, 100, 30);
	rogue.addItem(Dagger("Poisoned Blade", 80, 45.0f));
	rogue.addItem(Bow("Bear Slayer", 45, 15.0f));
	return rogue;
}

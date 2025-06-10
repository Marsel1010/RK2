#include <iostream>
#include <string>
#include <list>
#include "../include/Character.h"
#include <iostream>

Hero::Hero(std::string name, int strength, int dexterity, int willpower) :
    name(name), strength(strength), dexterity(dexterity), willpower(willpower) {}

void Hero::addItem(Item item) {
    inventory.push_back(item);
}

void Hero::showItems() {
    std::cout << name << " Inventory: " << std::endl;
    for (auto& item : inventory) {
        item.printStats();
    }
}

#include <iostream>
#include <string>
#include <list>

#include "HeroBuilder.h"
#include "Character.h"

HeroBuilder::HeroBuilder()
    : name_(""), strength_(0), dexterity_(0), willpower_(0) {}

void HeroBuilder::setName(const std::string& name) {
    name_ = name;
}

void HeroBuilder::setStrength(int strength) {
    strength_ = strength;
}

void HeroBuilder::setDexterity(int dexterity) {
    dexterity_ = dexterity;
}

void HeroBuilder::setWillpower(int willpower) {
    willpower_ = willpower;
}

void HeroBuilder::addItem(const Item& item) {
    items_.push_back(item);
}

Hero HeroBuilder::build() {
    Hero hero(name_, strength_, dexterity_, willpower_);
    for (const auto& item : items_) {
        hero.addItem(item);
    }
    return hero;
}

// Конкретные сборки
Hero HeroBuilder::buildWarrior() {
    setName("Conan the Barbarian");
    setStrength(100);
    setDexterity(30);
    setWillpower(30);
    addItem(Item("Sword of Power", 150, 50.0f));
    addItem(Item("Shield of Resistance", 100, 30.0f));
    return build();
}

Hero HeroBuilder::buildWizard() {
    setName("Gandalf the Grey");
    setStrength(30);
    setDexterity(30);
    setWillpower(100);
    addItem(Item("Holy Stick", 90, 50.0f));
    addItem(Item("Ancient Dictionary", 130, 50.0f));
    return build();
}

Hero HeroBuilder::buildRogue() {
    setName("Legolas");
    setStrength(30);
    setDexterity(100);
    setWillpower(30);
    addItem(Item("Poisoned Blade", 80, 45.0f));
    addItem(Item("Bear Slayer", 45, 15.0f));
    return build();
}

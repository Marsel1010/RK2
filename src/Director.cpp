#include <iostream>
#include <string>
#include <list>

#include "Director.h"

void Director::setBuilder(CharacterBuilder* builder) {
    builder_ = builder;
}

Hero Director::constructWarrior() {
    builder_->setName("Generic Warrior");
    builder_->setStrength(80);
    builder_->setDexterity(60);
    builder_->setWillpower(50);
    builder_->addItem(Item("Basic Sword", 70, 20.0f));
    return builder_->build();
}

Hero Director::constructRogue() {
    builder_->setName("Generic Rogue");
    builder_->setStrength(50);
    builder_->setDexterity(90);
    builder_->setWillpower(40);
    builder_->addItem(Item("Short Dagger", 60, 15.0f));
    return builder_->build();
}

Hero Director::constructWizard() {
    builder_->setName("Generic Wizard");
    builder_->setStrength(40);
    builder_->setDexterity(50);
    builder_->setWillpower(100);
    builder_->addItem(Item("Simple Wand", 80, 30.0f));
    return builder_->build();
}

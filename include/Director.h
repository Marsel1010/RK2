#pragma once

#include "CharacterBuilder.h"

class Director {
public:
    void setBuilder(CharacterBuilder* builder);

    Hero constructWarrior();
    Hero constructRogue();
    Hero constructWizard();

private:
    CharacterBuilder* builder_;
};

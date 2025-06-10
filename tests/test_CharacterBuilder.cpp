#include <gtest/gtest.h>
#include "../include/CharacterBuilder.h"
#include "../include/Director.h"
#include "../include/HeroBuilder.h"

TEST(CharacterBuilderTest, BuildWithDirector) {
    HeroBuilder builder;
    Director director;
    director.setBuilder(&builder);

    Hero warrior = director.constructWarrior();

    EXPECT_EQ(warrior.getName(), "Generic Warrior");
    EXPECT_EQ(warrior.getInventorySize(), 1);
}

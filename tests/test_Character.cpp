#include <gtest/gtest.h>
#include "../include/Character.h"  // (Фактически содержит класс Hero)
#include "../include/Item.h"

TEST(HeroTest, ConstructorAndName) {
    Hero hero("Legolas", 30, 100, 30);
    EXPECT_EQ(hero.getName(), "Legolas");  // Проверяем имя
}

TEST(HeroTest, AddAndCountItems) {
    Hero hero("Gandalf", 30, 30, 100);
    Sword sword("Glamdring", 90, 50.0f);
    Spellbook book("Necronomicon", 200, 500.0f);
    
    EXPECT_EQ(hero.getInventorySize(), 0);  // Изначально пустой инвентарь
    
    hero.addItem(sword);
    EXPECT_EQ(hero.getInventorySize(), 1);  // Добавили меч
    
    hero.addItem(book);
    EXPECT_EQ(hero.getInventorySize(), 2);  // Добавили книгу
}

TEST(HeroTest, ShowItemsOutput) {
    Hero hero("Conan", 100, 30, 30);
    Shield shield("Dragon Shield", 80, 40.0f);
    hero.addItem(shield);
    
    // Проверяем вывод (можно использовать gMock для более сложных тестов)
    testing::internal::CaptureStdout();
    hero.showItems();
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_TRUE(output.find("Dragon Shield") != std::string::npos);  // Проверяем наличие названия в выводе
}

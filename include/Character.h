#ifndef _HERO_H_
#define _HERO_H_

#include "Item.h"
#include <list>
#include <string>
#include <string> // Добавим явное включение

class Hero
{
public:
    Hero(std::string name, int strength, int dexterity, int willpower);
    void showItems();
    void addItem(Item item);
    std::string getName() const { return name; } // Добавим метод getName
    int getInventorySize() const { return inventory.size(); } // Добавим для тестов
    
private:
    std::list<Item> inventory;
    int strength;
    int dexterity;
    int willpower;
    std::string name;
};

#endif /* _HERO_H_ */

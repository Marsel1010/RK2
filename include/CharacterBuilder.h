// include/CharacterBuilder.h
#ifndef _CHARACTERBUILDER_H_
#define _CHARACTERBUILDER_H_

#include "Character.h"
#include "Item.h"

class CharacterBuilder {
public:
    virtual void setName(const std::string& name) = 0;
    virtual void setStrength(int strength) = 0;
    virtual void setDexterity(int dexterity) = 0;
    virtual void setWillpower(int willpower) = 0;
    virtual void addItem(const Item& item) = 0;
    virtual Hero build() = 0;

    virtual ~CharacterBuilder() = default; // Важно для полиморфизма
};

#endif /* _CHARACTERBUILDER_H_ */

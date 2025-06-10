#ifndef _HEROBUILDER_H_
#define _HEROBUILDER_H_

#include "CharacterBuilder.h" // Теперь наследуемся от интерфейса

class HeroBuilder : public CharacterBuilder {
public:
    HeroBuilder();

    void setName(const std::string& name) override;
    void setStrength(int strength) override;
    void setDexterity(int dexterity) override;
    void setWillpower(int willpower) override;
    void addItem(const Item& item) override;
    Hero build() override;

    // Предопределённые методы
    Hero buildWarrior();
    Hero buildWizard();
    Hero buildRogue();

private:
    std::string name_;
    int strength_;
    int dexterity_;
    int willpower_;
    std::list<Item> items_;
};

#endif /* _HEROBUILDER_H_ */

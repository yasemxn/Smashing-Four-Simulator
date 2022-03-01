#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

#ifndef SMASHINGFOUR_HEADER_H
#define SMASHINGFOUR_HEADER_H


class Units{
protected:
    int chance;
    int attack;
    int HP;
    int maxHP;
    int defence;
public:
    Units();
    Units(int,int,int,int);//HP,Attack,Defence,Chance
    virtual void Attack(Units *ptr);
    virtual bool WarriorSpecialAttack(Units *ptr);
    virtual bool WizardSpecialAttack(Units *ptrArray[]);
    virtual bool HealerSpecialAttack( Units *ptrArray[]);

    int getChance() const;

    //void setChance(int chance);

    int getAttack() const;

    //  void setAttack(int attack);

    int getHp() const;

    void setHP(int HP);

    int getMaxHp() const;

    void setMaxHp(int maxHp);

    int getDefence() const;

    //  void setDefence(int defence);
};

class Warrior:public Units{

public:
    //It has a chance to attack twice on the same opponent
    Warrior();
    Warrior(int,int,int,int);
    void Attack (Units *ptr);
    bool WarriorSpecialAttack(Units *ptr);

    void setMaxHP(int);
    void setHP(int);
    void setAttack(int);
    void setDefence(int);
    void setChance(int);
};


class Defender:public Units{

public:
    //. Its health points are more than others. It has a chance to strike back after defending
    Defender();
    Defender(int,int,int,int);
    void Attack (Units *ptr);
    //  void SpecialAttack(Units *ptr);

    void setMaxHP(int);
    void setHP(int);
    void setAttack(int);
    void setDefence(int);
    void setChance(int);
};


class Wizard:public Units{

public:
    //. It has a chance to attack multiple opponents at the same time
    Wizard();
    Wizard(int,int,int,int);
    void Attack (Units *ptr);
    bool WizardSpecialAttack(Units *ptrArray[]);
    // void SpecialAttack(Units *ptr);

    void setMaxHP(int);
    void setHP(int);
    void setAttack(int);
    void setDefence(int);
    void setChance(int);
};


class Healer:public Units{

public:
    //It has a chance to heal its teammate 20% of teammate’s HP after attacking
    Healer();
    Healer(int,int,int,int);
    void Attack (Units *ptr);
    bool HealerSpecialAttack(Units *ptrArray[]);
    // void SpecialAttack(Units *ptr);

    void setMaxHP(int);
    void setHP(int);
    void setAttack(int);
    void setDefence(int);
    void setChance(int);
};


class Valhalla{
public:
    bool bringBack(std::vector<Units*>deathUnits, std::vector<std::string>deadNames);
};

class FireSpin{
public:
    bool PureDamage(Units *team1[],Units *team2[]);
};

class Aurora{
public:
    bool PureHeal(Units *team1[], Units *team2[]);
};

#endif //SMASHINGFOUR_HEADER_H



#include "header.h"

Units::Units() {
    maxHP=0;
    HP=0;
    attack=0;
    defence=0;
    chance=0;
}

Units::Units(int maxHP, int attack, int defence, int chance){

    this->maxHP=maxHP;
    this->attack=attack;
    this -> defence=defence;
    this->chance=chance;
}
void Units::Attack(Units *ptr){}

bool Units::HealerSpecialAttack( Units *ptrArray[]){}

bool Units::WarriorSpecialAttack(Units *ptr) {}

bool Units::WizardSpecialAttack(Units *ptrArray[]){}

int Units::getChance() const {
    return chance;
}



int Units::getAttack() const {
    return attack;
}


int Units::getHp() const {
    return HP;
}

void Units::setHP(int hp) {
    this->HP = hp;
    if(hp> this->maxHP){
        this->HP=this->maxHP;
    }
}

void Units::setMaxHp(int maxHp) {
    this->maxHP=maxHp;
}

int Units::getMaxHp() const {
    return maxHP;
}

int Units::getDefence() const {
    return defence;
}



Warrior::Warrior(){}

Warrior::Warrior(int maxHP, int attack, int defence, int chance):Units(maxHP,attack,defence,chance){
    setMaxHP(maxHP);
    setHP(maxHP);
    setAttack(attack);
    setDefence(defence);
    setChance(chance);


}

void Warrior::setMaxHP(int maxHP) {
    if(maxHP>=100 && maxHP<=250){
        this->maxHP=maxHP;
    }else{
        this-> maxHP=250;
    }
}


void Warrior::setHP(int HP) {
    this->HP = HP;
    if(HP> this->maxHP){
        this->HP=this->maxHP;
    }
}


void Warrior::setAttack(int attack) {
    if(attack>=30 && attack<=50){
        this->attack=attack;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Warrior::setDefence(int defence) {
    if(defence>=20 && defence<=30){
        this->defence=defence;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Warrior::setChance(int chance) {
    if(chance>=12 && chance<=16){
        this->chance=chance;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Warrior::Attack(Units *ptr){
    int x=ptr->getDefence();
    int y = this->attack;
    int z=ptr->getHp();
    int sum=z-y*(100.0/(100+x));
    ptr->setHP(sum);//(this->attack*(100/(100+(ptr->getDefence()))))
    if(ptr->getHp()<0){
        ptr->setHP(0);
    }
}


bool Warrior::WarriorSpecialAttack(Units *ptr) {
    int temp=rand()%100+1;
    if(temp<=this->chance){
        if(ptr->getHp()>0) {
            this->Attack(ptr);

            if (ptr->getHp() < 0) {
                ptr->setHP(0);
            }
            return true;
        }
    }else{
        return false;
    }
}

Defender::Defender(){}

Defender::Defender(int maxHP, int attack, int defence, int chance):Units(maxHP,attack,defence,chance){
    setMaxHP(maxHP);
    setHP(maxHP);
    setAttack(attack);
    setDefence(defence);
    setChance(chance);

}

void Defender::setHP(int HP) {
    this->HP = HP;
    if(HP> this->maxHP){
        this->HP=this->maxHP;
    }
}

void Defender::setMaxHP(int maxHP) {
    if(maxHP>=300 && maxHP<=600){
        this->maxHP=maxHP;
    }else{
        this-> maxHP=600;
    }
}


void Defender::setAttack(int attack) {
    if(attack>=15 && attack<=35){
        this->attack=attack;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Defender::setDefence(int defence) {
    if(defence>=50 && defence<=70){
        this->defence=defence;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Defender::setChance(int chance) {
    if(chance>=10 && chance<=13){
        this->chance=chance;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Defender::Attack(Units *ptr){
    int x=ptr->getDefence();
    int y = this->attack;
    int z=ptr->getHp();
    int sum=z-y*(100.0/(100+x));
    ptr->setHP(sum);//(this->attack*(100/(100+(ptr->getDefence()))))
    if(ptr->getHp()<0){
        ptr->setHP(0);
    }
}




Wizard::Wizard(){}

Wizard::Wizard(int maxHP, int attack, int defence, int chance):Units(maxHP,attack,defence,chance){
    setMaxHP(maxHP);
    setHP(maxHP);
    setAttack(attack);
    setDefence(defence);
    setChance(chance);

}

void Wizard::setHP(int HP) {
    this->HP = HP;
    if(HP> this->maxHP){
        this->HP=this->maxHP;
    }
}

void Wizard::setMaxHP(int maxHP) {
    if(maxHP>=90 && maxHP<=200){
        this->maxHP=maxHP;
    }else{
        this->maxHP=200;
    }
}


void Wizard::setAttack(int attack) {
    if(attack>=10 && attack<=30){
        this->attack=attack;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Wizard::setDefence(int defence) {
    if(defence>=15 && defence<=25){
        this->defence=defence;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Wizard::setChance(int chance) {
    if(chance>=12 && chance<=16){
        this->chance=chance;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Wizard::Attack(Units *ptr){
    int x=ptr->getDefence();
    int y = this->attack;
    int z=ptr->getHp();
    int sum=z-y*(100.0/(100+x));
    ptr->setHP(sum);//(this->attack*(100/(100+(ptr->getDefence()))))
    if(ptr->getHp()<0){
        ptr->setHP(0);
    }
}

bool Wizard::WizardSpecialAttack(Units *Array[]) {
    int temp=rand()%100+1;
    if(temp<=this->chance){
        for(int i=0; i<4; i++){
            if(Array[i]->getHp()>0){
                this->Attack(Array[i]);
            }if(Array[i]->getHp()<0){
                Array[i]->setHP(0);
            }
        }
        return true;
    }else{
        return false;
    }
}


Healer::Healer(){}

Healer::Healer(int maxHP, int attack, int defence, int chance):Units(maxHP,attack,defence,chance){
    setMaxHP(maxHP);
    setHP(maxHP);
    setAttack(attack);
    setDefence(defence);
    setChance(chance);


}
void Healer::setHP(int HP) {
    this->HP = HP;
    if(HP> this->maxHP){
        this->HP=this->maxHP;
    }
}

void Healer::setMaxHP(int maxHP) {
    if(maxHP>=100 && maxHP<=250){
        this->maxHP=maxHP;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Healer::setAttack(int attack) {
    if(attack>=10 && attack<=30){
        this->attack=attack;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Healer::setDefence(int defence) {
    if(defence>=15 && defence<=30){
        this->defence=defence;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Healer::setChance(int chance) {
    if(chance>=15 && chance<=23){
        this->chance=chance;
    }else{
        std::cout<<"invalid value"<<std::endl;
    }
}


void Healer::Attack(Units *ptr){
    int x=ptr->getDefence();
    int y = this->attack;
    int z=ptr->getHp();
    int sum=z-y*(100.0/(100+x));
    ptr->setHP(sum);//(this->attack*(100/(100+(ptr->getDefence()))))
    if(ptr->getHp()<0){
        ptr->setHP(0);
    }
}


bool Healer::HealerSpecialAttack(Units *Array[]) {
    int temp = rand() % 100 + 1;
    if (temp <= this->chance) {

        for(int i=0; i<4; i++){
            if(Array[i]->getHp()>0){
                Array[i]->setHP(Array[i]->getMaxHp() * 2 / 10 + Array[i]->getHp());
            }
        }
        return true;
    } else {
        return false;
    }
}

bool Valhalla::bringBack(std::vector<Units*>deadUnits, std::vector<std::string>deadNames) {
    if (rand() % 100 + 1 <= 5) {
        int size = deadUnits.size();
        int index = rand() % size + 0;
        deadUnits[index]->setHP(deadUnits[index]->getMaxHp() * (0.1));
        std::cout<<"Arena showed its effect!!! "<<std::endl;
        std::cout<<deadNames[index]<<" is back to game"<<std::endl;
        return true;
    }else{return false;}

    //unit pointer vectorü al. size kullanarak random birini canlandır.
}

bool FireSpin::PureDamage(Units *team1[], Units *team2[]){
    if (rand() % 100 + 1 <= 10){
        for(int i=0; i<4; i++){
            if(team1[i]->getHp()>0) {
                team1[i]->setHP(team1[i]->getHp() - 20);
            }
        }
        for(int i=0; i<4; i++){
            if(team2[i]->getHp()>0) {
                team2[i]->setHP(team2[i]->getHp() - 20);
            }
        }
        return true;
    }else{return false;}
}

bool Aurora::PureHeal(Units *team1[], Units *team2[]) {
    if (rand()%100 + 1 <= 10){
        for (int i = 0; i<4; i++){
            if(team1[i]->getHp()>0){
                team1[i]->setHP(team1[i]->getHp()+10);
            }
        }
        for(int i=0; i<4; i++){
            if(team2[i]->getHp()>0) {
                team2[i]->setHP(team2[i]->getHp() + 10);
            }
        }
        return true;
    }else{ return false;}
}

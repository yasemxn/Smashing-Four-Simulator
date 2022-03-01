#include <iostream>
#include "header.h"
#include <cstdlib>
#include <ctime>


void turnOrder(int array[]){
    array[0]=rand()%3+0;

    array[1]=rand()%3+0;
    while(array[1]==array[0]){
        array[1]=rand()%3+0;
    }

    array[2]=rand()%3+0;
    while(array[2]==array[0] ||array[2]==array[1]){
        array[2]=rand()%3+0;
    }
    array[3]=6-array[0]-array[1]-array[2];
}





int main() {
    srand((unsigned) time(0));


    std::cout<<"**********WELCOME TO SMASHING FOUR.**********"<<std::endl;
    std::cout<<"\nThere is 4 types of character you can choose: Warrior, Defender, Wizard, Healer"<<std::endl;
    std::cout<<"\nChose your team, player 1: "<<std::endl;


    std::string team1Names[4];
    int numOrder[4];



    std::string team2Names[4];
    int numOrder2[4];


    for(int i=0; i<4; i++){
        std::cin>>team1Names[i];
    }

    turnOrder(numOrder);

    Units *team1[4];
    Units *team2[4];


    if(team1Names[numOrder[0]]=="Warrior"){
        Warrior wa0(250,30,24,13);
        team1[0]=&wa0;
    }else if(team1Names[numOrder[0]]=="Defender"){
        Defender d0(600,35,65,13);
        team1[0]=&d0;
    }else if(team1Names[numOrder[0]]=="Wizard"){
        Wizard wi0(150,30,20,12);
        team1[0]=&wi0;
    }else if(team1Names[numOrder[0]]=="Healer"){
        Healer h0(200,12,18,15);
        team1[0]=&h0;
    }


    if(team1Names[numOrder[1]]=="Warrior"){
        Warrior wa1(155,35,24,13);
        team1[1]=&wa1;
    }else if(team1Names[numOrder[1]]=="Defender"){
        Defender d1(550,25,55,12);
        team1[1]=&d1;
    }else if(team1Names[numOrder[1]]=="Wizard"){
        Wizard wi1(180,25,24,12);
        team1[1]=&wi1;
    }else if(team1Names[numOrder[1]]=="Healer"){
        Healer h1(200,18,20,15);
        team1[1]=&h1;
    }

    if(team1Names[numOrder[2]]=="Warrior"){
        Warrior wa2(120,46,25,13);
        team1[2]=&wa2;
    }else if(team1Names[numOrder[2]]=="Defender"){
        Defender d2(450,30,70,11);
        team1[2]=&d2;
    }else if(team1Names[numOrder[2]]=="Wizard"){
        Wizard wi2(190,25,20,12);
        team1[2]=&wi2;
    }else if(team1Names[numOrder[2]]=="Healer"){
        Healer h2(240,20,25,16);
        team1[2]=&h2;
    }


    if(team1Names[numOrder[3]]=="Warrior"){
        Warrior wa3(230,30,24,15);
        team1[3]=&wa3;
    }else if(team1Names[numOrder[3]]=="Defender"){
        Defender d3(510,35,60,13);
        team1[3]=&d3;
    }else if(team1Names[numOrder[3]]=="Wizard"){
        Wizard wi3(180,30,20,12);
        team1[3]=&wi3;
    }else if(team1Names[numOrder[3]]=="Healer"){
        Healer h3(250,25,18,15);
        team1[3]=&h3;
    }




    std::cout<<"\nChose your team, player 2: "<<std::endl;

    for(int i=0; i<4; i++){
        std::cin>>team2Names[i];
    }


    turnOrder(numOrder2);


    if(team2Names[numOrder2[0]]=="Warrior"){
        Warrior wa20(250,30,24,13);
        team2[0]=&wa20;
    }else if(team2Names[numOrder2[0]]=="Defender"){
        Defender d20(600,25,50,11);
        team2[0]=&d20;
    }else if(team2Names[numOrder2[0]]=="Wizard"){
        Wizard wi20(100,30,25,12);
        team2[0]=&wi20;
    }else if(team2Names[numOrder2[0]]=="Healer"){
        Healer h20(240,25,18,15);
        team2[0]=&h20;
    }


    if(team2Names[numOrder2[1]]=="Warrior"){
        Warrior wa21(250,30,24,13);
        team2[1]=&wa21;
    }else if(team2Names[numOrder2[1]]=="Defender"){
        Defender d21(560,18,55,10);
        team2[1]=&d21;
    }else if(team2Names[numOrder2[1]]=="Wizard"){
        Wizard wi21(95,30,20,12);
        team2[1]=&wi21;
    }else if(team2Names[numOrder2[1]]=="Healer"){
        Healer h21(210,24,25,15);
        team2[1]=&h21;
    }

    if(team2Names[numOrder2[2]]=="Warrior"){
        Warrior wa22(150,50,20,13);
        team2[2]=&wa22;
    }else if(team2Names[numOrder2[2]]=="Defender"){
        Defender d22(600,30,65,12);
        team2[2]=&d22;
    }else if(team2Names[numOrder2[2]]=="Wizard"){
        Wizard wi22(150,30,22,12);
        team2[2]=&wi22;
    }else if(team2Names[numOrder2[2]]=="Healer"){
        Healer h22(200,12,18,15);
        team2[2]=&h22;
    }


    if(team2Names[numOrder2[3]]=="Warrior"){
        Warrior wa23(250,30,24,13);
        team2[3]=&wa23;
    }else if(team2Names[numOrder2[3]]=="Defender"){
        Defender d23(600,34,60,10);
        team2[3]=&d23;
    }else if(team2Names[numOrder2[3]]=="Wizard"){
        Wizard wi23(150,30,20,12);
        team2[3]=&wi23;
    }else if(team2Names[numOrder2[3]]=="Healer"){
        Healer h23(200,30,26,16);
        team2[3]=&h23;
    }

    std::cout<<"There is 4 different Arena: Casual, Aurora, Valhalla, FireSpin "<<std::endl<<"Choose an Arena: "<<std::endl;
    std::string arenaName;
    std::cin>>arenaName;

    std::cout<<"TEAM1: "<<std::endl;
    for(int i=0; i<4; i++){
        std::cout<<i+1<<"=> Name: "<< team1Names[numOrder[i]] <<"     HP: "<<team1[i]->getMaxHp()<<"   Attack: "<<team1[i]->getAttack()
                 <<"   Defence: "<<team1[i]->getDefence()<<"   Chance: "<<team1[i]->getChance()<<std::endl;}




    std::cout<<"\nTEAM2: "<<std::endl;
    for(int i=0; i<4; i++){
        std::cout<<i+1<<"=>Name: "<< team2Names[numOrder2[i]] <<"     HP: "<<team2[i]->getMaxHp()<<"   Attack: "<<team2[i]->getAttack()
                 <<"   Defence: "<<team2[i]->getDefence()<<"   Chance: "<<team2[i]->getChance()<<std::endl;}


    std::cout<<"You will play in "<<arenaName<<" arena"<<std::endl;

    std::cout<<"\n*****GAME STARTS!!*****"<<std::endl;

    std::vector<Units*>deadUnits;
    std::vector<std::string>deadNames;

    int round=1;
    int x= rand()%2+1;
    if(x==1){
        std::cout<<"Team1 will start"<<std::endl;
        while((team1[0]->getHp()>0 || team1[1]->getHp()>0 || team1[2]->getHp()>0 || team1[3]->getHp()>0) && (team2[0]->getHp()>0 || team2[1]->getHp()>0 || team2[2]->getHp()>0 || team2[3]->getHp()>0)){

            int index=0;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            int temp;//the number teams choose to attack
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[0]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence()))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                    if(index==4){
                        index=0;
                    }
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            std::cin>>temp;
            int i=0;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[0]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[0]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int)( team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }


            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;

            index=1;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            temp;//the number teams choose to attack
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[1]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                    if(index==4){
                        index=0;
                    }
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            std::cin>>temp;
            i=1;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[1]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[1]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;if(i==4){
                        i=0;
                    }
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }


            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;

            index=2;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            temp;//the number teams choose to attack
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[2]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                    if(index==4){
                        index=0;
                    }
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            std::cin>>temp;
            i=2;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[2]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[2]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;
                    if(i==4){
                        i=0;
                    }
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }


            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;

            index=3;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            temp;//the number teams choose to attack
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[3]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int)(team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                    if(index==4){
                        index=0;
                    }
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            std::cin>>temp;
            i=3;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[3]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[3]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;
                    if(i==4){
                        i=0;
                    }
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence()))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }


            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;
        }
    }
    if(x==2){
        while((team1[0]->getHp()>0 || team1[1]->getHp()>0 || team1[2]->getHp()>0 || team1[3]->getHp()>0) && (team2[0]->getHp()>0 || team2[1]->getHp()>0 || team2[2]->getHp()>0 || team2[3]->getHp()>0)){

            int index=0;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            int temp;
            std::cin>>temp;
            int i=0;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[0]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[0]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;
                    if(i==4){
                        i=0;
                    }
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }
            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[0]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }
            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;

            index=1;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            std::cin>>temp;
            i=1;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[0]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[0]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;
                    if(i==4){
                        i=0;
                    }
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }
            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[0]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                    if(index==4){
                        index=0;
                    }
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }
            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;

            index=2;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            std::cin>>temp;
            i=2;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[0]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[0]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;
                    if(i==4){
                        i=0;
                    }
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }
            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[0]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                    if(index==4){
                        index=0;
                    }
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int)( team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }
            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;

            index=3;
            std::cout<<"======ROUND"<<round<<"====="<<std::endl;

            std::cout<<"Team2, choose an opponent from Team1 to attack: "<<std::endl;
            std::cin>>temp;
            i=3;//index for player 2

            if(team2[i]->getHp() >0){

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[0]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability! Attacks to "<< team1Names[numOrder[0]]<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder[i]]<<" used its special ability! "<<std::endl;

                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }
            }else{

                while(team2[i]->getHp()==0){
                    i++;
                    if(i==4){
                        i=0;
                    }
                }

                while(team1[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team2[i]->Attack(team1[temp-1]);
                std::cout<<"\n" <<team2Names[numOrder2[i]]<<" attacks to "<<team1Names[numOrder[temp-1]]<<"!"<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;

                if(team1[temp-1]->getHp()<=0){
                    std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team1[temp-1]);
                    deadNames.push_back(team1Names[numOrder[temp-1]]);
                }

                if(team2Names[numOrder2[i]]=="Warrior"){
                    if(team2[i]->WarriorSpecialAttack(team1[temp-1])){
                        std::cout<<team2Names[numOrder2[index]]<<" used its special ability! Attacks to "<<team1Names[numOrder[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[temp-1]->getDefence())))<<std::endl;
                        if(team1[temp-1]->getHp()<=0){
                            std::cout<<team1Names[numOrder[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[temp-1]);
                            deadNames.push_back(team1Names[numOrder[temp-1]]);
                        }
                    }
                }else if(team2Names[numOrder2[i]]=="Wizard"){

                    if(team2[i]->WizardSpecialAttack(team1)){
                        std::cout<<team2Names[numOrder2[1]]<<" used its special ability! "<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team1[i]->getHp()>0){
                                std::cout <<"Attacks to "<<team1Names[numOrder[j]]<<" Damage: "<<(int)(team2[i]->getAttack()*(100.0/(100+team1[j]->getDefence())))<<std::endl;

                                if(team1[j]->getHp()<=0){
                                    std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team1[j]);
                                    deadNames.push_back(team1Names[numOrder[j]]);
                                }
                            }
                        }
                    }

                }else if(team2Names[numOrder2[i]]=="Healer"){

                    if(team2[i]->HealerSpecialAttack(team2)){
                        std::cout<<team2Names[numOrder2[i]]<<" used its special ability!"<<std::endl;
                        for(int j=0; j<4; j++){
                            if(team2[j]->getHp()>0){
                                std::cout<<"Healed "<<team2Names[numOrder2[j]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team1Names[numOrder[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 <= team1[i]->getChance()) {
                        team1[temp - 1]->Attack(team2[i]);
                        std::cout << "Defender strikes back! " << team2Names[numOrder2[i]] << " got "
                                  << (int) (team1[temp - 1]->getAttack() * (100.0 / (100 + team2[i]->getDefence())))
                                  << " damage" << std::endl;
                        if(team2[i]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[i]);
                            deadNames.push_back(team2Names[numOrder2[i]]);
                        }
                    }
                }

            }
            std::cout<<"Team1, choose an opponent from Team2 to attack: "<<std::endl;
            std::cin>>temp;


            if(team1[index]->getHp() >0){

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[0]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacked to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;
                            }
                            if(team2[temp-1]->getHp()<=0){
                                std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team2[i]);
                                deadNames.push_back(team2Names[numOrder2[i]]);
                            }
                        }

                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<<std::endl;
                        for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender") {
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int)( team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }
            }else{

                while(team1[index]->getHp()==0){
                    index++;
                    if(index==4){
                        index=0;
                    }
                }

                while(team2[temp-1]->getHp()==0){
                    std::cout<<"This opponent is already dead. Choose another opponent!"<<std::endl;
                    std::cin>>temp;
                }

                team1[index]->Attack(team2[temp-1]);
                std::cout<<"\n" <<team1Names[numOrder[index]]<<" attacks to "<<team2Names[numOrder2[temp-1]]<<"!"<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;

                if(team2[temp-1]->getHp()<=0){
                    std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                    deadUnits.push_back(team2[temp-1]);
                    deadNames.push_back(team2Names[numOrder2[temp-1]]);
                }

                if(team1Names[numOrder[index]]=="Warrior"){
                    if(team1[index]->WarriorSpecialAttack(team2[temp-1])){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! Attacks to "<<team2Names[numOrder2[temp-1]]<<" again!"
                                 <<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[temp-1]->getDefence())))<<std::endl;
                        if(team2[temp-1]->getHp()<=0){
                            std::cout<<team2Names[numOrder2[temp-1]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team2[temp-1]);
                            deadNames.push_back(team2Names[numOrder2[temp-1]]);
                        }
                    }
                }else if(team1Names[numOrder[index]]=="Wizard"){

                    if(team1[index]->WizardSpecialAttack(team2)){
                        std::cout<<team1Names[numOrder[1]]<<" used its special ability! "<< std::endl;
                        for(int i=0; i<4; i++){
                            if(team2[i]->getHp()>0){
                                std::cout<<"Attacks to "<<team2Names[numOrder2[i]]<<" Damage: "<<(int)(team1[index]->getAttack()*(100.0/(100+team2[i]->getDefence())))<<std::endl;

                                if(team2[i]->getHp()<=0){
                                    std::cout<<team2Names[numOrder2[i]]<<" is dead"<<std::endl;
                                    deadUnits.push_back(team2[i]);
                                    deadNames.push_back(team2Names[numOrder2[i]]);
                                }
                            }
                        }
                    }

                }else if(team1Names[numOrder[index]]=="Healer"){

                    if(team1[index]->HealerSpecialAttack(team1)){
                        std::cout<<team1Names[numOrder[index]]<<" used its special ability! "<< std::endl; for(int i=0; i<4; i++){
                            if(team1[i]->getHp()>0){
                                std::cout<<"Healed "<<team1Names[numOrder[i]]<<" by 20% "<<std::endl;
                            }
                        }
                    }

                }else if(team2Names[numOrder2[temp-1]]=="Defender"){
                    if (rand() % 100 + 1 < team2[temp - 1]->getChance()) {
                        if(team1[index]->getHp()>0) {
                            team2[temp - 1]->Attack(team1[index]);
                            std::cout << "Defender strikes back! " << team1Names[numOrder[index]] << " got "<< (int) (team2[temp - 1]->getAttack() *(100.0 / (100 + team1[index]->getDefence())))
                                      << " damage" << std::endl;

                            if(team1[index]->getHp()<=0){
                                std::cout<<team1Names[numOrder[index]]<<" is dead"<<std::endl;
                                deadUnits.push_back(team1[index]);
                                deadNames.push_back(team1Names[numOrder[index]]);
                            }

                        }
                    }
                }

            }
            if(arenaName=="Valhalla"){
                Valhalla v;
                v.bringBack(deadUnits, deadNames);
            }else if(arenaName=="Aurora"){
                Aurora a;
                if(a.PureHeal(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        std::cout<<team1Names[numOrder[j]]<<" gained 10 HP"<<std::endl;
                    }for(int j=0; j<4; j++){
                        std::cout<<team2Names[numOrder2[j]]<<" gained 10 HP"<<std::endl;
                    }
                }
            }else if(arenaName=="FireSpin"){
                FireSpin f;
                if(f.PureDamage(team1,team2)){
                    std::cout<<"Arena showed its effect!!! "<<std::endl;
                    for(int j=0; j<4; j++){
                        if(team1[j]->getHp()>0) {
                            std::cout << team1Names[numOrder[j]] << " got 20 damage" << std::endl;
                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                    for(int j=0; j<4; j++){
                        if(team2[j]->getHp()>0) {
                            std::cout << team2Names[numOrder2[j]] << " got 20 damage" << std::endl;

                        }
                        if(team1[j]->getHp()<=0){
                            std::cout<<team1Names[numOrder[j]]<<" is dead"<<std::endl;
                            deadUnits.push_back(team1[j]);
                            deadNames.push_back(team1Names[numOrder[j]]);
                        }
                    }
                }
            }

            std::cout<<"\nTEAM 1: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team1Names[numOrder[j]]<< " Current HP: "<< team1[j]->getHp()<<std::endl;
            }

            std::cout<<"\nTEAM 2: "<<std::endl;
            for(int j=0; j<4; j++){
                std::cout<<j+1 <<"=>"<<team2Names[numOrder2[j]]<< " Current HP: "<< team2[j]->getHp()<<std::endl;
            }

            round++;
        }
    }
    if(team1[0]->getHp()==0, team1[1]->getHp()==0,team1[2]->getHp()==0, team1[3]->getHp()==0){
        std::cout<<"\nTeam2 won!!!! Congrats!"<<std::endl;
    }else{
        std::cout<<"Team1 won!!!! Congrats!"<<std::endl;
    }

    return 0;
}

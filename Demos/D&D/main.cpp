#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

class weapon {

public:
    weapon() {}; // Default constructor
    random_device rand;

    double calcSwordDamage() {
        return rand.;
    }

    double calcFlameDamage() {
        return 35 + rand() % 45;
    }
};

class characherClass{
private:
    char charType;
    double health;
    int dex, stren, armor;
    weapon weap; //Aggrate member - declared on stack

public:
    characherClass(){};
    characherClass(char ct, double health, int dex, int stren,int armor) // Knight constructor
        :charType(ct), health(health), dex(dex), stren(stren), armor(armor){}// Initialization section

    characherClass(char ct, double health, int dex, int stren) // Dragon Constructor
        :charType(ct), health(health), dex(dex), stren(stren){}

    void setHealth(double health){this->health = health;}
    double getHealth(){ return this->health;}

    double calcDefence(){

        if (charType == 'k')
            return dex+armor+rand()%11; //Knights defence
        else
            return dex+rand()%16; //Dragon defence
    }

    double calcAttack(){

        if (charType == 'k')
            return weap.calcSwordDamage() + dex + stren; //Knights attack
        else
            return weap.calcFlameDamage() + dex + stren; //Dragon attack
    }

    string die(){

        if (charType == 'k')
            return "Dragon Won - Yay for evil"; //Knights attack
        else
            return "Knight Won - Huzzah"; //Dragon attack
    }

};



int main() {
    double defence, attack, damage;
    int ran;
    srand(time(0));

    //Instance game characters - NOTE not using new

    characherClass Knight('k', 300, 30, 20, 20);
    characherClass Dragon('d', 300, 20, 10);

    cout << "The battle begins!" << endl;

    cout << "Press any key to continue" << endl;
    //_getch();

    //Combat routine
    do{
        ran = rand()%2; // 0-k, 1=d

        if(ran == 0){ //Knight attcking

            defence = Dragon.calcDefence();
            attack = Knight.calcAttack();
            damage = attack - defence;

            if (defence > attack){ //No magic zombies
                damage = 0;
            }

            Dragon.setHealth(Dragon.getHealth() - damage);

            cout << "Knight hit for " << damage << endl;
            cout << "Dragon has " << Dragon.getHealth() << " hp left" << endl;
        }

        else{
            defence = Knight.calcDefence();
            attack = Dragon.calcAttack();
            damage = attack - defence;

            if (defence > attack){ //No magic zombies
                damage = 0;
            }

            Knight.setHealth(Knight.getHealth() - damage);

            cout << "Dragon hit for " << damage << endl;
            cout << "Knight has " << Knight.getHealth() << " hp left" << endl;
        }
    } while(Knight.getHealth() > 0 && Dragon.getHealth() > 0);

    if(Knight.getHealth() <=0 ){
        cout << Knight.die() << endl;
    }
    else{
        cout << Dragon.die() << endl;
    }



    return 0;
}
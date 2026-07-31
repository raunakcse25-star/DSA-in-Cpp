#include <stdio.h>
int main()
{
    struct pokemon // user define data type
    { 
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D
    };
    struct pokemon pikachu;

    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d" ,pikachu.attack );

    struct pokemon charizad;
    charizad.attack = 130;
    charizad.hp = 80;
    charizad.speed = 80;
     charizad.tier = 'S';

    return 0;
}

#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace std;

int main()
{
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"flame thrower", "scary face"};
    list<string> chikoritaAttacks {"razor leaf", "poison powder"};

    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));
}

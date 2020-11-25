#include <iostream>
#include "Pikachu.hpp"
#include "Pokemon.hpp"
#include "Psyduck.hpp"
#include "Jigglypuff.hpp"

int main(){
    Pokemon pokemon("Pokemon1", 30, 40, 23, 15);
    pokemon.print();
    
    Pikachu pikachu("Pikachu", 35, 55, 40, 90, 50, 50);
    pikachu.print();
    
    Psyduck psyduck("Psyduck", 50, 52, 48, 55, 65, 50);
    psyduck.print();
     
    Jigglypuff jigglypuff("Jigglypuff", 115, 45, 20, 20, 45, 25);
    jigglypuff.print();
    
    return 0;
}

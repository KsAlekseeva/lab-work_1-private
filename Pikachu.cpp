#include <iostream>
#include "Pikachu.hpp"
#include <fstream>
using namespace std;

void Pikachu::print() {
    std::ofstream out("hello.txt", std::ios::app);
    if (out.is_open()){ 
        out << "<" << "pokemons" << ">" << "\n" << "\t" << "<" << "pokemon name= " << "\"" << getPokemonName() << "\""
        << ">" << "\n" << "\t\t" << "<" << "hp" << ">" << getPokemonHP() << "</" << "hp" << ">" << "\n" << "\t\t" 
        << "<" << "attack" << ">" << getPokemonAttack() << "</" << "attack" << ">" << "\n" << "\t\t" << "<" << "defense" << 
        ">" << getPokemonDefense() << "</" << "defense" << ">" << "\n" << "\t\t" << "<" << "speed" << ">" << getPokemonSpeed() <<
        "</" << "speed" << ">" << "\n" << "\t\t" << "<" << "special attack" << ">" << m_PikachuSpecialAttack << "</" << "special attack" << 
        ">" << "\n" << "\t\t" << "<" << "special defense" << ">" << m_PikachuSpecialDefense << "</" << "special defense" << ">" << "\n" << 
        "\t" << "</" << "pokemon" << ">" << std::endl;    
    }
}
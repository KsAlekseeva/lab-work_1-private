#include <iostream>
#include "Jigglypuff.hpp"
#include <fstream>
using namespace std;

void Jigglypuff::print() {
    std::ofstream out("hello.txt", std::ios::app);
    if (out.is_open()){ 
        out << "\t" << "<" << "pokemon name= " << "\"" << getPokemonName() << "\""
        << ">" << "\n" << "\t\t" << "<" << "hp" << ">" << getPokemonHP() << "</" << "hp" << ">" << "\n" << "\t\t" 
        << "<" << "attack" << ">" << getPokemonAttack() << "</" << "attack" << ">" << "\n" << "\t\t" << "<" << "defense" << 
        ">" << getPokemonDefense() << "</" << "defense" << ">" << "\n" << "\t\t" << "<" << "speed" << ">" << getPokemonSpeed() <<
        "</" << "speed" << ">" << "\n" << "\t\t" << "<" << "special attack" << ">" << m_JigglypuffSpecialAttack << "</" << "special attack" << 
        ">" << "\n" << "\t\t" << "<" << "special defense" << ">" << m_JigglypuffSpecialDefense << "</" << "special defense" << ">" << "\n" << 
        "\t" << "</" << "pokemon" << ">" << "\n" << "</" << "pokemons" << ">" << std::endl;    
    }
}
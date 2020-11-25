#include <iostream>
#include "Psyduck.hpp"
#include <fstream>
using namespace std;

void Psyduck::print() {
    std::ofstream out("hello.txt", std::ios::app);
    if (out.is_open()){ 
        out << "\t" << "<" << "name= " << "\"" << getPokemonName() << "\""
        << ">" << "\n" << "\t\t" << "<" << "hp" << ">" << getPokemonHP() << "</" << "hp" << ">" << "\n" << "\t\t" 
        << "<" << "attack" << ">" << getPokemonAttack() << "</" << "attack" << ">" << "\n" << "\t\t" << "<" << "defense" << 
        ">" << getPokemonDefense() << "</" << "defense" << ">" << "\n" << "\t\t" << "<" << "speed" << ">" << getPokemonSpeed() <<
        "</" << "speed" << ">" << "\n" << "\t\t" << "<" << "special attack" << ">" << m_PsyduckSpecialAttack << "</" << "special attack" << 
        ">" << "\n" << "\t\t" << "<" << "special defense" << ">" << m_PsyduckSpecialDefense << "</" << "special defense" << ">" << "\n" << 
        "\t" << "</" << "pokemon" << ">" << std::endl;    
    }
}
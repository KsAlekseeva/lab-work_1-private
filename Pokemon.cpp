#include "Pokemon.hpp"
#include <iostream>
#include <fstream>
Pokemon::Pokemon() {
}
Pokemon::Pokemon (std::string l_pokemonName) {
    m_pokemonName = l_pokemonName;
}
Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
}
Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
    m_pokemonAttack = l_pokemonAttack;
}
Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefense) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
    m_pokemonAttack = l_pokemonAttack;
    m_pokemonDefense = l_pokemonDefense;
}
Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefense, int l_pokemonSpeed) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
    m_pokemonAttack = l_pokemonAttack;
    m_pokemonDefense = l_pokemonDefense;
    m_pokemonSpeed = l_pokemonSpeed;
}

Pokemon::~Pokemon() {
}

void Pokemon::setPokemonName(std::string l_pokemonName) {
    m_pokemonName = l_pokemonName;
}
void Pokemon::setPokemonHP (int l_pokemonHP) {
     m_pokemonHP = l_pokemonHP;
}
void Pokemon::setPokemonAttack (int l_pokemonAttack) {
     m_pokemonAttack = l_pokemonAttack;
}
void Pokemon::setPokemonDefense (int l_pokemonDefense) {
     m_pokemonDefense = l_pokemonDefense;
}
void Pokemon::setPokemonSpeed (int l_pokemonSpeed) {
     m_pokemonSpeed = l_pokemonSpeed;
}

void Pokemon::print(){
    std::ofstream out("hello.txt", std::ios::trunc);
    out.open("hello.txt");
    if (out.is_open())
        {     
            out << "Pokemon_name: " << m_pokemonName << std::endl;
            out << "Pokemon_HP: " << m_pokemonHP << std::endl;
            out << "Pokemon_Attack: " << m_pokemonAttack << std::endl;
            out << "Pokemon_Defense: " << m_pokemonDefense << std::endl;
            out << "Pokemon_Speed: " << m_pokemonSpeed << std::endl;
        }
}


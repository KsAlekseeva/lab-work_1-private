#pragma once 
#include "Pokemon.hpp"

class Pikachu : protected Pokemon{
    private:
    int m_PikachuSpecialAttack;
    int m_PikachuSpecialDefense;
    
    public:
    Pikachu (std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack,int l_pokemonDefense, int l_pokemonSpeed, int l_PikachuSpecialAttack, int l_PikachuSpecialDefense)
    {
           m_pokemonName = l_pokemonName;
           m_pokemonHP = l_pokemonHP;
           m_pokemonAttack = l_pokemonAttack;
           m_pokemonDefense = l_pokemonDefense;
           m_pokemonSpeed = l_pokemonSpeed;
           m_PikachuSpecialAttack = l_PikachuSpecialAttack;
           m_PikachuSpecialDefense = l_PikachuSpecialDefense;
    };
    void print();
    
};
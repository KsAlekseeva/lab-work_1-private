#pragma once 
#include "Pokemon.hpp"

class Jigglypuff : protected Pokemon{
    private:
    int m_JigglypuffSpecialAttack;
    int m_JigglypuffSpecialDefense;
    
    public:
    Jigglypuff (std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack,int l_pokemonDefense, int l_pokemonSpeed, int l_JigglypuffSpecialAttack, int l_JigglypuffSpecialDefense)
    {
           m_pokemonName = l_pokemonName;
           m_pokemonHP = l_pokemonHP;
           m_pokemonAttack = l_pokemonAttack;
           m_pokemonDefense = l_pokemonDefense;
           m_pokemonSpeed = l_pokemonSpeed;
           m_JigglypuffSpecialAttack = l_JigglypuffSpecialAttack;
           m_JigglypuffSpecialDefense = l_JigglypuffSpecialDefense;
    };
    void print();
    
};
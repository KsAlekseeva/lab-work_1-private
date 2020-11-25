#pragma once 
#include "Pokemon.hpp"

class Psyduck : protected Pokemon{
    private:
    int m_PsyduckSpecialAttack;
    int m_PsyduckSpecialDefense;
    
    public:
    Psyduck (std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack,int l_pokemonDefense, int l_pokemonSpeed, int l_PsyduckSpecialAttack, int l_PsyduckSpecialDefense)
    {
           m_pokemonName = l_pokemonName;
           m_pokemonHP = l_pokemonHP;
           m_pokemonAttack = l_pokemonAttack;
           m_pokemonDefense = l_pokemonDefense;
           m_pokemonSpeed = l_pokemonSpeed;
           m_PsyduckSpecialAttack = l_PsyduckSpecialAttack;
           m_PsyduckSpecialDefense = l_PsyduckSpecialDefense;
    };
    void print();
    
};
#pragma once
#include <string>

using namespace std;

class Pokemon {
    protected:
        std::string m_pokemonName;
        int m_pokemonHP;
        int m_pokemonAttack;
        int m_pokemonDefense;
        int m_pokemonSpeed;

    public:
        Pokemon();
        Pokemon(std::string l_pokemonName);
        Pokemon(std::string l_pokemonName, int l_pokemonHP);
        Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack);
        Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefense);
        Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefense, int l_pokemonSpeed);
        ~Pokemon();
        
    void setPokemonName(std::string m_pokemonName);
    void setPokemonHP(int m_pokemonHP);
    void setPokemonAttack(int m_pokemonAttack);
    void setPokemonDefense(int m_pokemonDefense);
    void setPokemonSpeed(int m_pokemonSpeed);

    std::string getPokemonName() { return m_pokemonName;}
    int getPokemonHP() { return m_pokemonHP;}
    int getPokemonAttack() { return m_pokemonAttack;}
    int getPokemonDefense() { return m_pokemonDefense;}
    int getPokemonSpeed() { return m_pokemonSpeed;}
    
    void print();
};










// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum class EnemyType {
    Warrior,
    Sorcerer,
    GELATINA,
    COUNT,
    INVALID
};

struct Enemy {
    int m_health;
    EnemyType type;
};

bool operator==(const Enemy& enemy1, const Enemy& enemy2) {
    return enemy1.type == enemy2.type && enemy1.m_health == enemy2.m_health;
}


Enemy operator+(const Enemy& enemy1, const Enemy enemy2) {
    bool isEnemy1Gelatina = (enemy1.type == EnemyType::GELATINA);
    bool isEnemy2Gelatina = (enemy2.type == EnemyType::GELATINA);
    Enemy result;
    result.type = EnemyType::INVALID;
    result.m_health = 100;
    //Si tuviera legs tambien las inicializaria
    if (enemy1.type == enemy2.type) {
        std::cout << "Enemy que sea la suma de nums y legs" << std::endl;
        result.type = EnemyType::GELATINA;
        result.m_health = enemy1.m_health + enemy2.m_health;
        //Y si tuviera un int legs lo pondria aqui

    }
    return result;
}

int main()
{
    Enemy e1;
    e1.type = EnemyType::GELATINA;
    e1.m_health = 60;
    Enemy e2;
    e2.type = EnemyType::GELATINA;
    e2.m_health = 50;
    bool isEqual = e1 == e2;
    std::string frase = isEqual? "true" : "false";
    std::cout << frase << std::endl;
    
    Enemy e3;
    e3 = e1 + e2;
    std::cout << e3.m_health << std::endl;
}
//Caso 1: Functions -> 2 enemies Sobrecargar el operador de ==

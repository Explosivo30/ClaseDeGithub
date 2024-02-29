// Sctructs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum class EnemyType {
    WARRIOR,
    SORCERER,
    COUNT,
    INVALID
};

struct Enemy {
    int m_health = 1000;
    EnemyType m_enemyType = EnemyType::INVALID;

    //Method Constructor
    Enemy(int health, EnemyType enemyType)
    {
        m_health = health;
        m_enemyType = enemyType;
    }

    void receiveDamage(int damageAmount) {
        if (m_enemyType == EnemyType::WARRIOR) {
            m_health -= damageAmount;
            std::cout << "Warrior health is now " << m_health;
        }
        else{
            
            std::cout << "Sorcerer health is now " << m_health;
        }        
    }

    Enemy(int health) {
        m_health = health;
    }

};

Enemy* initCop() {
    Enemy* e5 = new Enemy(1700);
    return e5;//Devuelvo la copia de los datos
}

int main()
{
    Enemy e1(500,EnemyType::WARRIOR);
    Enemy e2(1200,EnemyType::SORCERER);
    //e1.m_health = 500;
    //e1.m_enemyType = EnemyType::WARRIOR;
    e1.receiveDamage(500);
    Enemy e3(500);//Solo para inicializar la vida
   
    //HEAP ALLOCATION PARA LLEVARLO YO Y NO EL STACK
    Enemy* e4 = new Enemy(1700);

    Enemy* enemies[5];
    
    int nums[5]{ 5,6,4,3,2 };
    for (Enemy* i : enemies) {
        (i)->m_health;
        std::cout << i->m_health << std::endl;
    }
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

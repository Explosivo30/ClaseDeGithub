// ProyectoGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FicheroDev.h"

//COUNT AT THE END TO KNOW HOW LARGE IS THE ENUM COUNT-- == LENGHT OF ENUM ARRAY
enum class Weapon
{
    FISTS,
    GUN,
    SHOTGUN,
    REVOLVER,
    BOW,
    COUNT
};

enum class Outfit {
    BOW,
    SUIT,
    COUNT
};
int BOW = 1924;
enum class Color {
    RED,
    BLUE,
    GREEN,
    YELLOW,
    COUNT
};

int main()
{
    //TypeSafety
    //casting to int
    //Scope resolution operator ::
    Weapon::REVOLVER; //Revolver de Weapon

    //Siqueremos comparar los ints hemos de hacerlo nosotros
    if (static_cast<int>(Outfit::BOW) == static_cast<int>(Weapon::BOW)) {
        std::cout << "BUG: REVOLVER and YELLOW are the same, even tho they belong to diferent enums, not typesafe! " << std::endl;
    }

    

}


void PointersClass() {
    //Pointers


   //Declare value
    int myInteger = 9;
    int myInteger2 = 10;
    //Assign address to pointer
    int* aPointer;
    aPointer = &myInteger;
    std::cout << "Value of my integer is: " << myInteger << std::endl;
    std::cout << "Adress of my integer is: " << &myInteger << std::endl;
    std::cout << "Value of myInteger access to pointer: " << *aPointer << std::endl;
    std::cout << "Value of pointer: " << aPointer << std::endl;
    std::cout << "Address where value of pointer is stored: " << &aPointer << std::endl;

    // nullptr;
    aPointer = &myInteger2;
    std::cout << "Value of myInteger access to pointer: " << *aPointer << std::endl;

    int myArray[4] = { 10,20,30,40 };
    //Hay 2 formas de usar un puntero para una Array
    //int* pointerToArray = &myArray[0];
    int* pointerToArray2 = myArray;

    //Iterar con arrays usando indices
    for (int i = 0; i < 4; ++i) {//por ahora esto es igual que i++
        std::cout << myArray[i] << std::endl;

    }
    std::cout << "------------------------------" << std::endl;
    //Post incremento y pre incremento
    //
    int i2 = 0;
    std::cout << myArray[i2] << std::endl;

    std::cout << "------------------------------" << std::endl;
    //Post increment
    std::cout << myArray[i2++] << std::endl;

    //Pre increment
    //std::cout << myArray[++i2] << std::endl;

    std::cout << "------------------------------" << std::endl;

    //2da forma de iterar con punteros
    for (int i = 0; i < 4; ++i) {
        std::cout << *pointerToArray2 << std::endl;
        ++pointerToArray2;
        //std::cout << *(myArray + i) << std::endl;//Esta es otra forma no muy comun de hacerlo
    }

    std::cout << "------------------------------" << std::endl;

    //for based range loop
    for (int& element : myArray) {//Sin el & hace una copia, con el & lo pasa por referencia y puedes modificarlos
        //Primera iteracion element = 10
        //Segunda iteracion element = 20
        //Tercera iteracion element = 30
        //Ultima iteracion element = 40
        //Codigo
        std::cout << element << std::endl;
        //Final

    }

    //ENUM VS ENUM CLASS
    //enum fruits
    // enum class fruits
    // no castea a int con las frutas por lo que puede existir naranja color y fruta a la vez
    // 
    //

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

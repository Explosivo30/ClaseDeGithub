// ProyectoGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FicheroDev.h"

int main()
{
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
    int* pointerToArray = myArray;

    //Iterar con arrays usando punteros


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

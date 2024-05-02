// JurassicPark.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"


int main()
{
    Car c1;
    Car c2;
    
    Car c3(5, 2, "Ferrari", false); //Abstraction Principle
    Car c4(3);
    std::cout << c1.GetColor() << std::endl;
    c1.SetColor(10);
}

//When main Finishes c1,c2,c3,c4 are destroyed

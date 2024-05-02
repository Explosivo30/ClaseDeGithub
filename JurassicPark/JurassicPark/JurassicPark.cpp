// JurassicPark.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h> 
#include "Park.h"

int main()
{
    float dimX;
    std::cin >> dimX;
    float dimY;
    std::cin >> dimY;

    int numScientists;
    int numDynosaurs;
    int numVehicles;
    std::cin >> numScientists >> numDynosaurs >> numVehicles;

    Park park(dimX, dimY, numScientists, numDynosaurs, numVehicles);

    const int NUM_FPS = 5;

    while (true)
    {
        // TODO: Finish implementing game loop
        park.Update();
        park.Print();

        Sleep(1000 / NUM_FPS);
    }
}

// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include "MyList.h"

int main()
{
    std::list<float> l1;
    

    l1.push_front(10);
    l1.push_back(20);
    l1.push_front(5);
    l1.pop_back();
    l1.push_back(27);



    //Solo en este caso se permite auto y no esta super linea
    // La superlinea se tendra que escribir en el examen
    //std::list<float>::iterator it = l1.begin();
    auto it = l1.begin();

    for (; it != l1.end(); ++it) {
        std::cout << *it << "<->";
    }
    
    std::cout << std::endl;


    MyList myL1;
    myL1.Insert(myL1.Front(), 7);
    myL1.Insert(myL1.Front(), 6);
    myL1.Insert(myL1.Front(), 3);
    myL1.ReversePrint();



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

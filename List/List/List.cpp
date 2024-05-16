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

    //Advance
    Node* nodeAtSecondPosition = myL1.Advance(2);
    std::cout << nodeAtSecondPosition->m_value << std::endl;

    //Erase

    myL1.Erase(nodeAtSecondPosition);
    myL1.Erase(myL1.Back());

    myL1.ReversePrint();
}


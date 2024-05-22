// SetAndMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <unordered_map>

#include<set>
#include<unordered_set>
int main()
{
    //CRUD
    //CREATE
    /*
    std::unordered_map<int, std::string> map1;
    map1.emplace(5, "Manish");
    map1.emplace(916, "Jordi");
    map1.emplace(5899, "Norman");
    //No puedo tener claves repetidas
    map1.emplace(5899, "Nor");
    //map1[5899] = "Nor"; no usar esto para cambiar nada si pones un numero que no toca creas una key sin nada que guardar
    map1.insert(map1.begin(), std::pair<int, std::string>(10, "juan"));

    std::unordered_map<int, std::string>::iterator it = map1.find(7);

    if (it == map1.end()) 
    {
        //We have not found the key
        map1.emplace(7, "Raul");
    }
    else
    {
        //We have found the key
        map1.emplace("Tommy");
    }

    map1.erase(5899);

    std::unordered_map<std::string, std::string> map2;
    std::unordered_map < std::string, std::vector<int>> map3;




    for (const std::pair<int, std::string> keyValue : map1)
    {
        std::cout << keyValue.first << " " << keyValue.second << std::endl;
    }
    */

    //CRUD - CREATE
    std::cout << "PROBLEMA1" << std::endl;
    std::set<int> mySetOfInts;
    mySetOfInts.insert(10);
    mySetOfInts.insert(-594);
    mySetOfInts.insert(4);
    mySetOfInts.insert(74);

    std::set<std::string> mySetOfStrings;
    mySetOfStrings.insert("Orange");
    mySetOfStrings.insert("Peer");
    mySetOfStrings.insert("Watermelon");
    mySetOfStrings.insert("Orange");

    //For base-ranged loop
    for (std::string s : mySetOfStrings) 
    {
        std::cout << s << std::endl;
    }
    std::cout << "PROBLEMA2" << std::endl;
    std::string s1 = "murcielago";
    std::string s2 = "ordenador";

    std::unordered_set<char> mySetOfChars;

    for (int i = 0; i < s2.size(); ++i)
    {
        mySetOfChars.insert(s2[i]);
    }

    std::unordered_set<char>::iterator itSet = mySetOfChars.begin();

    while (itSet != mySetOfChars.end())
    {
        std::cout << *itSet << std::endl;
        ++itSet;
    }

    for (char c : s1)
    {
        std::unordered_set<char>::iterator itSet2 = mySetOfChars.begin(c);
        if (itSet2 != mySetOfChars.end())
        {
            std::cout << c << " ";
        }
        //s1.find(s1);
    }

    std::cout << std::endl;

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

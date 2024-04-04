// Sorting C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

bool compareFunc(int& a, int& b) {
    
    return a < b;
}

bool compareSize(std::string& a, std::string& b) {
    return a.size() < b.size();
}

int main()
{
    std::vector<int> v = { 55,10,15,5 };
    std::sort(v.begin(), v.end(),compareFunc);

    std::vector<std::string> words = { "Zebra", "Banana", "Carrot", "Limao" };

    std::sort(words.begin(), words.end(),compareSize);

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
        
    }


    std::cout << std::endl;

    for (int i = 0; i < v.size(); i++) {
        std::cout << words[i] << " ";

    }

}


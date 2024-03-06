// Sorting Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

int posMin(std::vector<int>& v, int left, int right) {
    int minIndex = left;
    for (int i = left + 1; i <= right; ++i) {
        if (v[i] < v[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}


void selectionSort(std::vector<int>& v) {
    int last = v.size() -1;
    for (int i = 0; i < last; ++i) {
        int minIndex = posMin(v, i, last);
        swap(v[minIndex], v[i]);
    }
}

int main()
{
    //SORTING ALGORITHM
    // 3 10 7 -1 0
    std::vector<int> v = { 3,-1, 10,200 };
    selectionSort(v);
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;


}

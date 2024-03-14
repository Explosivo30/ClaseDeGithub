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

void InsertionSort(std::vector<int>& v) {
    for (int i = 1; i < v.size(); ++i) {
        //Element to evaluate
        int x = v[i];

        //Comparing  previous ordered elements
        int j = i;

        while (j>0 && v[j-1] > x)
        {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = x;
    }

}

void bubbleSort(std::vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}


int main()
{
    //SORTING ALGORITHM
    // 3 10 7 -1 0
    std::vector<int> v = { 3,-1, 10,200 };
    std::cout << "Selection sort result: " << std::endl;
    selectionSort(v);
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;

    //Inserting sorting algorithm

    std::cout << "Insertion sort result: " << std::endl;
    std::vector<int> v2 = { 3,-1, 10,210 };

    InsertionSort(v2);
    for (int i = 0; i < v2.size(); ++i) {
        std::cout << v2[i] << " ";
    }

    //Bubble Sort

    std::cout << "Bubble Sort" << std::endl;
    //bubbleSort(v3);

    //Merge sorting algorithm

    //ESTOS NO ENTRAN EN EL EXAMEN
    //
    //QUICK SORT
    //HEAP SORT


}

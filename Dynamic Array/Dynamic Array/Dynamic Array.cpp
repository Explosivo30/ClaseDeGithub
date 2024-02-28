// Dynamic Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int numRows, numColumns;

    std::cin >> numRows;
    std::cin >> numColumns;

    int** my2DArray;//Esto se guarda en el stack

    //Las arrays interiores van al heap

    //El new pide espacio en memoria
    my2DArray = new int* [numRows];

    for (int i = 0; i < numRows; i++) {
        my2DArray[i] = new int[numColumns];//inicializa el puntero de la primera fila que he creado
    }

    for (int i = 0; i < numRows; i++) {
        delete[] my2DArray[i];
    }

    //Borrar my2dArray de la memoria RAM
    delete[] my2DArray;
    //Borrar puntero del stack
    my2DArray = nullptr;

}

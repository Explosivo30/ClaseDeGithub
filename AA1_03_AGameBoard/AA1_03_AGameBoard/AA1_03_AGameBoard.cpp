// AA1_03_AGameBoard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"GameBoard.h"
#define NUM_ROWS 40
#define NUM_COLUMNS 40

int main()
{    

    Board board[NUM_COLUMNS][NUM_ROWS];
    //Luego la llenamos
    initializeBoard(NUM_COLUMNS, NUM_ROWS, **board);
    
    
    std::cout << "Hello World!\n";
}


void initializeBoard(int colums, int rows, Board **board) {

    int totalTiles = colums * rows;

    int stones = totalTiles * 0.2f;

    int coins = totalTiles * 0.3f;


    for (int i = 0; i < colums; ++i) {
        for (int j = 0; i < rows; i++) {
            //INITIALIZE BOARD
        }
    }
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

// AA1_03_AGameBoard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"GameBoard.h"
#define NUM_ROWS 40
#define NUM_COLUMNS 40
#include <ctime>
#include <cstdlib>

int main()
{    
    srand(time(NULL));
    Board** board = new Board*[NUM_ROWS];
    Player player;
    player.money = 0;


    for (int i = 0; i < NUM_ROWS; i++) {
        board[i] = new Board[NUM_COLUMNS];
    }

    //Luego la llenamos
    initializeBoard(NUM_COLUMNS, NUM_ROWS, board, player);
    
    
    std::cout << "Hello World!\n";


    //DELETE CODE
    //When we end we delete the pointers of the heap

    for (int i = 0; i < NUM_ROWS; i++) {
        delete[] board[i];
    }

    //Delete form ram
    delete[] board;

    board = nullptr;


}


void initializeBoard(int colums, int rows, Board **board,Player player) {

    int totalTiles = colums * rows;

    int stones = totalTiles * 0.2f;//20 % max

    int coins = totalTiles * 0.3f;//30% max;

    stones = rand() % stones;

    coins = rand() % coins;

    int randomX = rand() % rows;
    int randomY = rand() % colums;

    player.x = randomX;
    player.y = randomY;

    for (int i = 0; i < colums; ++i) {
        for (int j = 0; i < rows; i++) {
            //std::cout <<board[i][j];
            if (i == randomX && j == randomY) {
                board[i][j].jugador = true;
            }
            else
            {
                //If random this block will have objects entered
                if (rand() % 2 == 0)
                {
                    //choose between both objetcs with a random
                    int fill = rand() % 2;

                    if (fill == 0 && stones >= 0) {          
                        board[i][j].piedras = true;
                        stones--;
                    }
                    else if(fill == 1 && coins >= 0)
                    {
                        board[i][j].monedas = true;
                        coins--;
                    }
                }
            }

        }
    }
}


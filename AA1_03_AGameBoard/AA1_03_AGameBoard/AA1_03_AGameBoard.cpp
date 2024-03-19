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
    initializeBoard(NUM_ROWS, NUM_COLUMNS, board, player);
    
    checkMovement(player, Movement::UP);
    
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


void initializeBoard(int colums, int rows, Board** board, Player& player) {

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

                    if (fill == 0 && stones > 0) {
                        board[i][j].piedras = true;
                        stones--;
                    }
                    else if (fill == 1 && coins > 0)
                    {
                        board[i][j].monedas = true;
                        coins--;
                    }
                }
            }

        }
    }
}



bool checkMovement(Player& pos, Movement move) {

    switch (move)
    {

    case Movement::UP:
        if (pos.x > 0 ) {
            pos.lastMove = move;// Si el movimiento hacia arriba no lleva al jugador fuera del tablero
            return true;
        }
            
        break;
    case Movement::DOWN:
        if (pos.x < NUM_ROWS - 1) // Si el movimiento hacia abajo no lleva al jugador fuera del tablero
        {
            pos.lastMove = move;// Si el movimiento hacia arriba no lleva al jugador fuera del tablero
            return true;
        }
            
        break;
    case Movement::LEFT:
        if (pos.y > 0) // Si el movimiento hacia la izquierda no lleva al jugador fuera del tablero
        {
            pos.lastMove = move;// Si el movimiento hacia arriba no lleva al jugador fuera del tablero
            return true;
        }
        break;
    case Movement::RIGHT:
        if (pos.y < NUM_COLUMNS - 1) // Si el movimiento hacia la derecha no lleva al jugador fuera del tablero
        {
            pos.lastMove = move;// Si el movimiento hacia arriba no lleva al jugador fuera del tablero
            return true;
        }
        break;
    default:
        return false;
        break;
    }
    

    return false;
}

void addScore(Player& player) {
    player.score++;
}

void setPos(Player& player, Board** board) {
    //En que i and j esta que es x e y
    if (player.lastMove == Movement::UP) {
        if (board[player.x][player.y - 1].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.y -= 1;
            board[player.x][player.y].jugador = true;
            
        }
    }
    else if (player.lastMove == Movement::DOWN) {
        if (board[player.x][player.y + 1].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.y += 1;
            board[player.x][player.y].jugador = true;

        }
    }
    else if (player.lastMove == Movement::LEFT) {
        if (board[player.x -1][player.y].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.x -= 1;
            board[player.x][player.y].jugador = true;

        }
    }
    else if (player.lastMove == Movement::RIGHT) {
        if (board[player.x +1][player.y].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.y += 1;
            board[player.x][player.y].jugador = true;

        }
    }
}


bool existCoins(Board** board, Player& player) {
    if (board[player.x][player.y].monedas == true) {
        return true;
    }
    
    return false;
}

// AA1_03_AGameBoard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"GameBoard.h"
#define NUM_ROWS 5
#define NUM_COLUMNS 5
#include <ctime>
#include <cstdlib>

int main()
{    
    srand(time(NULL));
    Board** board = new Board*[NUM_ROWS];
    Player player;
    
    


    for (int i = 0; i < NUM_ROWS; i++) {
        board[i] = new Board[NUM_COLUMNS];
    }

    //Luego la llenamos
    initializeBoard(NUM_ROWS, NUM_COLUMNS, board, player);
    
    char currentMove;
    while (true) {
        
        std::cin >> currentMove;
        std::cout << player.x << " " << player.y;
        system("pause");
        if (currentMove == 'a') {
            //std::cout << checkMovement(player, Movement::LEFT);
            if (checkMovement(player, Movement::LEFT)) {
                setPos(player, board);
            }
        }else if (currentMove == 'd') {
            if (checkMovement(player, Movement::RIGHT)) {
                setPos(player, board);
            }
        }
        else if (currentMove == 'w') {
            if (checkMovement(player, Movement::UP)) {
                setPos(player, board);
            }
        }
        else if (currentMove == 's') {
            if (checkMovement(player, Movement::DOWN)) {
                setPos(player, board);
            }
        }

        printBoard(board);

    }

    
    //checkMovement(player, Movement::UP);
    
    //std::cout << "Hello World!\n";


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

    stones = rand() % (stones+1);

    coins = rand() % (coins+1);

    int randomX = rand() % NUM_ROWS;
    int randomY = rand() % NUM_COLUMNS;

    player.x = randomX;
    player.y = randomY;

    std::cout << player.x << " " << player.y << std::endl;
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLUMNS; j++) {
            board[i][j].jugador = false;
            board[i][j].monedas = false;
            board[i][j].piedras = false;
        }
    }


    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLUMNS; j++) {

            if (i == player.x && j == player.y) {
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
            pos.lastMove = move;
            return true;
        }
            
        break;
    case Movement::LEFT:
        if (pos.y > 0) // Si el movimiento hacia la izquierda no lleva al jugador fuera del tablero
        {
            pos.lastMove = move;
            return true;
        }
        break;
    case Movement::RIGHT:
        if (pos.y < (NUM_COLUMNS - 1)) // Si el movimiento hacia la derecha no lleva al jugador fuera del tablero
        {
            pos.lastMove = move;
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
        //std::cout << board[player.x][player.y - 1].piedras;
        if (board[player.x - 1][player.y ].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.x -= 1;
            movePlayer(player, board);
        }
    }
    else if (player.lastMove == Movement::DOWN) {
        if (board[player.x + 1][player.y ].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.x += 1;
            movePlayer(player, board);
        }
    }
    else if (player.lastMove == Movement::LEFT) {
        if (board[player.x ][player.y - 1].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.y -= 1;
            movePlayer(player, board);
        }
    }
    else if (player.lastMove == Movement::RIGHT) {
        if (board[player.x ][player.y + 1].piedras == false) {
            board[player.x][player.y].jugador = false;
            player.y += 1;
            movePlayer(player,board);
        }
    }
}


bool existCoins(Board** board, Player& player) {
    if (board[player.x][player.y].monedas == true) {
        return true;
    }
    
    return false;
}

void movePlayer(Player& player, Board** board) {
    board[player.x][player.y].jugador = true;

}


bool gameOver(Board** board) {
    int coins = 0;
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLUMNS; j++) {
            if (board[i][j].monedas == true) {
                coins++;
            }
        }
    }

    if (coins == 0) {
        return true;
    }

    return false;
}


void printBoard(Board** board) {
    system("cls");

    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLUMNS; j++) {
            if (board[i][j].jugador == true) {
                std::cout << " J ";
            }
            else if (board[i][j].piedras == true) {
                std::cout << " P ";
            }
            else if (board[i][j].monedas == true) {
                std::cout << " M ";
            }
            else
            {
                std::cout << " X ";
            }
        }
        std::cout << std::endl;
    }

    
}
#pragma once

enum class Movement {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

struct Board
{
    bool piedras = false;
    bool monedas = false;
    bool jugador = false;

};

struct Player
{
    int x;
    int y;
    int money;
    int score;
    Movement lastMove;
};

void initializeBoard(int colums, int rows, Board** board, Player& player);


bool checkMovement(Player& pos, Movement move);

void addScore(Player& player);

void setPos(Player& player, Board** board);

bool existCoins(Board** board, Player& player);

void movePlayer(Player& player, Board** board);

bool gameOver(Board** board);

void printBoard(Board** board);




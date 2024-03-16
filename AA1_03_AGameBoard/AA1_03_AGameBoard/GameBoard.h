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
};

void initializeBoard(int colums, int rows, Board** board, Player player);
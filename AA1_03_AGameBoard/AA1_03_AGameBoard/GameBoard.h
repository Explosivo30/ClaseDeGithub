#pragma once

enum class Movement {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

struct Board
{
    bool piedras;
    bool monedas;
    bool jugador;

};

struct Player
{
    int x;
    int y;
    int money;
};

void initializeBoard(int colums, int rows, Board board);
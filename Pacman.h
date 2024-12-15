#ifndef PACMAN_H
#define PACMAN_H
#include "Map.h"

class Pacman {
private:
    int x, y;
    int dx, dy;
    int pontos;
    Map map;
    int vidas;
    bool canMove(int dx, int dy);

public:
    Pacman(Map& Map);
    int getX() const;
    int getY() const;
    int getPontos() const;
    int getVidas() const;
    void move();
    void perderVidas();
    void handleInput(int input);
};

#endif 

#ifndef GHOST_H
#define GHOST_H

#include "Map.h"
#include <cstdlib>
#include <ctime>
#include <curses.h>

class Ghost {
private:
    int x, y;
    char appearance;
    Map* map;
    bool canMove(int dx, int dy);
    void move(int dx, int dy);

public:
    Ghost(int startX, int startY, char appearance, Map* gameMap);
    void moveGhost();
    void draw() const;
    int getX() const;
    int getY() const;
};

#endif



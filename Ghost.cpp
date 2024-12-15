#include "Ghost.h"

Ghost::Ghost(int startX, int startY, char appearance, Map* gameMap)
    : x(startX), y(startY), appearance(appearance), map(gameMap) {
    srand(static_cast<unsigned>(time(0)));
}


bool Ghost::canMove(int dx, int dy) {
    char cell = map->getCell(dx, dy);
    return (cell != '#');
}


void Ghost::move(int dx, int dy) {
    if (canMove(x + dx, y + dy)) {
        x += dx;
        y += dy;
    }
}
void Ghost::moveGhost() {
    for (int attempt = 0; attempt < 4; ++attempt) {
        int direction = rand() % 4;
        if (direction == 0) {
            move(-1, 0);
        }
        else if (direction == 1) {
            move(1, 0);
        }
        else if (direction == 2) {
            move(0, -1);
        }
        else if (direction == 3) {
            move(0, 1);
        }
    }
}
void Ghost::draw() const {
    attron(COLOR_PAIR(2));  // Ativa o par de cores 2 (vermelho para fantasmas)
    mvprintw(y, x, "%c", appearance);
    attroff(COLOR_PAIR(2)); // Desativa o par de cores 2
}

int Ghost::getX() const {
    return x;
}

int Ghost::getY() const {
    return y;
}
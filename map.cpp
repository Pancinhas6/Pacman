#include "Map.h"
#include <curses.h>

Map::Map(const std::vector<std::string>& layout)
    : layout(layout) {
    height = layout.size();
    width = height > 0 ? layout[0].size() : 0;
}

void Map::draw() const {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            mvprintw(y, x, "%c", layout[y][x]);
        }
    }
}

char Map::getCell(int x, int y) const {
    if (y >= 0 && y < height && x >= 0 && x < width) {
        return layout[y][x];
    }
    return '#';
}

void Map::setCell(int x, int y, char value) {
    if (y >= 0 && y < height && x >= 0 && x < width) {
        layout[y][x] = value;
    }
}

int Map::getWidth() const {
    return width;
}

int Map::getHeight() const {
    return height;
}


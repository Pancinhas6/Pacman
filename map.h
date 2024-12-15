#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>

class Map {
private:
    std::vector<std::string> layout;
    int width;
    int height;

public:
    Map(const std::vector<std::string>& layout); 

    void draw() const;
    char getCell(int x, int y) const;
    void setCell(int x, int y, char value);

    int getWidth() const;
    int getHeight() const;
};

#endif



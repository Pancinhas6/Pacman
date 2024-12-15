#ifndef RUN_H
#define RUN_H

#include "Map.h"
#include "PacMan.h"
#include "Ghost.h"
#include "GhostUI.h"
#include <vector>
#include <memory>

class Run {
private:
    Map map;
    Pacman Pacman;
    std::vector<std::unique_ptr<Ghost>> ghosts;
    void handleInput(int ch);
    GhostUI ghostUI;

public:
    Run(const std::vector<std::string>& layout);
    void start();
    void draw() const;
};

#endif


//
//  Pit.h
//  Project1.2
//
//  Created by xiacheyun on 1/10/15.
//  Copyright (c) 2015 xiacheyun. All rights reserved.
//

#ifndef Project1_2_Pit_h
#define Project1_2_Pit_h

#include "globals.h"
#include "Player.h"
#include "Snake.h"
#include "History.h"
#include <string>
using namespace std;

class Player;
class Snake;

class Pit
{
public:
    // Constructor/destructor
    Pit(int nRows, int nCols);
    ~Pit();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     snakeCount() const;
    int     numberOfSnakesAt(int r, int c) const;
    void    display(string msg) const;
    History& history();
    
    // Mutators
    bool   addSnake(int r, int c);
    bool   addPlayer(int r, int c);
    bool   destroyOneSnake(int r, int c);
    bool   moveSnakes();
    
private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Snake*  m_snakes[MAXSNAKES];
    int     m_nSnakes;
    History m_history;
};



#endif

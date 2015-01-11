//
//  Snake.h
//  Project1.2
//
//  Created by xiacheyun on 1/10/15.
//  Copyright (c) 2015 xiacheyun. All rights reserved.
//

#ifndef Project1_2_Snake_h
#define Project1_2_Snake_h

class Pit;

class Snake
{
public:
    // Constructor
    Snake(Pit* pp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    
private:
    Pit* m_pit;
    int  m_row;
    int  m_col;
};

#endif

//
//  History.h
//  Project1
//
//  Created by xiacheyun on 1/10/15.
//  Copyright (c) 2015 xiacheyun. All rights reserved.
//

#ifndef HISTORY_INCLUDED
#define HISTORY_INCLUDED
#include "globals.h"
class Pit;


class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    Pit* m_pit;
    int m_rows;
    int m_cols;
    char grid[MAXROWS][MAXCOLS];
};

#endif

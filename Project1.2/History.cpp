//
//  History.cpp
//  Project1
//
//  Created by xiacheyun on 1/10/15.
//  Copyright (c) 2015 xiacheyun. All rights reserved.
//

#include "History.h"
#include "globals.h"
#include <iostream>
using namespace std;

History::History(int nRows, int nCols)
:m_rows(nRows), m_cols(nCols)
{
    int r, c;
    // Fill the grid with dots
    for (r = 0; r < m_rows; r++)
        for (c = 0; c < m_cols; c++)
            grid[r][c] = '.';
}

bool History::record(int r, int c){
    if(r<1 || r> m_rows || c<1 || c>m_cols)
        return false;
    else{
        if (grid[r-1][c-1]=='.') grid[r-1][c-1]='A';
        else if(grid[r-1][c-1]>='A' && grid[r-1][c-1]<='Y') grid[r-1][c-1]+=1;
        else grid[r-1][c-1]='Z';
        return true;
    }
}

void History::display() const{
    clearScreen();
    int r, c;
    for (r = 0; r < m_rows; r++)
    {
        for (c = 0; c < m_cols; c++)
            cout << grid[r][c];
        cout << endl;
    }
    
    cout<<endl;
}
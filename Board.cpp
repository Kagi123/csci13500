#include "Board.hpp"
#include <iostream>
using namespace std;

Board::Board()
{
    max = 0;
    target = 32;
    
    numRows = 3;
    numCols = 3;

}

Board::Board(int m)
{
    max = 0;
    target = 32;
    
    if(m>=1)
    {
        numRows = m;
        numCols = m;
    }
   
    else
    {
        numRows = 3;
        numCols = 3;
    }

}

Board::Board(int m, int n)
{
   max = 0;
   target = 32;

   if(m>=1&&n>=1)
   {
       numRows = m;
       numCols = n;
   }
   
   else
   {
        numRows = 3;
        numCols = 3;
   }

}

Board::~Board()
{
    
    for(int i=0;i<numRows;i++)
    {
        delete []panel[i];
    }
    
}

void Board::print() const
{
    for(int i=0;i<=numRows;i++)
    {
      if(i!=0) cout<<endl;
        cout<<"+";
        for(int j=0;j<numCols;j++)
        {
            cout<<"----+";
        }
        cout<<endl;
      
        if(i!=numRows)
        {
            for(int k=0;k<=numCols;k++)
            {
                cout<<"|    ";
            }

        }
      
    }
}

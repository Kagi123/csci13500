#include <iostream>
#include "Board.hpp"
#include <iomanip>
#include <vector>

using namespace std;

/*
Board::Board(){
    numRows = 3;
    numCols = 3;
    target = 32;
    max = 0;
    panel = new int*[numRows];
    for (int i = 0; i < numRows; i++){
      panel[i] = new int[numCols];
      for (int j = 0; j < numCols; j++){
        panel[i][j] = 0;
      }
    }
   
}

Board::Board(int m){
  if (m >= 1){
    numRows = m;
    numCols = m;
  }
  else{
    numRows = 3;
    numCols = 3;
  }

  panel = new int*[numRows];
  for (int i = 0; i < numRows; i++){
    panel[i] = new int[numCols];
  }

  target = 32;
  max = 0;
}

Board::Board(int m, int n){
  if (m >= 1 && n>= 1){
    numRows = m;
    numCols = n;
  }
  else {
    numRows = 3;
    numCols = 3;
  }

  panel = new int*[numRows];
  for (int i = 0; i < numRows; i++){
    panel[i] = new int[numCols];
  }
  target = 32;
  max = 0;
}
  

Board::~Board(){
  for (int i = 0; i < numRows; i++){
    delete [] panel[i];
  }
  delete [] panel;
}

*/
void Board::print() const {
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      std::cout << "+----";
    }
    std::cout << "+" << '\n';

    for (int j = 0; j < numCols; j++){
      if (panel[i][j] > 0 && panel[i][j] < 1024)
        std::cout << "|" << std::setw(4) << panel[i][j];
      else std::cout << "|    ";
    }
    std::cout << "|" << '\n';
  }
  for (int j = 0; j < numCols; j++){
    std::cout << "+----";
  }
  std::cout << "+" << '\n';
}
/*
bool Board::noAdjacentSameValue() const {
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if (panel[i][j] == 0) return false;

      if (i > 0 && i < numRows-1){
        if (panel[i-1][j] == panel[i][j] || panel[i+1][j] == panel[i][j]){
          return false;
        }
      }

      if (j > 0 && j < numCols -1){
        if (panel[i][j-1] == panel[i][j] || panel[i][j+1] == panel[i][j]){
          return false;
        }
      }
    }
  }
  return true;
}

void Board::selectRandomCell(int& row, int& col){
  int zeros = 0;

  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if (panel[i][j] == 0) zeros++;
    }
  }

  if (zeros == 0 && noAdjacentSameValue()){
    std::cout << "Game over. Try again." << '\n';
    std::exit(0);
  }

  std::vector <int> empty_cells;
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if (panel[i][j] == 0){
        empty_cells.push_back(numCols * i + j);
      }
    }
  }
  int random = rand() % empty_cells.size();
  row = empty_cells[random] / numCols;
  col = empty_cells[random] % numCols;

  panel[row][col] = 1;
  print();

  if (noAdjacentSameValue()){
    cout << "Game over. Try again." << '\n';
  }
}
*/

void Board::pressLeft(){
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if(panel[i][j+1] == panel[i][j]){
        panel[i][j] *= 2;
        panel[i][j+1] = 0;
      } else if(panel[i][j] == 0){
        panel[i][j] = panel[i][j+1];
        panel[i][j+1] = 0;
      }
    }
  }
  int row, col;
  selectRandomCell(row, col);
}

void Board::pressRight(){
  for (int i = 0; i < numRows; i++){
    for (int j = numCols-1; j >0; j--){
      if(panel[i][j] == panel[i][j-1]){
        panel[i][j] *=2;
        panel[i][j-1] = 0;
      } else if(panel[i][j] == 0){
        panel[i][j] = panel[i][j-1];
        panel[i][j-1] = 0;
      }
    }
  }
  int row, col;
  selectRandomCell(row, col);
}


void Board::pressUp(){
  for (int j = 0; j < numCols; j++){
    for (int i = 1; i < numRows; i++){
      if(panel[i-1][j] == panel[i][j]){
        panel[i-1][j] *= 2;
        panel[i][j] = 0;
      }else if(panel[i-1][j] == 0){
        panel[i-1][j] = panel[i][j];
        panel[i][j] = 0;
      } 
    }
  }
  int row, col;
  selectRandomCell(row, col);
}



void Board::pressDown(){
for (int j = numCols-1; j >=0; j--){
    for (int i = numRows-1; i >0; i--){
      if(panel[i-1][j] == panel[i][j]){
        panel[i][j] *= 2;
        panel[i-1][j] = 0;
      }else if(panel[i][j] == 0){
        panel[i][j] = panel[i-1][j];
        panel[i-1][j] = 0;
      } 
    }
  }
  int row, col;
  selectRandomCell(row, col);
}



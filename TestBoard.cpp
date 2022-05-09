#include "Board.hpp"

int main()
{
    Board game(8, 3);
    game.print();
    //cout << game.noAdjacentSameValue() << "\n";
    int n = 1, m = 1;
    game.selectRandomCell(m,n);

    //coloring output in console output in c++ in linux
    //cout << "\x1B[31mTexting\033[0m\t\t\n";
    //print out red text "Texting"

    //game.start();
    return 0;
}

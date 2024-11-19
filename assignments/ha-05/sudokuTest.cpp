#include "sudoku.h"

int main(int argc, char *argv[]) {
    // get the .txt file containing the sudoku puzzle
    char *fname = argv[1];

    // create a Sudoku object
    Sudoku mySudoku(fname);

    // example test call for problem #3
    // mySudoku.solve();

    // print the solved puzzle to cout
    // mySudoku.print();

    return 0;
}

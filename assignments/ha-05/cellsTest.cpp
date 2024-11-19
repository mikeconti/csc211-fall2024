#include "cellgrid.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // declare variables
    int M,N,row, col, conn;

    // get .txt file containing the grid
    char *fname = argv[1];

    // convert argument strings to integers
    // don't worry about how this works, we'll
    // cover it later in the course
    M = atoi(argv[2]);
    N = atoi(argv[3]);
    row = atoi(argv[4]);
    col = atoi(argv[5]);
    conn = atoi(argv[6]);

    // create a Cellgrid object
    // Cellgrid myGrid(fname, M, N);

    // example test call for problem #1
    // cout << myGrid.countCells(row, col, conn) << endl;

    return 0;
}

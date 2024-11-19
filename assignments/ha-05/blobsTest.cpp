#include "cellgrid.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // declare variables
    int M,N,conn;

    // get .txt file containing the grid
    char *fname = argv[1];

    // convert argument strings to integers
    // don't worry about how this works, we'll
    // cover it later in the course
    M = atoi(argv[2]);
    N = atoi(argv[3]);
    conn = atoi(argv[4]);

    // create a Cellgrid object
    // Cellgrid myGrid(fname, M, N);

    // example test call for problem #2
    // cout << myGrid.countCells(conn) << endl;

    return 0;
}

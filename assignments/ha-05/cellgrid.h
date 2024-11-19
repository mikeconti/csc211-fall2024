
/*  Cellgrid Overview:
 *
 *  Cellgrid takes a grid of 1's and 0's and stores them as a
 *  1D array of booleans in row-major order.
 *
 *  For Programming Assignment 05, this class will be used to
 *  test problems 1 & 2.
 *
 *  Problem 1 will be tested using the countCells member function
 *  Problem 2 will be tested using the ocuntBlobs member function
 *
 *  Note: in a proper C++ class you would have Getters and Setters
 *  however, here we don't do that since no values change after
 *  the initial construction.
 */

#ifndef _CELLGRID_H_
#define _CELLGRID_H_

class Cellgrid {
    private:
        // dimensions of the grid, think rowCount, columnCount
        int rows, cols;
        // grid will store the actual grid in 1D space
        bool *grid;
    public:
        /* Class constructors and destructors */
        // class constructor using a file
        Cellgrid(const char *fname, int m, int n);
        // class destructor
        ~Cellgrid();
        /* Member functions */
        // count the number of cells in grid
        int countCells(int row, int col, int conn);
        // counts the number of blobs in grid
        int countBlobs(int conn);
        // prints the Cellgrid in 2D format
        void print();
};
#endif

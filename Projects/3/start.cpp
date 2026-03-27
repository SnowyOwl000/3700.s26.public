#include <iostream>
#include "pathfinder.h"

uint8_t
    maze[MAX_ROWS][MAX_COLS];

void generateTreeMaze(uint32_t nRows,uint32_t nCols) {

    // for row = 0 to nRows-1 {
        // for col = 0 to nCols-1 {
            // maze[row][col] = 15
        // }
    // }

    // initialize disjoint set object ds with nRows*nCols elements
    // initialize sampler vWalls with nRows*(nCols-1) elements
    // initialize sampler hWalls with (nRows-1)*nCols elements

    // nv = 0
    // nh = 0

    // for i = 0 to nRows * nCols - 1 {
        // if nv = nRows * (nCols - 1)
            // d = 1
        // else if nh = (nRows - 1) * nCols
            // d = 0
        // else
            // d = random 0 or 1

        // if d = 0 {
            // do {
                // e = vWalls.getSample()
                // nv++
                // r1 = e / (nCols - 1)
                // c1 = e % (nCols - 1)
                // set r2,c2 to cell to the right of r1,c1
                // cell1 = r1 * nCols + c1
                // cell2 = r2 * nCols + c2
            // } while (ds.find(cell1) = ds.find(cell2))

            // ds.join(cell1,cell2)

            // remove right wall from r1,c1
            // remove left wall from r2,c2
        // } else {
            // do {
                // e = hWalls.getSample()
                // nh++
                // r1 = e / nCols
                // c1 = e % nCols
                // set r2,c2 to cell below r1,c1
                // cell1 = r1 * nCols + c1
                // cell2 = r2 * nCols + c2
            // } while (ds.find(cell1) = ds.find(cell2))

            // ds.join(cell1,cell2)

            // remove bottom wall from r1,c1
            // remove top wall from r2,c2
        // }
    // }
}

void removeAdditionalWalls(uint32_t nRows,uint32_t nCols,uint32_t nWalls) {

    // initialize sampler vWalls with nRows * (nCols - 1) elements
    // initialize sampler hWalls with (nRows - 1) * nCols elements

    // nv = 0
    // nh = 0

    // for i = 0 to nWalls {
        // haveWall = false
        // while not haveWall {
            // if nv = nRows * (nCols - 1)
                // d = 1
            // else if nh = (nRows - 1) * nCols
                // d = 0
            // else
                // d = random 0 or 1

            // if d = 0 {
                // e = vWalls.getSample()
                // nv++
                // r1 = e / (nCols - 1)
                // c1 = e % (nCols - 1)
                // set r2,c2 to cell to the right of r1,c1
                // if wall exists between r1,c1 and r2,c2 {
                    // remove right wall from r1,c1
                    // remove left wall from r2,c2
                    // haveWall = true
                // }
            // } else {
                // e = hWalls.getSample()
                // nh++
                // r1 = e / nCols
                // c1 = e % nCols
                // set r2,c2 to cell below r1,c1
                // if wall exists between r1,c1 and r2,c2 {
                    // remove bottom wall from r1,c1
                    // remove top wall from r2,c2
                    // haveWall = true
                // }
            // }
        // }
    // }
}

void findPath(uint32_t nRows,uint32_t nCols) {

    // for row = 0 to nRows-1 {
        // for col = 0 to nCols-1 {
            // count[row][col] = -1
        // }
    // }

    // e = nRows * nCols - 1
    // q.enqueue(e)
    // count[nRows-1][nCols-1] = 0

    // while q not empty {
        // e = q.dequeue()
        // row = e / nCols
        // col = e % nCols

        // for each neighbor row',col' of row,col {
            // if no wall between row,col and row',col' and count[row'][col'] = -1 {
                // e = row' * nCols + col'
                // q.enqueue(e)
                // count[row'][col'] = count[row][col] + 1
            // }
        // }
    // }

    // mark 0,0 as visited
    // row = 0
    // col = 0

    // while counts[row][col] != 0 {
        // for each connected neighbor row',col' of row,col {
            // if count[row'][col'] = count[row][col] - 1 {
                // row = row'
                // col = col'

                // break
            // }
        // }

        // mark row,col as visited
    // }
}

int main(int argc,char *argv[]) {

    // make sure command line is proper

    // get r, c, w from command line

    // generate maze

    // solve maze

    // print the maze

    return 0;
}

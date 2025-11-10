#include <stdio.h>

int grid[9][9] = {
    {5,3,4,6,7,8,9,1,2},
    {6,7,2,1,9,5,3,4,8},
    {1,9,8,3,4,2,5,6,7},
    {8,5,9,7,6,1,4,2,3},
    {4,2,6,8,5,3,7,9,1},
    {7,1,3,9,2,4,8,5,6},
    {9,6,1,5,3,7,2,8,4},
    {2,8,7,4,1,9,6,3,5},
    {3,4,5,2,8,6,1,7,9}
};


// Check all rows

int check_rows() {
    for (int r = 0; r < 9; r++) {
        int freq[10] = {0};  
        for (int c = 0; c < 9; c++) {
            int num = grid[r][c];
            if (num < 1 || num > 9) return 0;  
            freq[num]++;
        }

        for (int i = 1; i <= 9; i++) {
            if (freq[i] != 1) return 0;
        }
    }
    return 1;
}


// Check all columns

int check_columns() {
    for (int c = 0; c < 9; c++) {


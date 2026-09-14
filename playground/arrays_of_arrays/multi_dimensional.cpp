/*
 * 
 */

#include "pch.h"
using std::cout, std::endl;

int main() 
{
    int ia1[3][4] = // 3 arrays, each containing for int elements
    {
        {0, 1, 2, 3}, 
        {4, 5, 6, 7}, 
        {8, 9, 10, 11}
    };

    int ia2[3][4] =
    {
        // first elements of each raw in initialized
        // succeeded elements are value initialized
        {0}, {4}, {8}
    };

    /*
     * 3 rows
     * 3 columns
     * each column has 5 elements
     */
    int arr[3][3][5] =
    {
        0
    };

    /* lhs: fetching the element at r2 c4 
     * rhs: fetching the 5 element from r1 c3 
     */
    ia1[1][3] = arr[0][2][4]; 

    /*
     * lhs: row is a reference to an array of 4 ints
     * rhs: binds row to the 3rd row of ia1
     *
     * the rhs is of correct type to take the lhs
     */
    int (&row)[4] = ia1[2];


    for (const auto &row : ia1)
    {
        for (auto &col : row)
        {
            cout << col << endl;
        }
    }

    return 0;

}

/*
 * 
 */

#include "pch.h"
using std::cout, std::string;
using std::size_t;

int main() 
{
    constexpr int ROWS {4};
    constexpr int COLUMS {3};

    int ia[ROWS][COLUMS] {
        0  
    };


    size_t cnt {}; // manual counter
    for (auto &row : ia) // for every rows
    {
        for(auto &column : row) // for every columns i current row
        {
            column = cnt; // initialize to the count
            ++cnt; // incr

        }
    }

    int rowCnt = 1;
    for (auto &row : ia) // every indexed array
    {
        cout << rowCnt << ": ";
        for (auto &col : row) // every element in an array
        {
            cout << col;
        }
        ++rowCnt;
        cout << '\n';
    }



    return 0;

}

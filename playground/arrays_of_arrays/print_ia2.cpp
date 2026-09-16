#include "pch.h"
using std::cout, std::size_t;

int main() 
{
constexpr int col = 3;
constexpr int row = 3;

    int ia[row][col] = 
    {
        0
    };

    for (size_t i = 0; i != row; ++i)
    {
        for (size_t j = 0; j != col; ++j)
        {
            ia[i][j] = i * col + j;
        }
    }

    for (size_t i = 0; i < row; ++i)
    {
        cout << "col " << i + 1 << ": "; 
        for (size_t j = 0; j < col; ++j)
        {
            cout << ia[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;

}

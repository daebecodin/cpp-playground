#include "pch.h"
using std::cout, std::string;
using std::begin, std::end;
using int_array = int[7]; // 7 elements per row

int main() 
{
    int_array ia[6] // 6 rows of arrays
    {
        
    };

    for (int_array *i = ia; i != ia + 6; ++i)
    {
        cout << "row " << (i - ia) << ": ";  // printing distance between 2 pointers

        for (int *j = *i; j != *i + 7; ++j)
        {
            cout << *j << ' ';
        }

        cout << '\n';
    }
    return 0;

}

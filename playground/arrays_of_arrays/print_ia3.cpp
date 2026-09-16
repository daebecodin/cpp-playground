#include "pch.h"
using std::cout, std::string;
using std::size_t;
using std::begin, std::end;

int main() 
{
    constexpr int row {6};
    constexpr int col {7};

    int ia[row][col] 
    {
        0
    };

    int (*pr)[col] = ia; // pr is a pointer to an array of col elements; we pass it the first arr in ia

    int ndx{};
    for (auto i = ia; i != end(ia); ++i)
    {
        for (auto j = *i; j != end(*i); ++j)
        {
            *j = ndx++;
        }
    }


    
    for (auto i = begin(ia); i != end(ia); ++i)
    {
        cout << "row " << (i - begin(ia) + 1) << ": ";
        for (auto j = *i; j != end(*i); ++j)
        {
            cout << *j << " ";
        }
        cout << '\n';
    } 
    return 0;

}

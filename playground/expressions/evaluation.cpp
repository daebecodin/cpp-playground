#include "pch.h"
using std::cout;

int main ()
{

    int n = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);

    int i;
    double d;

    d = i = 3.5;
    i = d = 3.5;

    double dval; int ival; int *pi;
    dval = ival = 0;
    pi = &ival;

   

    cout << n << '\n';

    cout << d << '\n';
    cout << i << '\n';

    return 0;
}

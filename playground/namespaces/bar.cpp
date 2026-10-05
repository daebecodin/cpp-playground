#include <iostream>

void helloBar() 
{
    std::cout << "hello ";
}

namespace Bar 
{
    void helloBar()
    {
        std::cout << "from bar\n";
    }

    void print() 
    {
        ::helloBar();
        helloBar();
    }
}

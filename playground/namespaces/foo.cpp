#include <iostream>

void helloFoo()
{
    std::cout << "hello ";
}

namespace Foo 
{
    void helloFoo() 
    {
        std::cout << "from foo\n";
    }

    void print() 
    {
        ::helloFoo(); // from global
        helloFoo(); // from Foo
    }
}

namespace Foo::L1
{
    void helloFoo()
    {
        std::cout << "form nested foo\n";
    }

    void  printForAlias()
    {
        std::cout << "printed form foo alias\n";
    }

    void print()
    {
        helloFoo();
    }
}

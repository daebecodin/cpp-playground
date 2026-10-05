#pragma once
void helloFoo();

namespace Foo 
{
    void print();
}

namespace Foo::L1
{
    void print();
    void printForAlias();
}

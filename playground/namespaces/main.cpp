#include <iostream>
#include "foo.h"
#include "bar.h"
#include "gravity.h"
#include "masses.h"

void print() 
{
    std::cout << "hello from main\n";
}

int main() 
{
    namespace aliasFoo = Foo::L1;
    Foo::print();
    Foo::L1::print();
    aliasFoo::printForAlias();
    Bar::print();
    ::print(); // explicitly calls print at the global scope

    std::cout << "Earth's Gravity: "<< Values::earthGrav << '\n';
    std::cout << "Earth's Mass: " << Values::earthMass << '\n';
    return 0;

}

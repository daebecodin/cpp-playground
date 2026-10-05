#include <iostream>
#include "foo.h"
#include "bar.h"
#include "constants.h"
#include "masses.h"
#include "physix.h"

double getEarthGrav();

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

    std::cout << "Earth's Gravity: " << Constants::earthGrav << '\n';
    std::cout << "Random Instanteous Velocity: " << Motion::instanteousVelocity(5, getEarthGrav()) << '\n';
    std::cout << "Earth's Mass: " << Constants::earthMass << '\n';
    return 0;

}

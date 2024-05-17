#include <iostream>

namespace medical
{
int k =0;
}

int main()
{

    #if 1
    std::cout<<"Hello World";
    medical::k=1;
    std::cin >> medical::k;
    std::cout  << "entered value is "  << medical::k;
    #endif
    return 0;
}


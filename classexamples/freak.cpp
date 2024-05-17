#include <iostream>

int &f1()
{
int n=4;
return n;
}

int main()
{
int &m =f1();
std::cout<< m;
std::cout << "silent death";
return 0;
}

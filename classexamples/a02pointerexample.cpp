#include <iostream>

//person X is doing this

void f1(int *p)  // x
{
*p =24; //z

}

//person Y is doing this
int main()
{
    int k =4;
    f1(&k);//y
    std::cout<<"hello"  <<k;

}





int main1()
{

//stupid code
    int k =4;
    int *p=nullptr; //creation of pointer --x
    p = &k;  // assingment of pointer --y
    *p=24;  // operating on pointer --z

    //when you see x y in the same place
    //understand it is abuse of pointer.
    std::cout<<"hello"  <<k;
    return 0;
}
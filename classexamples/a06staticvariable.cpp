#include <iostream>

class A
{
    public:
    int k;// this is content of data type
    static int i;  //this is not content of data type.

};  //entire thing from line 3 to line 9 is definition of the data type.

  int A::i =0;// this is definition for i
  // in class A there is static variable called i
  // we are alloating memory for it.

int main()
{
  
    A obj;// k is allocated memory, k is inside obj i is not
    //inside obj becuause it is static.
    A obj1;
    obj1.k =4;
    obj.k =5;

    A::i =7;//this is accessing static varible.
    obj1.i =8; //flavoru of stupdity
    obj.i=9;
    obj1.i =77;
    std::cout << "Static variable" << obj.i;



    std::cout << "non static varaible"<< obj1.k;


}
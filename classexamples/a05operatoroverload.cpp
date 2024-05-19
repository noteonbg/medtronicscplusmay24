#include <iostream>

class A
{

public:

A() { std::cout <<"no argument constructor";}
explicit A(int i) { std::cout  << "A object created";}

#if 0
    bool operator>(A &temp) {
        std::cout  <<"we are comparing";
        return true;
    }
#endif
    A freak(A someargument)
    {std::cout << " plus operation has been taught to the compiler";
        return A();
    }

void  operator=(int x)
{


}

void operator=(A &temp)
{

};

operator int()//conversion function your objecttype
//to int   int k=obj1;
{
     return 4;

}
};


bool operator>(A&temp1, A &temp) {
        std::cout  <<"we are comparing";
        return true;
    }

int main()
{

    A obj=3; 


    #if 0
    A obj1;
    A obj2;
    A obj3;

    obj3 =23;
    int k = obj3;// we want to cast obj3 to int


    //if(obj1.compare(obj2));
    if(obj1 > obj2);
    obj1.freak(obj2)
    #endif
}
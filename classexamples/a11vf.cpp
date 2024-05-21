#include <iostream>

class A
{
public:
    virtual void f1()   { 

        std::cout <<"f1 at work A";
    }

};

class B:public A
{
    public:
        void f1() override  final
            {
                std::cout <<"f1 at work B";
        }

        void f2() 
        {
            std::cout <<"f2 at work";

        }
};

class C:public B
{
public:
    void f1() { }

}


int main()
{

A *ptr =new B;
ptr->f1();
std::cout << "hi";
return 0;

}
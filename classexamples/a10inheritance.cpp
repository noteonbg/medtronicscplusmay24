#include <iostream>

class A
{
public:
    A(int x) { std::cout <<" constructor of base with arguments"; }
    A() { std::cout <<" constructor of base withut arguments";}
    virtual ~A() { std::cout <<"destructor of base";}
};
class B:public A
{

    public:
    ~B() { std::cout <<"destructor of derived";}
        B():A(3) { std::cout  << "constructor of derived without arguments";}
    B(int x, int y, int z):A(y)
    {
        std::cout  << "constructor of derived with arguments";
    }


};

void rtpatwork(A *temp)
{
  //  temp->f1();//assume this runtime polymorphism.
}

int main()
{
    A *temp =new B;
    rtpatwork(temp);
    delete temp;


}

#if 0
void peoplehatefunctions(A *temp)
{


}


int main()
{   
    B obj(2,3,4);
    peoplehatefunctions(&obj);
    return 0;
}

#endif
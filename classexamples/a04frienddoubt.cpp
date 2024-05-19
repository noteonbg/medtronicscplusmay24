#include <iostream>


// classes_as_friends1.cpp
// compile with: /c
class B;

class A {
public:
   int Func1( B& b );

private:
   int Func2( B& b );
};

class B {
public:
    B(int x):_b(x){}
private:
   int _b;

   // A::Func1 is a friend function to class B
   // so A::Func1 has access to all members of B
   friend int A::Func1( B& );
};

int A::Func1( B& b ) { return b._b; }   // OK
#if 0
int A::Func2( B& b ) { return b._b; }   // C2248
#endif

int main()
{
    A a;
    B b(3);
    std::cout << "Result is" << a.Func1(b);
    return 0;
}

#if 0
class B;//election promise one day B will cme
class A;

class B
{
    public:
       void f1(A  &temp1); //defintion
};

void B::f1(A &temp1)
{
    std::cout << temp1.i;

}


class A
{
    private:
    int i;
    public:
       A(int k): i(k){}
       int getI() { return i;}
       friend void B::f1(A&);//declaration

};





int main()
{

    A obj(23);
    B obj1;
    obj1.f1(obj);


}

#endif
#include <iostream>

#if 1
class A
{
    private:
        int *x;
    public:
        A() { x =new int;}

        #if 0
        A(const A &temp)
        {
                x =new int;
                (*x)=*(temp.x);
                std::cout <<"copy construtor \n";

        }
        #endif
        A(const int &x) { 
            this->x =new int;
            *(this->x)= x;
        }
        void setx(int y){
                
                *x =y;
                }
        int getx()
         {return *x;}
                         
        ~A() {std::cout << "destructor called  "<<  *x <<"\n "; delete x; }

};
#endif


#if 0
int main()
{

A obj(3);
{
A obj2 = obj;
obj2.setx(4);
std::cout <<"hello world "  << obj2.getx() <<"\n" ;
}
std::cout <<"hello world\n "  << obj.getx() << "\n" ;
return 0;

}

#endif

#if 1
// compiler given copy constructor is giving problems. 
void f1(A obj2)
{

obj2.setx(45);
std::cout <<"hello world "  << obj2.getx() <<"\n" ;

}

A f2()
{
    A temp(3);
    return temp;

}

int main()
{


#if 0
A obj(44);
f1(obj);
std::cout <<"hello world\n "  << obj.getx() << "\n" ;
#endif

#if 1
A temp1 = f2();
std::cout <<"temp1  world\n "  << temp1.getx() << "\n" ;
#endif
return 0;

}

#endif



//let us experiement with return types
#if 0

A f1()
{

A obj2;
obj2.setx(4);
A obj3;
obj3.setx(44);
std::cout <<"hello world "  << obj2.getx() <<"\n" ;
srand(time(0));
int i = 1 + (rand() % 10);

std::cout  <<"value of random number is " << i << "\n";
if( i < 5)
    return obj2;  // return value optimization
else
     return obj3;
}

int main()
{

A obj=f1();
//obj.setx(55);
std::cout <<"hello world\n "  << obj.getx() << "\n" ;
return 0;

}

#endif


#if 0
class B
{

public:
    B()= default;
    B(B &temp) =delete;
    B(const int &i) {
    }
    B& operator=(const B &op)=delete;
    void f1(){

        std::cout << "function f1 getting called";
    }
};

int main()
{
    B obj;
    B obj1(2);
    //B obj2 = obj;
    //obj = obj1;
    obj1.f1();




return 0;
}
#endif


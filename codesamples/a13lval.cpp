
#include <iostream>

using namespace std;

int main()
{

   int k =23;
   int &&x =23;
 
   cout << x;


   int a =4;
   int b =5;
   a+b =6;
   



}

/*
In C++, `int&& rref = 20;` declares an **rvalue reference** named `rref` that refers to an integer literal `20`. 
Let's break down what this means:

1. **Rvalue Reference (`int&&`)**:
   - The `int&&` syntax represents an rvalue reference.
   - An rvalue reference is used to bind to temporary (rvalue) objects.
   - It allows you to extend the lifetime of temporary objects.
   - Rvalue references are commonly used for move semantics and perfect forwarding.

2. **Initialization**:
   - `rref` is initialized with the value `20`.
   - Since `20` is an rvalue (a temporary value), it can be bound to an rvalue reference.

3. **Lifetime Extension**:
   - The lifetime of the temporary value `20` is extended to match the lifetime of `rref`.
   - This allows you to use `rref` as if it were a regular variable.

In summary, `int&& rref = 20;` creates an rvalue reference `rref` that refers to the temporary value `20`. Rvalue references are powerful tools for efficient resource management and move semantics in C++. 🚀👨‍💻

Learn more about rvalue references [here](https://en.cppreference.com/w/cpp/language/reference) ³.

Source: Conversation with Bing, 5/5/2024
(1) Reference declaration - cppreference.com. https://en.cppreference.com/w/cpp/language/reference.
(2) c++ - Why int array[][20]? - Stack Overflow. https://stackoverflow.com/questions/39685956/why-int-array20.
(3) Fixed width integer types (since C++11) - cppreference.com. https://en.cppreference.com/w/cpp/types/integer.


*/
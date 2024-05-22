#include <iostream>
#include <cassert>
#include <chrono>
# define NDEBUG // disable assert

#if 1
constexpr int product(int x, int y) {
    return x * y;
}

int main() {


    auto start = std::chrono::high_resolution_clock::now();
    constexpr int x = product(10, 20);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Execution time: " << duration << " microseconds" << std::endl;

    #if 0
    static_assert(x ==200);

    
    int f1 =4;
    int f2=5;
    int result = product(f1,f2);
    
    //x=23;//error why
    std::cout << x; // Output: 200

    #endif
    return 0;
}

#endif
#if 0

int arr[product(2, 3)] =
 {1, 2, 3, 4, 5, 6};
std::cout << arr[5]; // Output: 6


#endif

#if 0
#include <iostream>
const double PI = 3.14159265359;

constexpr double ConvertDegreeToRadian(const double& dDegree) {
    return dDegree * (PI / 180);
}

int main() {
    auto dAngleInRadian = ConvertDegreeToRadian(90.0);
    std::cout << "Angle in radian: " << dAngleInRadian; // Output: 1.5708
    return 0;
}



#endif

#if 0

#include <iostream>

const int doubleit(int x)
{
    return x*2;
}
constexpr int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int fact_5 = factorial(5); // Computed at compile time
    std::cout << "Factorial of 5: " << fact_5; // Output: 120
    const int check = doubleit(2);
    static_assert(fact_5==120);
    static_assert(check == 4);
    assert(check ==4);
    return 0;
}


#endif

#if 0

#include <iostream>

class Patient {
public:
    constexpr Patient(double weight_kg, double height_m)
        : weight_kg_(weight_kg), height_m_(height_m) {}

    // Calculate BMI at compile time
    constexpr double CalculateBMI() const {
        return weight_kg_ / (height_m_ * height_m_);
    }

    // Get patient's weight
    constexpr double GetWeight() const {
        return weight_kg_;
    }

    // Get patient's height
    constexpr double GetHeight() const {
        return height_m_;
    }

private:
    const double weight_kg_;
    const double height_m_;
};

int main() {
    constexpr Patient patient(70.0, 1.75); // Weight: 70 kg, Height: 1.75 meters

    constexpr double bmi = patient.CalculateBMI();
    std::cout << "Patient's BMI: " << bmi << std::endl;
    

    // Access other patient information
    constexpr double weight = patient.GetWeight();
    constexpr double height = patient.GetHeight();
    std::cout << "Weight: " << weight << " kg, Height: " << height << " meters" << std::endl;

    return 0;
}



#endif


/*
The constexpr specifier was introduced in C++11 and allows us to perform computations at compile time rather than run time. Here’s an example along with some do’s and don’ts:

Using constexpr for a Function:
We can declare a function as constexpr if its value can be evaluated at compile time.
In C++11, a constexpr function should contain only one return statement. However, C++14 allows more than one statement.
The function should refer only to constant global variables.
It can call only other constexpr functions, not simple functions.
The function should not have a void return type.

*/
#if 0

constexpr int add(int a, int b) {
    return a + b;
}
int multiply(int x, int y) {
    return x * y;
}
constexpr int result = add(10, multiply(2, 3)); // Error: multiply is not constexpr


/*
Using Non-constexpr Functions Inside constexpr Functions:
A constexpr function should only call other constexpr functions, not regular functions.
Avoid using non-constexpr functions within a constexpr context.

When creating constexpr objects of user-defined types, ensure that the type has a constexpr constructor.
The default constructor won’t work for constexpr objects.

*/

#endif


#if 0

constexpr int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1); // OK
}

#endif

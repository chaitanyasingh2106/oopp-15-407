#include <iostream>
using namespace std;

inline int add(int a, int b = 0)
{
    return a + b;
}

inline int multiply(int a, int b = 1)
{
    return a * b;
}

double calculate(double a, double b)
{
    return a + b;
}

int calculate(int a, int b)
{
    return a * b;
}

int main()
{
    cout << "Addition = " << add(10, 20) << endl;
    cout << "Addition with default argument = " << add(10) << endl;

    cout << "Multiplication = " << multiply(5, 4) << endl;
    cout << "Multiplication with default argument = " << multiply(5) << endl;

    cout << "Overloading (double) = " << calculate(2.5, 3.5) << endl;
    cout << "Overloading (int) = " << calculate(5, 4) << endl;

    return 0;
}
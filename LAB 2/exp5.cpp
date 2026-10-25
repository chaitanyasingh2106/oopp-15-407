#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;
    
    float &newSalary = salary;
    
    newSalary = salary + (salary * 0.10);  
    
    cout << "Salary from old variable: " << salary << endl;
    
    return 0;
}
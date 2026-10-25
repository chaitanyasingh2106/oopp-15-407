#include <iostream>
using namespace std;

class Student
{
public:
    int a, b;

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
};

void input(Student &s)
{
    int x, y;

    cout << "Enter first value: ";
    cin >> x;

    cout << "Enter second value: ";
    cin >> y;

    s.setData(x, y);
}

void show(Student s)
{
    cout << "First value = " << s.a << endl;
    cout << "Second value = " << s.b << endl;
}

int main()
{
    Student s;

    input(s);
    show(s);

    return 0;
}
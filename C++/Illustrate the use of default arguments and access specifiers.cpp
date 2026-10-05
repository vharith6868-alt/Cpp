#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student(int m = 50)
    {
        marks = m;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1;
    Student s2(90);

    s1.display();
    s2.display();

    return 0;
}

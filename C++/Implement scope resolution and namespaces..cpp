#include <iostream>
using namespace std;

int value = 100;

namespace First
{
    int value = 200;
}

namespace Second
{
    int value = 300;
}

int main()
{
    int value = 400;

    cout << "Local value = " << value << endl;
    cout << "Global value = " << ::value << endl;
    cout << "First namespace value = " << First::value << endl;
    cout << "Second namespace value = " << Second::value << endl;

    return 0;
}

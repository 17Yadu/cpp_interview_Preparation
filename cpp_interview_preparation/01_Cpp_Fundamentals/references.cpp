#include <iostream>

using namespace std;

void changeValue(int& value)
{
    value = 100;
}

void references()
{
    int number = 10;

    changeValue(number);

    cout << number << endl;
}
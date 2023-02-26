#include <iostream>
using namespace std;

float circleArea()
{
    float pi = 3.14;
    int r;
    cout << "Enter Radius of Circle : ";
    cin >> r;

    return 2 * pi * r;
}

int main()
{

    float area = circleArea();
    cout << area;

    return 0;
}
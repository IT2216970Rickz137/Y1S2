//Program to find perimeter

#include <iostream>
#include <iomanip>
using namespace std;
// io mapit > input out manipulator

int main()
{
    int x, y;
    int sum;

    cout << "Enter Length:";
    cin >> x;
    cout << "Enter Width:";
    cin >> y;


    sum = x + y;
    cout << setw(5) << setprecision (5)<< "The sum is " << sum << endl;



}


// Lab-02-ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program calculates the size of a yard

#include <iostream>
using namespace std;


struct Rectangle {

    int length, width;

}Yard, House;

int Area(int x, int y) {

    return x * y;
}


int main()
{   
    int area, area1, area2;
    
    cout << "Yard \n================================================================\n";
    cout << "Enter Lenght:";
    cin >> Yard.length;

    cout << "Enter Width:";
    cin >> Yard.width;

    cout << "House \n================================================================\n";
    cout << "Enter Lenght:";
    cin >> House.length;

    cout << "Enter Width:";
    cin >> House.width;

    area1 = Area(Yard.length, Yard.width);
    area2 = Area(House.length, House.width);

    area = area1 - area2;

    cout << "Area of Yard:" << area;
}


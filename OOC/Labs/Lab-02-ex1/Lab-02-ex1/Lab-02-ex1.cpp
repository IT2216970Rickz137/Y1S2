#include <iostream>
using namespace std;


int searchKey(int x, int y[10]) {
    int i;

    for (i = 0; i < 10; i++) {
     //   cout << y[i] << "\n";
        if (x == y[i]) {
            return i;
        }

    }
        
        return -1;
        



}

int main()
{
    int n[10];
    int i;

    for (i = 0; i < 10; i++) {
        cout << "Enter Array[" << i << "]:";
        cin >> n[i];
    }
    cout << "Enter Number to find :" ;
    cin >> i;
    cout << "Index of " << i << " is :" << searchKey(i, n) << "\n";

    system("pause");
}


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	float Tot_price;
	float Fin_price;

		cout << "Enter Total Price:";
		cin >> Tot_price;
		

		//Modify to Show the discount first before calculation
		if (Tot_price > 10000) {
			Fin_price = Tot_price - Tot_price * 0.25;
			
		}
		else if (Tot_price > 5000) {
			Fin_price = Tot_price - Tot_price * 0.15;
		
		}
		else if (Tot_price > 3000) {
			Fin_price = Tot_price - Tot_price * 0.10;
			
		}
		else {
			Fin_price = Tot_price - Tot_price * 0.25;
		
		}
		cout << "Price :" << Fin_price;
}


#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a=0.0f;
	int b=0.0f;
	cout << "Whole Numbers ONLY!" << endl;
	
	cout << "enter num 1" << endl;
	cin >> a;
	cout << "enter num 2" << endl;
	cin >> b;
	
	cout << "\nThe sum is " << a + b;
	cout << "\nThe difference of num1 - num2 is: " << a - b;
	cout << "\nThe difference of num2 - num1 is: " << b - a;
	cout << "\nThe product is " << a * b;
	cout << "\nThe quotient is " << a / b;
	cout << "\nThe remainder is " << a % b;
	
}

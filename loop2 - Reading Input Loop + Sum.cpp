#include<iostream>
using namespace std;
int main (){	
	int sum = 0;
	int n;
	
	cout << "Note: A Negative Number or 0 will end the program." << endl;
	
	cout << "\nEnter numbers: " << endl;
	cin >> n;
	
	while (!(n<=0)) {
		sum += n;
		cin >> n;
	}
	
	cout << "The sum: " << sum;
	
	return 0;
	}
	

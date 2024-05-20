#include<iostream>

using namespace std;

int main(){
	float a=0.0f;
	
	cout << "Enter Peso Amount to be Converted!" << endl;
	cin >> a;

	cout << "\nUS Dollar: " << a * 0.018f;
	cout << "\nEuro: "      << a * 0.017f;
	cout << "\nYuan: "      << a * 0.13f;
	cout << "\nKoruna: "    << a * 0.41f;
	cout << "\nKrone: "     << a * 0.19f;
	cout << "\nShegel: "    << a * 0.068f;
	cout << "\nDinar: "     << a * 0.0055f;
	
	
}

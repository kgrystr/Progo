//

#include <iostream>
using namespace std;

void high_CF (int n);




 int main () {
	
	high_CF(5);
	cout << "program ends." << endl;	
	return 0;	
}


void high_CF (int n){

	if (n==0){
		return ;
	}

	cout << "bitchass" << endl;
	high_CF(n-1);
	cout << n << endl;
	
}

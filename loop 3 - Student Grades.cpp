#include <iostream>
using namespace std;

int main () {
	double total_grade = 0.0f;
	double avg_grade = 0.0f;
	
	cout << "Tri-Student Average Calculator!" << endl;

	for (int x = 1; x <= 3; ++x){
		double indie_avg = 0.0f;
		cout << "\nEnter Grades for Student " << x << ":" << endl;
			
		for (int y = 1; y <= 3; ++y){
			cout << " Subject " << y << ": ";
			double indie_grade;
			cin >> indie_grade;
				
			indie_avg += indie_grade / 3; 
		}
				 
		total_grade += indie_avg; 
		cout << "Average for Student " << x << ": " << indie_avg << endl;
	}

	//calculation of all average
	avg_grade = total_grade / 3; 

	cout << "\nAverage of all Students: " << avg_grade << endl;

	return 0;
}

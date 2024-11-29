#include <iostream>
using namespace std;

int main() {

	int numberOne, numberTwo;

	while (cin >> numberOne >> numberTwo) {

		if (numberOne < numberTwo) {
			cout << numberOne << " " << numberTwo << endl;;
		}
		else {
			cout << numberTwo << " " << numberOne << endl;
		}

		
	}
	
	return 0;

}
#include <iostream>
#include <climits>

using namespace std;

int main() {

	int number; cin >> number;

	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < number; i++) {

		int n; cin >> n;

		if (n < min) min = n;
				
		if (n > max) max = n;
			
	}	

	cout << min << " " << max << endl;

	return 0;
}
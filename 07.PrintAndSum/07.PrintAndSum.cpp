#include <iostream>
using namespace std;

int main() {

	/*int start, end;
	cin >> start >> end;

	int sum = 0;

	for (int i = start; i <= end; i++) {
		cout << i << " ";

		sum += i;
	}
	cout << endl;
	cout << "Sum: " << sum << endl;*/

	int a, b;
	cin >> a >> b;

	int sum = 0;

	while (a <= b) {
			cout << a << ' ';
			sum += a;
			a++;

	}

	cout << endl << "Sum: " << sum << endl;
	return 0;

}
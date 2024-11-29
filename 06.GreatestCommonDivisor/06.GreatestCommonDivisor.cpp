#include <iostream>
using namespace std;

//static int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//int main() {
//    int num1, num2;
//    cin >> num1 >> num2;
//
//    int result = gcd(num1, num2);
//    cout << result << endl;
//
//    return 0;
//}

int main() {
	int a, b;
	cin >> a >> b;

	int gcd;
	while (true) {
		gcd = b % a;
		if (!gcd) {
			gcd = a;
			break;
		}
		b = a;
		a = gcd;

	
	
	}

	return 0;
}
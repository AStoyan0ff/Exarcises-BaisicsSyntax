#include <iostream>
using namespace std;

static int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

static bool isStrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int N;
    cin >> N;

    if (isStrongNumber(N)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}

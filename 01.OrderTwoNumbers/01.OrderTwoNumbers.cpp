#include <iostream>
using namespace std;

int main() {
    int a, b;
        
    cin >> a >> b;
        
  /*  if (a < b) {
        cout << a << " " << b << endl;
    }
    else {
        cout << b << " " << a << endl;
    }*/

    if (a > b) {
        int t = a;
        a = b;
        b = t;

        cout << a << ' ' << b << endl;
    }
    return 0;
}

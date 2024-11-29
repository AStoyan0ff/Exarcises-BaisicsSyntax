#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    
    double a, b, c;
    cin >> a >> b >> c;
        
    double discriminant = b * b - 4 * a * c;
        
    if (discriminant < 0) {
        
        cout << "no roots" << endl;
    }
    else if (discriminant == 0) {
        
        double root = -b / (2 * a);
        cout << root << endl;
    }
    else {
       
        double rootOne = (-b + sqrt(discriminant)) / (2 * a);
        double rootTwo = (-b - sqrt(discriminant)) / (2 * a);
       
        cout << rootOne << " " << rootTwo << endl;
    }

    return 0;
}

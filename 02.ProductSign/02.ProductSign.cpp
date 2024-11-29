#include <iostream>
using namespace std;

int main() {
    
    double numbers[3]{};
           
    for (int i = 0; i < 3; ++i) {
        cin >> numbers[i];
    }
        
    for (int i = 0; i < 3; ++i) {
        if (numbers[i] == 0) {
            cout << "+" << endl;
            return 0; 
        }
   
    }
        
    int negativeCount = 0;
    
    for (int i = 0; i < 3; ++i) {
        if (numbers[i] < 0) {
            negativeCount++;
        }
    
    }
        
    if (negativeCount % 2 == 0) {
        cout << "+" << endl;
    }
    else {
        cout << "-" << endl;
    }

    return 0;
}

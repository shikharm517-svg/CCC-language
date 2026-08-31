#include <iostream>
using namespace std;

int main() {
    int n = 4;
      
    for(int i = 1; i <= n; i++) {
        // Condition ko j < i se badal kar j <= i kar diya gaya hai
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int n=0;
    float m=0;
    cin >> n;
    float massimo [n];

    for(int i=0; i<n; i++){
        float a=0;
        cin >> a;
        
        massimo[i]=a;
        }
    cout << max(massimo, n, m) <<endl;
    return 0;
}

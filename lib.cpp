#include "lib.h"
#include <iostream>
using namespace std;

float max( float massimo[], int n, float m){
    
    if (n==1){
        m=massimo[0];
    
    }else if(n>1){
        for(int i=1; i<n; i++){
            for(int j=1; j<=i; j++){
                if(massimo[i]>massimo[i-j]){
                    m=massimo[i];
                }else{
                    m=massimo[i-j];
                }
            }
        }
    }
    return m;
}

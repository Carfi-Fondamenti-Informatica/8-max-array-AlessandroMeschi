#include "lib.h"

float max(float massimo[], int n, float m){
   for (int i=0; i<n; i++){
       if (i==0){
           m=massimo[i];
       }else if(i>0 & massimo[i]>m){
           m=massimo[i];
       }
   }
    return m;
}

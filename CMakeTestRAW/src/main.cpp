#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#ifdef DOUBLE_TYPE
using CurType = double;
#else
using CurType = float;
#endif
int main(){
    int n = 10000000;
    CurType *sinval = new CurType[n];
    CurType sum = 0, tmp;
    for (int i = 0; i < n; i++){
        tmp = sin(2*M_PI*((CurType)i/(CurType)n));
        sinval[i] = tmp;
        sum += tmp;
    }
    printf("%lf\n", sum);
}
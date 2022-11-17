#include <stdio.h>
#include <math.h>

void main() {
    float Y[100];
    int i = 1;
    for (float x=2.1; x<=4.1;x+=0.1){
        float y = fabs(log10(x))-(x-2)*(x-2);
        Y[i]=y;
        i++;
        
    }
    float x=2.1;
    for (int j=1; j<i;j++){
        printf("F(%.2f)=%.4f\n",x,Y[j]);
        x+=0.1;
    }
}


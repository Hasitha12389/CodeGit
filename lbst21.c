#include <stdio.h>
void main(){
    float a = 1;
    float b = 2;
    float c = 3;
    float d = 4;

    printf("%.2f",(a+b)/(c+d));  // 3/7 = 0.43
    printf("\n%.2f",a+b/(c+d));    // 1+0.29
    printf("\n%.2f",(a+b)/c+d);    // 5.00
    printf("\n%.2f",a*b/c*d);      // 0.67*4 = 2.68
}
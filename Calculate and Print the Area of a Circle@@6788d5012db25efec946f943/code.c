#include <stdio.h>
#define PI 3.14
int main() {
    float r, a;
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area: %.2f", a);
    
    return 0;
}

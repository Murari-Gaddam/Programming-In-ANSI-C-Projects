#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    float a;
    a = 0;
    printf("x(degree)\t sin(x)\t cos(x)\n");
    while(a <= 180) {
        printf("%.2f\t\t %.2f\t %.2f\n", a, sin(a * PI / 180), cos(a * PI / 180));
        a = a + 15;
    }
    return 0;
}

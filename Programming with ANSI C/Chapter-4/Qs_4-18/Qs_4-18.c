#include <stdio.h>

int main() {
    int a, b, c;
    float s;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("Enter a number: ");
    scanf("%d", &c);

    s = ((float)(a - b) / 3) + (c * 2) - 1;

    printf("The answer of the equation ((a-b)/3)+(c*2)-1 is: %f\n", s);

    return 0;
}

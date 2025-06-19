#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    printf("Enter the length of side c: ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) {
        if ((a == b && b != c) || (a == c && b != c) || (b == c && a != b)) {
            printf("This forms an isosceles triangle.\n");
        } else {
            printf("This does not form an isosceles triangle.\n");
        }
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}

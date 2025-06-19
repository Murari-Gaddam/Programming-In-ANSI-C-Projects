#include <stdio.h>

int main() {
    long int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%ld ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    float L, C, R, f;
    printf("Enter the induction : ");
    scanf("%f", &L);
    printf("Enter the resistance : ");
    scanf("%f", &R);
    C = 0.01;
    while (C <= 0.1)
    {
        f = sqrt((1.0 / (L * C)) - ((R * R) / (4 * C * C)));
        printf("the value of frequency when cpacitence is %.2f :%.2f \n", C, f);
        C = C + 0.01;
    }

    return 0;
}
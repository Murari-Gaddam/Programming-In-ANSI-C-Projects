#include <stdio.h>
int main()
{
    setbuf(stdout, NULL);
    float distance, time, speed;
    printf("enter the distance travelled=");
    scanf("%f", &distance);
    printf("enter the time taken=");
    scanf("%f", &time);
    if (speed = 0)
    {
        printf("the car is at rest");
    }
    else
    {    speed = distance / time;
        printf("the speed of the car=%f", speed);
    }

    return 0;
}

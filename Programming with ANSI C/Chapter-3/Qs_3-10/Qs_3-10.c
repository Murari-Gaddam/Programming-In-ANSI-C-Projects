#include <stdio.h>
int main()
{
    int i, d,w, m, y;
    printf("enter the no of days");
    scanf("%d", &i);
    y=i/365;m=(i%365)/30;w=((i%365)%30)/7;d=((i%365)%30)%7;
    printf("no of days=%d\n",d);
    printf("no of weeks=%d\n",w);
    printf("no of months=%d\n",m);
    printf("no of years=%d\n",y);
}
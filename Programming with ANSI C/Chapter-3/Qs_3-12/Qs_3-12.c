#include <stdio.h>
int main()
{
    int m, o, f, t, fi, h, fh;
    printf("enter the amount of cash");
    scanf("%d", &m);
    fh = m / 500;
    h = (m % 500) / 100;
    fi = (m % 100) / 50;
    t = (m % 50) / 10;
    f = (m % 10) / 5;
    o = m % 5;
    printf("no of five rupee coins =%d\n",f);
    printf("no of ten rupee notes =%d\n",t);
    printf("no of fifty rupee notes =%d\n",fi);
    printf("no of one rupee coins =%d\n",o);
    printf("no of hundred rupee notes =%d\n",h);
    printf("no of five hundred rupee notes =%d\n",fh);

}
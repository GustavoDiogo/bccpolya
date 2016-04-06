#include<stdio.h>
#include<stdlib.h>

double raizq(int x)
{
        double a = 0.0000001;
        double v1 = 1.0;
        double v2 = 0;
        do
        {
                v2 = v1;
                v1 = (v1 + (x/v1))/2;
        } while (abs(v1 - v2) > a);

        return v1;
}
int main(void)
{
        double n;
        scanf("%lf", &n);
        if (n<0)
        {
        printf("Impossível calcular número negativo.\n");
        }
        else
        {
        printf("%.2lf\n", raizq(n));
        }
return 0.0;
}

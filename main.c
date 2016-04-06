#include<stdio.h>
#include<stdlib.h>

double raizq(double x)
{
        double v1 = 1.0; // Valor base.
        double v2 = 0; // Valor para sobreposição.
        do
        {
                v2 = v1; 
                v1 = (v1 + (x/v1))/2; // O novo valor de v1 será esta equação, onde "x" será posteriormente o "n"(input).
        } while (abs(v1 - v2) > 0);
        // O programa entrará em loop e ele fará a equação e as sobreposições até que a condição seja menor/falsa que 0.
        // Exemplo: Raiz de 2
        // v1=(1+(2/1))/2
        // v1=3/2
        // v1=1,5
        // 1,5-1= 0,5
        // 0,5>0 = VERDADEIRO
        // LOOP com a sobreposição novamente.
        // v1=(1,5+(2/1,5))/2
        // v1=1,41
        // 1,41-1,5 = -0,09
        // -0,09>0 = FALSO
        // Portanto o valor mais aproximado é 1,5 para raiz de 2.

        return v1;
}
int main(void)
{
        double n;
        scanf("%lf", &n);
        if (n<0) // O programa não consegue calcular raízes negativas, pois a função só será executada (v1-v2)>0 for verdadeiro e parará quando (v1-v2)>0 for falso, se a função começar com valor negativo, logo a função será falsa e parará de executar.
        {
        printf("Impossível calcular número negativo.\n");
        }
        else
        {
        printf("%.2lf\n", raizq(n));
        }
return 0.0;
}

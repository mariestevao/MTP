#include <stdio.h>
#include <math.h>
#include <conio.h>

int delta (float a, float b, float c)
{
    int delt;
    delt = pow(b, 2) - 4*a*c;
    return delt;
}

int result (float delt, float a, float b, float c)
{
  int flag=0, result1, result2;
   if(delt==0)
   {
        result1 = -b/(2*a);
        result2=result1;
        printf("As raizes sao %d e %d", result1, result2);
    }
    else if (delt>0)
    {
        result1 = (-b) + (sqrt(delt))/(2*a);
        result2 = (-b) - (sqrt(delt))/(2*a);
        printf("As raizes sao %d e %d", result1, result2);
    }
    else if (delt<0)
        printf("NAN, NAN (nao existe raiz real)");
    return 0;
}

int main ()
{
    float a, b, c, x, delt;
    printf("Digite o valor de a, b e c, respectivamente, para o calculo das raizes\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
    delt = delta (a,b,c);
    x = result(delt, a, b, c);
    return 0;
}
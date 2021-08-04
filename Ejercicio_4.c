#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num=0, NumM=0, Factorial=1;
    printf("Ingrese un numero entero ");
    scanf("%d",&Num);

    for (NumM=Num; NumM>=1; NumM--)
        {
        system("cls");
        Factorial=Factorial*NumM;
        }

    printf("El factorial de %d es %d", Num, Factorial);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vendedor=0, Venta=0, VT=0, TG=0, VM=0, VDM=0;
    printf("A continuacion ingrese las unidades vendidas diariamente por cada vendedor\n");

    for (Vendedor=1; Vendedor<=20; Vendedor++)
        {
        printf("\nVendedor %d: ", Vendedor);
        scanf("%d",&Venta);

        VT=Venta*15;
        TG=TG+VT;

        if (VT>VM)
            {
            VM=VT;
            VDM=Vendedor;
            }

        printf("El vendedor numero %d vendio un total de %d unidades\n", Vendedor, VT);
        }

    printf("\nLas unidades totales vendidas fueron %d y el vendedor que mas ventas tuvo fue el numero %d", TG, VDM);
}

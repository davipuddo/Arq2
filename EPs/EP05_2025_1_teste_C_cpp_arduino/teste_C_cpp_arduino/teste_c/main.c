#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t inicio, fim, T;
    double Tempo, media=0;
    register int r;

    float num1, num2;

    T=CLOCKS_PER_SEC;

//    printf("\nclocks por segundo: %e ciclos/seg.\n", (float)T);
    num1=1;
    num2=3;

	for (int k=1;k<=10;k=k+1)
	{   inicio=clock();
		for (r=1;r<=10000000;r=r+1) num1=num1+3;
		fim = clock();
		Tempo =( (fim - inicio)*1000/CLOCKS_PER_SEC);
		media=media+Tempo;
		printf("\nTempo gasto: %g ms.", Tempo);

	}
	printf("\nMedia do Tempo gasto: %g ms.\n", media/10);
}

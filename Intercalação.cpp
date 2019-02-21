#include <stdio.h>
#include <stdlib.h>

int primeiroVetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int segundoVetor[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int terceiroVetor[20];

int OrdenarVetores(int primeiroVetor[], int segundoVetor[])
{
	int j = 0;
	int k = 0;
	
	printf("\n\n");
	
	for(int i = 0; i < 20; i++)
	{
		if(i % 2 == 0)
		{
			terceiroVetor[i] = primeiroVetor[j];
			j++;
		}
		else
		{
			terceiroVetor[i] = segundoVetor[k];	
			k++;
		}
	}
	
	for(int i = 0; i < 19; i++)
	{
		printf("[C][%d] - %d\n", i, terceiroVetor[i]);
	}			
}
		
int main(void)
{
	for(int i = 0; i < 10; i++)
	{
		printf("[A][%d] - %d\n", i, primeiroVetor[i]);
		printf("[B][%d] - %d\n", i, segundoVetor[i]);
	}
	
	OrdenarVetores(primeiroVetor, segundoVetor);	
}

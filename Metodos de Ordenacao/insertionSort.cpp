#include <iostream>
void INSERTIONSORT (int *vet)
{
	int N = sizeof(vet)/sizeof(int); // tamanho do vetor
	
	for (int i = 2; i<N; i++)
	{
		
	}
	
}

int main ()
{
	int vet[5]={9,2,5,-1,4};
	
	INSERTIONSORT (vet);
	
	
	for (int i = 0;  i<5;  i++)
	{
		std::cout<<vet[i]<<" ";
	}
	
	
}

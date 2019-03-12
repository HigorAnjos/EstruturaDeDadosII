
#include <iostream>
#include <algorithm>    // std::swap
using namespace std;

int vet[7]={2,7,5,10,4,3,90};

void Max(int* vet, int tamanho, int i=1)
{
    int L = 2*i;
    int R = 2*i+1;
    
    cout<<"L-> "<<L<<" R-> "<<R<<" I-> "<<i<<endl;
    puts(" ");
    
 if (i<tamanho/2)
 {
	if(L <= 7)
	{
		Max(vet, tamanho, L);
		
		if ( vet[i-1]<vet[2*i-1])
		{        
			swap(vet[i-1],vet[2*i-1]);
		}
	}
	if (R <= 6)
	{
		Max(vet, tamanho, R);
		
		if (vet[i-1]<vet[2*i])
		{
            swap(vet[i-1],vet[2*i]);
		}
	}
}	
    
}

int main ()
{
    
    Max(vet,6);

    for (int i=0; i<7; i++)
    {
        cout<<vet[i]<<" ";
    }
    puts(" ");
}

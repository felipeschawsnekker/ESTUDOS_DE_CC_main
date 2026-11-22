
/*02) Rev02- Faça um programa para imprimir os valores, em ordem INVERSA,
      armazenados em um vetor de 5 elementos e o endereço destes elementos na
	  memória, usar ponteiro.
	  OBS.:    Endereço.:   M + i é equivalente  a &M[i]   e  
	           Valor....: *(M + i) é equivalente a  M[i] 
*/

#include <iostream>
using namespace std;

void newVet(int *p){
    for(int i=4; i>=0; i--){
        cout<<*(p+i)<<" ";
    }
    
}

void add(int *p){
    for(int i=4; i>=0; i--){
        cout<<(p+i)<<" ";
    }
    
}

int main(){
    int Vet[5]={1,2,3,4,5};
    int *p=Vet;
    cout<<"Vetor inverso: ";
    newVet(p);
    cout<<"\nEndereço inverso: ";
    add(p);
    }
    


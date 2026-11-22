#include <iostream>
using namespace std;


void ordenarVetor(double *v,int x){
    for(int i=0; i<x-1; i++){
        for(int j=0; j<x-1-i; j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    cout << "Vetor ordenado: ";
    for (int i = 0; i < x; i++){
        cout << v[i] << " ";
    }
    cout<<endl;
}

int main(){
double vetor[]={5,6,1,2,3};
int tamanho=sizeof(vetor)/sizeof(vetor[0]);
ordenarVetor(vetor,tamanho);

}

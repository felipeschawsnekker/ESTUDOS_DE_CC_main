/*Faça um programa que acha o maior e o 
menor inteiro dentro de um vetor
Calcule a soma e imprima-a
use int v[10], i, *maior, *menor */

#include <iostream>
using namespace std;


void Calculo(int v[], int n, int *maior, int *menor, int *soma){
    *maior = v[0];
    *menor = v[0];
    *soma = 0;
    
    for(int i=0; i<n; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }
        if(v[i] < *menor){
            *menor = v[i];
        }
        *soma += v[i];
    }
}

int main(){
    int v[10], maior, menor, soma;
    
    cout<<"Digite 10 inteiros: "<<endl;
    for(int i=0; i<10; i++){
        cin>>v[i];
    }
    
    Calculo(v, 10, &maior, &menor, &soma);
    
    cout<<"Maior: "<<maior<<endl;
    cout<<"Menor: "<<menor<<endl;
    cout<<"Soma: "<<soma<<endl;
    
    return 0;
}

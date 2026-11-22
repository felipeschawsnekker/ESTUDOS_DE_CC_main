/* Função que retorna o maior elemento de um array
Assinatura:
int* maior(int *v, int n);
A função deve retornar um ponteiro para o maior elemento (não o valor).*/

#include <iostream>
using namespace std;
const int k= 6;

int* maior(int *p, int n){
    int *maiorptr=p;
    for(int i=0; i<k; i++){
        if((*(p+i))>*maiorptr){
            maiorptr=p+i;
        }
        
    }
    return maiorptr;
}
int main(){

    int v[k]= {-3,7,9,8,-4,0};
    int *p=v;
    cout<<maior(p,6)<<endl;
    cout<<*maior(p,6)<<endl;
}

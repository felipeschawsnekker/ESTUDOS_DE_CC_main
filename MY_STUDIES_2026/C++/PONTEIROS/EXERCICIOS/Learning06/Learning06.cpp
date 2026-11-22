/* 6. Função que soma elementos de um array
Implemente:
int soma(int *v, int n);
Que percorre o array usando ponteiros e retorne a soma.*/

#include <iostream>
using namespace std;
const int i=4;
int v[i]={3,4,67,8};

int soma(int *v, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=*(v+i);
    }
    return sum;
}
int main(){
    int x=soma(v,i);
    cout<<"Soma: "<<x<<endl;
    return 0;
}

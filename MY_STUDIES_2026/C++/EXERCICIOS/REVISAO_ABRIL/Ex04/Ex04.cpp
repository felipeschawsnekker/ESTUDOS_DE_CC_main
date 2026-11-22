/* Ponteiros + Matrizes 5×4 + setw + endereços)

Declare uma matriz 5×4, imprima:
a) seus valores usando M[i][j]
b) seus valores usando ponteiros: *(*(M+i)+j)
c) seus endereços usando &M[i][j]
Explique por que um elemento de matriz ocupa endereços consecutivos na memória.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int x=5;
const int y=4;
const int a=2;
void PreencherMatriz(float M[][y]){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            *(*(M+i)+j)=((rand()%10)+1);
    }
}
}

void ExibirMatrizNormal(float M[][y]){
    for(int i=0; i<x; i++){
        cout<<"[ ";
        for(int j=0; j<y; j++){
            cout<<setw(a)<<M[i][j]<<" ";
    }
    cout<<" ]";
    cout<<endl;
}
}

void ExibirMatrizPonteiro(float M[][y]){
    for(int i=0; i<x; i++){
        cout<<"[ ";
        for(int j=0; j<y; j++){
            cout<<setw(a)<<*(*(M+i)+j)<<" ";
    }
    cout<<" ]";
    cout<<endl;
}
}

void ExibirMatrizEndereco(float M[][y]){
    for(int i=0; i<x; i++){
        cout<<"[ ";
        for(int j=0; j<y; j++){
            cout<<setw(a)<<(*(M+i)+j)<<" ";
    }
    cout<<" ]";
    cout<<endl;
}
}

int main(){
    float M[x][y];

    PreencherMatriz(M);
    cout<<endl;
    ExibirMatrizNormal(M);
    cout<<endl;
    ExibirMatrizPonteiro(M);
    cout<<endl;
    ExibirMatrizEndereco(M);
    return 0;
}

/*Troca de valores (swap)

Implemente uma função:

void swap(int *a, int *b)
Que troque os valores de duas variáveis usando apenas ponteiros.*/

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int *temp;
    a = temp;
    temp = b;
    a = b;
    
}

int main(){
    int x=10, y=20;
    cout<<"Valor de x: "<<x<<endl;
    cout<<"Valor de y: "<<y<<endl;
    swap(x,y);
    cout<<"INVERTENDO..."<<endl;
    cout<<"Valor de x: "<<x<<endl;
    cout<<"Valor de y: "<<y<<endl;
    
}

/* Faça um programa que utiliza duas variáveis locais e calcule média, declarando X e Y no main e as imprimindo */

#include <iostream>
using namespace std;
float Media(float X, float Y){
    return (X+Y)*0.5;
}

int main(){
    float X,Y;
    
    cout<<"Digite o primeiro valor: "; cin>>X;
    cout<<"Digite o segundo valor: "; cin>>Y;
    
    double resultado=Media(X,Y);
    
    cout<<"A média é: "<<resultado;
}

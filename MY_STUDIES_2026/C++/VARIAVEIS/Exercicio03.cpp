/* Faça um programa que utiliza
duas variaveis X,Y es´taticas, declarando na função
Calculo, imprimindo a média. Cada impressão deve
somar 10 em cada variávei, devendo ser chamada 5 vezes*/
#include <iostream>
using namespace std;
void Calculo(float X, float Y){
    static float x=X;
    static float y=Y;
    cout<<"Média: "<<(x+y)/2<<endl;
    x=x+10;
    y=y+10;
}


int main(){
    float X,Y;
    cout<<"X: "; cin>>X;
    cout<<"Y: "; cin>>Y;
    for(int i=0;i<5;i++){
        Calculo(X,Y);
    }
    return 0;
}

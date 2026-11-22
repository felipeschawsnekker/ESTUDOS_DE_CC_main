#include <iostream>
using namespace std;

void lerDois(double num1, double num2){
    cout<<"Soma: "<<num1+num2<<endl;
    cout<<"Subtracao: "<<num1-num2<<endl;
    cout<<"Multiplicacao: "<<num1*num2<<endl;
    if(num2!=0){
        cout<<"Divisão: "<<num1/num2<<endl;
    }
    else{
        cout<<"Erro. Divisão por zero"<<endl;
    }
}

int main(){
    lerDois(6,9);
}

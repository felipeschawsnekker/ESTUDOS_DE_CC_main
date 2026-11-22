#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    
    string t="O seu resultado é: ";
    double x[2];
    int i;
    char sinal;
    cout<<"======================================="<<endl;
    
    cout<<"Digite o primeiro número."<<endl;
    cin>>x[0];
    
    cout<<"Digite o sinal da operação: '+' , '-' , '/', '*' ,'^' "<<endl;
    cin>>sinal;
    
    cout<<"Digite o segundo número. "<<endl;
    cin>>x[1];
    
    
    if(sinal=='+'){ 
        i=0;
    }
    else if(sinal=='-'){
        i=1;
    }
    else if(sinal=='/'){
        i=2;
    }
    else if(sinal=='*'){ 
        i=3;
    }
    else if(sinal=='^'){
        i=4;
    }
    else {
        cout<<"Sinal inválido. Encerrando";
        return 0;
    }
    
    cout<<fixed<<setprecision(1)<<endl;
    double soma=x[0]+x[1];
    double subtracao=x[0]-x[1];
    double divisao=x[0]/x[1];
    double multiplicacao=x[0]*x[1];
    double exponenciacao=pow(x[0],x[1]);
    
    if (i==0){
        cout<<t<<soma;
    }
    else if (i==1) {
        cout<<t<<subtracao;
    }
    else if (i==2) {
        cout<<t<<divisao;
    }
    else if (i==3) {
        cout<<t<<multiplicacao;
    }
    else if (i==4) {
        cout<<t<<exponenciacao;
    }
    

}

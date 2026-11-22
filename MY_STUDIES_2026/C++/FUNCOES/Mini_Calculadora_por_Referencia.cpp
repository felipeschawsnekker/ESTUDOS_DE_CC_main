/*Escreva um programa que chame uma função e calcule a soma, produto e diferença e quociente de dois números. 
  Estes números devem ser passados por referência. 
*/
#include <iostream>
#include <cmath>
using namespace std;

float Calculo(float &A, float &B, char Op);

int main(){

float X,Y;
char Op;

cout<<"Digite X: "; cin>>X;
cout<<"Digite Y: "; cin>>Y;
cout<<X<<"+"<<Y<<"="<<Calculo(X,Y,'+')<<endl;
cout<<X<<"-"<<Y<<"="<<Calculo(X,Y,'-')<<endl;
cout<<X<<"*"<<Y<<"="<<Calculo(X,Y,'*')<<endl;
cout<<X<<"/"<<Y<<"="<<Calculo(X,Y,'/')<<endl;
cout<<X<<"^"<<Y<<"="<<Calculo(X,Y,'^')<<endl;


}

float Calculo(float &A, float &B, char Op){
float resposta=0;

if(Op=='+') resposta = A+B;
else if (Op=='-') resposta = A-B;
else if(Op=='*') resposta = A*B;
else if (Op=='/'){
if (B!=0){
resposta = A/B;
}
else{
cout<<"Erro, divisão por zero"<<endl;
}
}

else if (Op=='^'){
resposta= pow(A,B);
}
return resposta;
}








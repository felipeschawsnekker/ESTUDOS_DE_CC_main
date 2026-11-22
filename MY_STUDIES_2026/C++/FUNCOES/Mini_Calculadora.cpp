#include <iostream>
#include <cmath>
using namespace std;

float Calculo(float A, float B, char Op);

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

float Calculo(float A, float B, char Op){
float resposta;

if(Op=='+') resposta = A+B;
else if (Op=='-') resposta = A-B;
else if(Op=='*') resposta = A*B;
else if (Op=='/'){
if (B!=0){
resposta = A/B;
}
}

else if (Op=='^'){
resposta= pow(A,B);
}
return resposta;
}








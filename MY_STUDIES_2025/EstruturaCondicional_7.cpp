//Exercício 7
#include <iostream>
#include <cmath>
using namespace std;

int main(){

cout<<"Para a equação AX²+BX+C=0, entre com os valores de A,B,C"<<endl;
double h[3];


for (int i=0;i<3;i++){
cin>>h[i];
}

double x1,x2,delta;
delta= sqrt((pow(h[1],2)-4*h[0]*h[2]));
x1= (-h[1] + delta)/(2*h[0]);
x2= (-h[1] - delta)/(2*h[0]);

if (delta==0) cout<<"Raízes iguais: "<<x1<<endl; 
else if (delta>0) cout<<"x1: "<<x1<<", x2: "<<x2<<endl; 
else if (delta<0) cout<<"Raízes não existem nos reais"<<endl; 

return 0;

}

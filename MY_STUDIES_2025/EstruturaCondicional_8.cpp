#include <iostream>
using namespace std;

int main(){

cout<<"Entre com duas notas"<<endl;
double a[2];

for (int i=0; i<2; i++){
cin>>a[i];
}

double media=(a[0]+a[1])/2.0;

cout<<"\n A media é: "<<media<<endl;
if (media>=7.0) cout<<"Aprovado"<<endl;
else if (media<7.0) cout<<"Reprovado"<<endl;
}

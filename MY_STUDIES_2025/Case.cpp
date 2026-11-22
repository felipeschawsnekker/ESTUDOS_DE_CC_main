#include <iostream>
using namespace std;

int main (){

int a;

cout<<"Digite 1 ou 2"<<endl;
cin>>a;

switch(a){
case 1:cout<<"Número 1"; break;
case 2:cout<<"Número 2"; break;
default:cout<<"Opção inválida"; break;
}

return 0;
}

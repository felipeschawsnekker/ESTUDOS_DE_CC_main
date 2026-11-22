//Número 8
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
cout<<"Digite a quantidade de horas mensais:";
double x;
cin>>x;
cout<<fixed<<setprecision(2);
cout<<"\n O salário líquido é: "<<x*16.0;
return 0;
}

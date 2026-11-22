//Número 6
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
cout<<"Digite a temperatura em Celsius:";
double c;
cin>>c;
cout<<fixed<<setprecision(2);
cout<<"\n A temperatura em F° é de: "<<c*1.80+32;
return 0;
}

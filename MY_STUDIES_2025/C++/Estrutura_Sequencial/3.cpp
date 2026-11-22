/Número 3;

using namespace std;
#include <iostream>
#include <iomanip>

int main(){
double x[2];
double y=0;

for (int i=0; i<2; i++){
cout<<"Digite a nota "<<i+1<<": ";
cin>>x[i];

y+=x[i];
}

cout<<"\nA média é: "<<fixed<<setprecision(2);
cout<<y/2.0;

}

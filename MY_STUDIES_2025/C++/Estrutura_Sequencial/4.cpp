//Número 4
#include <iostream>
using namespace std;

int main(){
cout<<"Digite dois números decimais"<<endl;
double x[2];
double y=1;

for(int i=0; i<2; i++){
cout<<i+1<<": "; cin>>x[i];

y=y*x[i];
}

cout<<"O resultado é: "<<y;
}

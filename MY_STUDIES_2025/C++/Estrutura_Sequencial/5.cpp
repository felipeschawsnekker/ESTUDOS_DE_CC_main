//Número 5
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
cout<<"Digite quatro números inteiros"<<endl;
int x[4];
int y=0;

for(int i=0; i<4; i++){
cout<<i+1<<": "; cin>>x[i];

y=y+x[i];
}
cout<<fixed<<setprecision(0);
cout<<"O resultado é: "<<y;
}

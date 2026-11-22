#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double a[4];
    double soma=0;
    
    for(int i=0; i<4; i++){
        cout<<"Número "<<i+1<<": "; cin>> a[i];
        soma+=a[i];
    }
    
    double media=soma/4.0;
    
    cout<<fixed<<setprecision(1)<<"A média é: "<<media;
    
    return 0;
}

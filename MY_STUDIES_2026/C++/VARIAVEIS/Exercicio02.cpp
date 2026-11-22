#include <iostream>
using namespace std;
float X,Y;
float Calculo(float X,float Y){
    return (X+Y)/2;
}
int main(){
    cout<<"X: "; cin>>X;
    cout<<"Y: "; cin>>Y;
    cout<<"Média: "<<Calculo(X,Y)<<endl;
    return 0;
}

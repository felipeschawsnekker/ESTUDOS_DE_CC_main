//Escreva um programa que chame uma função, calcule a soma, produto, diferença e quociente de dois números. Estes números devem ser passados por referência com ponteiro
#include <iostream>
using namespace std;

#include <iostream>
#include <iomanip>
using namespace std;

float calc(float *a, float *b, char op);

int main(){
    float x,y;
    char op;
    cout<<"First number: "; cin>>x;
    cout<<"The signal: "; cin>>op;
    cout<<"Second number: "; cin>>y;
    float result = calc(&x,&y,op);
    
    cout<<fixed<<setprecision(3)<<"The result is: "<<result;}
}

float calc(float *a, float *b, char op){
    if (op=='+') return *a+*b;
    else if (op=='-') return *a-*b;
    else if (op=='*') return (*a)*(*b);
    else if (op=='/'){
        if(*b!=0){
            return (*a)/(*b);
        }
        else{
            cout<<"ERROR! DIVISION BY ZERO";
            return 0;
        }
    }
    else{
        cout<<"INVALID SIGNAL, TRY AGAIN"<<endl;
        return 0;
    }
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int x[2];
    
    cout<<"Enter N and M, in this order: "<<endl;
    
    for(int i=0; i<2;i++){
        cout<<"Enter a number: "; 
        cin>>x[i];
    }
    
    cout<<endl;
    cout<<"N^M is: "<<pow(x[0],x[1]);
    
    return 0;
    
}

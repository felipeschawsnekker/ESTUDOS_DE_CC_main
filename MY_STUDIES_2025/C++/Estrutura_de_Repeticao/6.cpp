#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    
    bool primo=true;
    
    if (x<=1) primo=false;
    
    for (int i = 2; i < x; i++) {
    
    
    if (x % i == 0) {
    primo = false;
    break; 
    }
            
    if (primo){
    cout << x<< " eh primo\n";
    }
    else{
    cout << x<< " nao eh primo\n";
    }

}
}

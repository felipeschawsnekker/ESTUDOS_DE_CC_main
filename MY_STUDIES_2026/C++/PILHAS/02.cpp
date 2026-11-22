

#include <iostream>
using namespace std;
#include <string>
#include <stack>
#include <vector>

//Testar se uma pilha S1 é maior que uma pilha S2

int main(){
    
    bool maior=true;
    
    
    vector<float> v1={1,2,3,4,5};
    vector<float> v2={1,2,3};
    stack<float> s1;
    stack<float> s2;
    for(int i=0; i<v1.size() ;i++){
        s1.push(v1[i]);
    }
    
    for(int i=0; i<v2.size();i++){
        s2.push(v2[i]);
    }
    int s1_i=0;
    while(!s1.empty()){
        s1.pop();
        s1_i+=1;
    }
    
    int s2_i=0;
    while(!s2.empty()){
        s2.pop();
        s2_i+=1;
    }
    if (s1_i>s2_i){
        maior=true;
    }
    else {
        maior=false;
    }
    
    cout<<"S1 É MAIOR QUE S2? "<<(maior ? "SIM" : "NAO");
}

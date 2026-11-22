/* Transfira os elementos de uma fila F1 para uma fila F2 na mesma ordem de seus elementos. 
*/

#include <queue>
#include <iostream>
using namespace std;

int main(){
    queue <int> f1,f2,f3;
    
    f1.push(1);
    f1.push(2);
    f1.push(3);
   
    int n=f1.size();
    
    
    
    for(int i=0; i<n; i++){
        f2.push(f1.front());
        f1.pop();
    }
    
    cout<<"LISTA 2: ";
    for(int i=0; i<n; i++){
        cout<<f2.front()<<" ";
        f2.pop();
    }
    cout<<endl;
}

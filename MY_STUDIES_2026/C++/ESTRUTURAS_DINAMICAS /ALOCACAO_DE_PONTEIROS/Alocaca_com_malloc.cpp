#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
    int *vetor;
    int n=5;
    vetor= (int *)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        vetor[i]=i+1;
        cout << vetor[i] << " ";
        
    }
    
    free(vetor);
    return 0;
}

/* Checagem de malloc

Objetivo: alocar memória e testar se malloc retornou NULL antes de usar.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int *ptr=(int*)malloc(10*sizeof(int));
    if(ptr==NULL){
        cout<<"Erro de Alocação"<<endl;
        return 1;
    }

    for(int i=0;i<10; i++){
        int num=(rand()%50)+1;
        ptr[i]=num;
    }

    for(int i=0; i<10; i++){
        cout<<"Array ["<<i<<"]: "<<ptr[i]<<endl;
    }

    free(ptr);
    return 0;
}

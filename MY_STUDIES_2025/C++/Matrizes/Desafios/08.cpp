#include <iostream>
using namespace std;

int main(){
    
    cout<<"Digite as proporções de sua matriz A(m*n): "<<endl;
    int m;
    int n;
    cout<<"m: "; cin>>m;
    cout<<"n: "; cin>>n;
    double a[m][n];
    
    cout<<"Digite as proporções de sua matriz B(n*p): "<<endl;
    int p;
    cout<<"p: "; cin>>p;
    double b[n][p];
    
    cout<<"\n ==========MATRIZ A========== \n";
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]: "; cin>>a[i][j];
        }
    }
    
     cout<<"\n ==========MATRIZ B========== \n";
    for (int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]: "; cin>>b[i][j];
        }
    }
    
    cout<<"\n ==========MATRIZ A========== \n";
    for (int i=0; i<m; i++){
        cout<<"[";
        for(int j=0; j<n; j++){
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<"]"<<endl;
    }
    
    cout<<"\n ==========MATRIZ B========== \n";
    for (int i=0; i<n; i++){
        cout<<"[";
        for(int j=0; j<p; j++){
            cout<<b[i][j];
            cout<<" ";
        }
        cout<<"]"<<endl;
    }
    
    cout<<"\n ==========MATRIZ A*B========== \n";
    
    double matriz_multi[m][p]={0};
    for(int i=0; i<m;i++){
        for(int j=0; j<p; j++){
            for(int k=0; k<n; k++){
                matriz_multi[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    for (int i=0; i<m; i++){
        cout<<"[";
        for(int j=0; j<p; j++){
            cout<<matriz_multi[i][j];
            cout<<" ";
        }
        cout<<"]"<<endl;
    }
    
    
    return 0;
}

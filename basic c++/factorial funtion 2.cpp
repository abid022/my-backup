#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int factnum=1;
    for(int i=1;i<=n;i++){
        factnum*=i;
        
    }
    return factnum;
}
int ncr(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int nmr=fact(n-r);
    
    return fact_n/(fact_r * nmr);
}
int main(){
    
    cout<<ncr(5,3)<<endl;
    
    
    
}
















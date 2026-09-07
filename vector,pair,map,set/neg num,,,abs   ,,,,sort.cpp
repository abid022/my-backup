#include <bits/stdc++.h>
using namespace std;

bool ccf(int a,int b){
    if(abs(a)==abs(b)){
        return a<b;
    }
   else{
       return abs(a)<abs(b);
   }
}
int main(){
    vector<int>v= {6 ,-5 ,3 ,-2 ,2 ,-3 ,4};
    sort(v.begin(),v.end(),ccf);
    for(auto i: v){
        cout<<i<<endl;
    }
    
    
    
}
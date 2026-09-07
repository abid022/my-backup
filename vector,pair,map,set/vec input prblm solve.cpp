#include <bits/stdc++.h>
using namespace std;

bool ccf(pair<int,int> a,pair <int,int> b){
   if(a.first != b.first){
       return a.first< b.first;
       
   }
   else{
       return a.second<b.second;
   }
}

int main(){
  int a;
  cin>>a;
  
  vector<pair<int,int>>v;
  for(int i=0;i<a;i++){
      
      int x;
      int y;
      cin>>x>>y;
      
      v.push_back({x,y});
     
      
      
  }
    sort(v.begin(),v.end(),ccf);
    
    for(auto i:v){
        
        cout<<i.first<<" "<<i.second<<endl;
        
        
    }
    
    
    
    
    
}
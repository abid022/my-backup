#include <bits/stdc++.h>
using namespace std;

bool ccf(pair<int,int> a,pair<int,int> b){
  if(a.second!=b.second){
      return a.second>b.second;
  }  
  return a.first<b.first;
};
int main() {
	// your code goes here
   
   int n;
   cin>>n;
   
   map<int,int>mp;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       mp[x]++;
   }
   vector<pair<int,int>>v;
   for(auto i:mp){
      
       
       v.push_back(i);
   }
  sort(v.begin(),v.end(),ccf);
  
 for(auto p:v){
     for(int i=0;i<p.second;i++){
         cout<<p.first<<" ";
     }
 }

}

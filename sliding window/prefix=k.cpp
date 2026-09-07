#include <bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int>arr={1,2,3};
   int k=3;
   
   unordered_map<int,int>mp;
   mp[0]=1;//map initial;
   
   int sum=0,count=0;
   
   for(int i=0;i<arr.size();i++){
       sum+=arr[i];
       
       if(mp.find(sum-k) != mp.end()){
           count += mp[sum-k];
       }
       mp[sum]++;
   }
   cout<< count<<endl;
   
   
   

   



}

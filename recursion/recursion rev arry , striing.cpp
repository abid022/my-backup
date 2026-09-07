#include <bits/stdc++.h>
using namespace std;
void revstring(string &s,int i){
    if(i== s.size()) return;
    
    revstring(s,i+1);
    cout<<s[i];
}

void rvsarray(vector<int>&arr,int l,int r){
    if(l>=r)return;
    
    swap(arr[l],arr[r]);
    rvsarray(arr,l+1,r-1);
}
int main() {
	/*
     string s="abc";
     int n=0;
     
     revstring(s,n);
     
     */
     
     
     vector<int>arr={1,2,3,4,5};
     
     int l=0;
     int r=arr.size()-1;
     rvsarray(arr,l,r);
     for(auto x:arr){
         cout<<x<<" ";
     }
     
     
     
}

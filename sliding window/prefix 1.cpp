#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr={5,3,8,6,2,7,4};
    int n=arr.size();
    
    vector<int>prefix(n,0);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    
    vector<pair<int,int>>queries={{0,2},{1,4},{3,6},{2,5}};
    
    for(auto q:queries){
        int l=q.first;
        int r=q.second;
        
        int sum;
        
        if(l==0) sum=prefix[r];
        
        else sum=prefix[r]-prefix[l-1];
        
        cout<<"sum of range "<<l<<" "<<r<<" "<<sum<<endl;
    }
    
    
    
    
    
    
    
    
}
	

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	map<int,int>mp;
	
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    
	    mp[x]++;
	}
	vector<int>v;
	for(int i=0;i<v.size();i++){
	    int y;
	    cin>>y;
	    
	    v.push_back(y);
	}
	
	int max=-1;
	int ans=-1;
	
	for(auto p:mp){
	    if(p.second>max){
	        max=p.second;
	        ans=p.first;
	    }
	    
	}
	cout<<ans;
}

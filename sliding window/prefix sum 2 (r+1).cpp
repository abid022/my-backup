#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr={5,3,8,6,2,7,4};
	int n=arr.size();
	
	vector<int>prefix(n+1,0);   //for extr space for 0;
	
	for(int i=0;i<n;i++){
	    prefix[i+1]=prefix[i]+arr[i];  //for extra 0
	    
	}
	vector<pair<int,int>>queries={{0,2},{1,4},{3,6},{2,5}};
	
	for(auto q:queries){
	    int l=q.first;
	    int r=q.second;
	    
	    int sum=prefix[r+1]-prefix[l];
	    
	    cout<<"result "<< l<<" "<<r <<" "<< sum <<endl;
	}

}

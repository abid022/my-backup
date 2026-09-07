#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr={5,3,8,1};
	int n=arr.size();
	
	for(int i=0;i<n-1;i++){
	    int min=i;
	    
	    for(int j=i+1;j<n;j++){
	        if(arr[j]<arr[min]){
	            min=j;
	        }
	    }
	    swap(arr[i],arr[min]);
	}
	
	
	for(auto x:arr){
	    cout<<x<<" ";
	}
   
}

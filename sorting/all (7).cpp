#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr={5,3,2,8,1};
	int n=arr.size();
	
	for(int i=1;i<n;i++){
	    int key=arr[i];
	    int j=i-1;
	    
	    while(arr[j]>=0 && arr[j]>key){
	        
	        arr[j+1]=arr[j];
	        
	            j--;
	            
	        }
	    
	    arr[j+1]=key;
	}
	for(auto x:arr){
	    cout<<x<<" ";
	}

}
   
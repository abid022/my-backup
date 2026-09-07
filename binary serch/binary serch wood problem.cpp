#include <bits/stdc++.h>
using namespace std;


int main() {
	int arr[]={20,15,10,17};
	int n=4;
	int need=7;
	
	int low=0;
	int high=*max_element(arr,arr+n);
	int ans=0;
	
	while(low<=high){
	    int mid=low+(high-low)/2;
	    
	    int wood=0;
	    for(int i=0;i<n;i++){
	        
	        if(arr[i]>mid){
	            wood+=arr[i]-mid;
	        }
	   }
	    
	    if(wood>=need){
	        ans=mid;
	        low=mid+1;
	    }
	    else{
	        high=mid-1;
	    }
	    
	    
	}
	cout<<ans<<endl;
	
	

}

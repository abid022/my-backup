#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector<int>arr={2,1,5,1,3,2};
	int n=arr.size();
	int k=3;
	
	int sum=0;
	
	// first window
	
	for(int i=0;i<k;i++){
	    sum+=arr[i];
	}
	
	int mx = sum;
	
	//slide window;
	
	for(int i=k;i<n;i++){
	    
	    sum += arr[i];  //add new element;
	 
	    sum -= arr[i-k];  //remove old element;
	    
	    mx = max(mx,sum); //update max;
	    
	}
	
	cout<<"Max sum (fix windows) ="<<mx<<endl;
	
	
	
	

}

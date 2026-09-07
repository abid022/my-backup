#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr={9,4,20,3,10,5};
	int n=arr.size();
	int k=33;
	int count=0;
	
	for(int i=0;i<n;i++){
	    int sum=0;
	    for(int j=i;j<n;j++){
	        sum+=arr[j];
	        if(sum==k) {
	            count++;
	        }
	    }
	}
	cout<<count;
	
	
	

}

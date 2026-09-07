#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr={2,1,5,1,3,2} ;        //this is veriable sliding window. given limite..
	int n=arr.size();
	int k=7;
	
	int l=0,sum=0;
	int mx_len=0;
	//add
	for(int r=0;r<n;r++){          // out put is lenght..
	    sum+=arr[r];
	    
	    
	    while(sum>k){     // remove;
	        sum-=arr[l];
	        l++;
	    }
	    mx_len=max(mx_len,r-l+1);    //lenght er jonno (r-l+1 )formula use kora hoy
	}
  
   cout<<mx_len;
}

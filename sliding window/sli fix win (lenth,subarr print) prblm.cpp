#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr={2,1,5,1,3,2};
	int n=arr.size();
	int k=7;
	int l=0,sum=0;
	int mx_len=0;
	
	int start=0,end=0;  //ans store
	
	for(int  r=0;r<n;r++){
	    
	    sum+=arr[r];
	    
	   while(sum>k){
	       sum-=arr[l];
	       l++;
	   } 
	   if(r-l+1 >mx_len){
	       mx_len=r-l+1;
	       start=l;
	       end=r;
	   }
	}
	
	cout<<"Lenght = "<<mx_len<<endl;
	cout<<"subarry = ";
	
	for(int i=start;i<=end;i++)
	   
	   cout<<arr[i]<<" ";
	
}

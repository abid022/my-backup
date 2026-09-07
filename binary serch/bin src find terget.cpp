#include <bits/stdc++.h>
using namespace std;

int find(int arr[],int n,int terget){
    
    int low=0,high=n-1;
   // int ans=n;      !
    while(low<=high){
        int mid=(high+low)/2;
        
        if(arr[mid]==terget){
            
            return mid;
        }
        else if(arr[mid]<terget){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
        
        
    }
    
   
    
}
int main() {
	// your code goes here
   int n=5;
   int arr[]={2,4,6,8,10};
   int terget=8;
   cout<<find(arr,n,terget)<<endl;
}

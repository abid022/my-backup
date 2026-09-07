#include <bits/stdc++.h>
using namespace std;

int lower(int arr[],int n,int terget){
    int low=0,high=n-1;
    int ans=-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        
        
         if(arr[mid]>=terget){
             ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int upper(int arr[],int n,int terget){
    int low=0,high=n-1;
    int ans=-1;
    
    while(low<=high){
        
        int mid=low+(high-low)/2;
        
         if(arr[mid]>terget){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
        
        
        
        
    }
    
    
    return ans;
    
    
    
    
    
    
}
int main() {
	// your code goes here
	int n=5;
	
  int  arr[] = {1, 3, 3, 5, 7};
   int  terget = 3;
   cout<<lower(arr,n,terget)<<endl;
   cout<<upper(arr,n,terget);
}

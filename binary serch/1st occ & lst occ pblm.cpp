#include <bits/stdc++.h>
using namespace std;

int fstocr(int arr[],int n,int terget){
    
    int low=0,high=n-1;
    int ans=-1;      
    while(low<=high){
        int mid=low+(high-low)/2;
        
        if(arr[mid]==terget){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<terget){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
        
    }
    
   return ans;
    
}
int lstocr(int arr[],int n,int terget){
    int low=0,high=n-1;
    int ans=-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==terget){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]<terget){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main() {
	// your code goes here
   int n=5;
   int arr[]={1,2,2,2,3};
   int terget=2;
   cout<<fstocr(arr,n,terget)<<endl;
   cout<<lstocr(arr,n,terget);
}

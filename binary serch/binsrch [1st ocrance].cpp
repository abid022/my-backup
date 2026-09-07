#include <bits/stdc++.h>
using namespace std;

int binsrch_1stocr(int arr[],int n,int terget){
    
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
        else
           high=mid-1;
        
    }
    return ans;
    
}

int main() {
	// your code goes here
	int n=6;
	int arr[]={1,2,2,2,3,4};
	int terget=2;
	
	cout<<binsrch_1stocr(arr,n,terget);

}

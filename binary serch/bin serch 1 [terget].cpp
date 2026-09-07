#include <bits/stdc++.h>
using namespace std;

int bainry_srch(int arr[],int n, int terget){
    
    int low=0,high=n-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==terget) return mid;
        
        else if(arr[mid]<terget){
            low=mid+1;
        }
        else high=mid-1;
        
        
        
        
        
    }
    return -1;
    
}

int main() {
	// your code goes here
	int n=6;
	int arr[]={2,4,6,8,9,10};
	int terget=8;
	
	cout<<bainry_srch(arr,n,terget);

}

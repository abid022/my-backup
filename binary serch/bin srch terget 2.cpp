#include <bits/stdc++.h>
using namespace std;

int binsrctest(int arr[],int n,int terget){
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
	
	int n=7;
	int arr[]={1,4,4,4,5};
	int terget=4;
	cout<<binsrctest(arr,n,terget);

}

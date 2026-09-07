#include <bits/stdc++.h>
using namespace std;

int main() {
/*	int n=5;
	int arr[]={1,2,3,4,5};
	for(int st=0;st<n;st++){
	    for(int end=st;end<n;end++){
	        for(int i=st;i<=end;i++){
	            cout<<arr[i];
	        }
	        cout<<" ";
	    }
	    cout<<endl;
	}
*/
/*	int n=5;
	int arr[5]={1,2,3,4,5};
	int maxsum=0;
	for(int st=0;st<n;st++){
	    int curentsum=0;               //max sub arr (BRUTH Force).
	    for(int end=st;end<n;end++){
	        curentsum+=arr[end]; 
	        maxsum=max(curentsum,maxsum);
	        
	       =
	    }
	    
	}
cout<<maxsum<<endl;*/

//kadane's algorithm.........

int n=7;
int arr[7]={3,-4,5,4,7,-8};
 int curntsum=0;
 int maxsum=INT_MIN;
 for(int i=0;i<n;i++){
     curntsum+=arr[i];
     maxsum=max(curntsum,maxsum);
     if(curntsum<0){
         curntsum=0;
     }
 }
 cout<<maxsum;












}

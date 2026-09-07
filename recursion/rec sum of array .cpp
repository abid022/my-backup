#include <bits/stdc++.h>
using namespace std;

int arrsum(vector<int> &arr,int i){
    if(i== arr.size()) return 0;
    
    return arr[i] + arrsum(arr,i+1);


    
}

int main() {
	// your code goes here
   
   vector<int> arr={1,2,3,4,5};
   
   cout<<arrsum(arr,0);  //0 is inisilaizer [ start ];
  
}

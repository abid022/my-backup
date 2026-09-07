#include <bits/stdc++.h>
using namespace std;


int recfac(int n){
    if(n==0)return 1;
    
    return n* recfac(n-1);   // factorial recursion;
}


int sum(int n){
    if(n==0)return 0;
                              // sum recursion;
    
    return n+sum(n-1);
}

int countdigit(int n){
    
    if(n==0)return 0;
                                    // count digite ;
    return 1+countdigit(n/10);
}


int power( int a , int b){
    if(b==0) return 1;
    
    return a*power(a,b-1);                // power ;
}


int main() {
	// your code goes here
   int n;
   cin>>n;                    
   
  // cout<<recfac(n);
  
  //cout<<sum(n);
  
 // cout<<countdigit(12345);
 
  // cout<<power(2,3);
  
  
}

#include <bits/stdc++.h>
using namespace std;


bool palidrom(string &pal,int l,int r){
     
     if(l>=r) return true;
     
     if(pal[l]!=pal[r]) return false;
     
     return palidrom(pal,l+1,r-1);
     
   
   
   
}
int main() {
	// your code goes here
   string pul="madam";
  cout<<palidrom(pul,0,4);
/*
if(revstr(s,0,4)==true) cout<<"yes";
   else cout<<"not";
*/
}

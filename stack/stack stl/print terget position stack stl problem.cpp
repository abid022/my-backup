#include <bits/stdc++.h>
using namespace std;

int main() {
    
   
    
  stack<int>st;
	

 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 
 int posi=3;
 
 
 while(posi>1){
    
   
    st.pop(); 
    posi--;        // 3-1=2  || 2-1=1  || posi 3;
    
 }
  cout<<st.top()<<endl;
   
    
}


/*

   50
   40
   30
   20
   10
   
   */
#include <bits/stdc++.h>
using namespace std;

int main() {
    
   
    
  stack<int>st;
	

 st.push(10);
 st.push(20);
 st.push(30);
 
 int terget = 20;
 int found=0;
 while(!st.empty()){
     if(st.top()==terget){                //search in stack
       //  cout<<"found"<<endl;
       found=1;
         break;
     }       
     else{
          st.pop();
     }
 }
   
     if(found){
         cout<<"found"<<endl;
     }
     else{
         cout<<"not found"<<endl;
     }
}

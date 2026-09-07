#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s="HELLO";
    
	stack<char>st;
	

   for(char x:s){
       st.push(x);
   }
   
  
   while(!st.empty()){
       
       cout<<st.top();
       st.pop();
   }



}

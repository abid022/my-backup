#include <bits/stdc++.h>
using namespace std;

int main() {
    
   
    
  stack<int>st;
	

 st.push(10);
 st.push(20);
 st.push(30);
 
 int mini=INT_MAX;
 
 while(!st.empty()){
    
    mini=min(mini,st.top());
    st.pop();
    
    
 }
 cout<<"minimume element = "<<mini<<endl;
   
    
}

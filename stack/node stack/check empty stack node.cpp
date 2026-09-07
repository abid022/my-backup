#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int>st;
	
	st.push(10);
	st.push(20);
	st.push(30);
	
	
	cout<<st.top()<<endl;           // see top
	                               
	st.pop();                     //remove top
	
	cout<<"After pop = "<<st.top()<<endl;
     
     if(st.empty()){                         //cheack empty
         cout<<"stack is empty"<<endl;
     }
     else{
         cout<<"stack is not empty"<<endl;
     }
     
     
     cout<<"this is size  = "<< st.size()<<endl;  // size
}

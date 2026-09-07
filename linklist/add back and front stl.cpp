#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

   list<int>l;
   
   l.push_back(10);
   l.push_back(20);
   l.push_back(30);
   
   for(auto x:l){
       cout<<x<<" ";
   }
   cout<<endl;
   l.push_front(5);
   
   for(auto x:l){      //update
       cout<<x<<" "; 
   }                                  //add list bak or fornt
   cout<<endl;
   
   l.push_back(40);    //update
   
   for(auto x:l){
       cout<<x<<" ";
   }
   
   cout<<endl;
   
  l. pop_front();
  l. pop_back();             // delete fro, front and pop_back
  
  for(auto x:l){
      cout<<x<<" ";
  }
   
   
}

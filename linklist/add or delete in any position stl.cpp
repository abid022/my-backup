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
                      //insert ...................
                      
  /*                    
   auto it= l.begin();
   it++;
   it++;                          // wher to inset..
  
  
  auto it=l.begin();
  advance(it,1);
                                 // how much step to go for insertion(advance)- how much iteration.
   l.insert(it,25);
   
   
   for(auto x: l){
       cout<<x<<" ";
   }
   
   */
   
   auto pos=l.begin();
   advance(pos,2);
   
   l.erase(pos);
                               //delete in any possition
   for(auto x:l){
       cout<<x<<" ";
   }
   
   
 
}

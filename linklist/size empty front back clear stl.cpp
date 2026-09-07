#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> l = {10, 20, 30, 20, 40};

   cout<<l.size();                //size
   
   cout<<endl;
   
   //******************************
   
   if(l.empty()){
       cout<<"empty"<<endl;
   }
   else{                               //empty
       cout<<"not empty"<<endl;
   }
    
    //.................................................
    
    cout<<"1st element= "<<l.front()<<endl;   // print back and front
    cout<<"last element= "<<l.back()<<endl;
    
    l.clear();
}
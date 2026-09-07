#include <bits/stdc++.h>
using namespace std;
                                     //set;
/*
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);           //sorted;
    s.insert(5); 
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    
    
    s.erase(1);
    s.emplace(6);
    cout<<s.size()<<endl;
    
    
    
//    cout<<"lower bound = "<<*(s.lower_bound(8))<<endl;

    cout<<"uper bound = "<<*(s.upper_bound(3))<<endl;
    
    auto it=s.lower_bound(8);
    if(it!=s.end()){
        cout<<"llower bound -"<<*it<<endl;
    }
    else{                                                      //lower bound;
        cout<<" lower bond = valu not found !"<<endl;
    }
    
    
    
    for(auto i:s){
        cout<<i<<" ";
        
    }
    cout<<endl;
   cout<<"count " <<s.count(4)<<endl;
   
   if(s.find(7)!=s.end()){
       cout<<"found"<<endl;
       
   }
   else{
       cout<<"not found"<<endl;
   }
    
    
    
    
    
}
*/
/*
int main(){               //multiset - sorted ;
    
    multiset<int>ms;
    
    ms.insert(1);
     ms.insert(2);
      ms.insert(3);
       ms.insert(4);    //print duplicate;
        ms.insert(5);
        
      ms.insert(1);
     ms.insert(2);
      ms.insert(3);      
        
        
    for(auto i: ms){
        cout<<i<<" ";
    }
}  
 */
 
 //************************************
 
 
 int main(){
 
      unordered_set<int>us;    //unordered_set;
      
      us.insert(1);
      us.insert(2);          //un sorted.
      us.insert(3);
      us.insert(4);
      us.insert(5);
      
      for(auto i: us){
          cout<<i<<" ";
      }
 
    
    
    
}
























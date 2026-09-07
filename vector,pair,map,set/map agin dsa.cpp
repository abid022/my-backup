#include <bits/stdc++.h>
using namespace std;

/*
int main() {
 
     map<string,int> m;

     m["apple"]=50;
     m["tv"]=100;
     m["laptop"]=60;
     m["watch"]=10;
     m["hp laptop"]=50;
     
     m.insert({"camara ", 25});   //this is called insert;
     m.emplace("ball",35);   //this is emplace;
     m.erase("tv");
    
     
     for(auto i: m){
         cout<<i.first<<" "<<i.second<<endl;
     }

    cout<<"count - "<<m.count("laptop")<<endl;   // num of key named laptop;
    
    cout<<"count 2 - "<<m["laptop"]<<endl;       //valu of laptop;

    cout<<" size "<<m.size()<<endl;
    
   if(m.find("hp laptop")!=m.end()){
       cout<<"found"<<endl;
   }
   else{
      cout<<"not found"<<endl;
   }
   


}
*/

//................................................................


int main(){
    
    /*                                //multimap[o(logn)]
    multimap<string,int>mm;
    
    mm.emplace("tv" ,200);
    mm.emplace("tv" ,200);
    mm.emplace("tv" ,200);
    mm.emplace("tv" ,200);
    
   // mm.erase("tv");        //this erase all;
   
   mm.erase(mm.find("tv")); // push iteretor thats why erase 1 key;;
   
    for(auto i: mm){
        cout<< i.first<<" "<<i.second<<endl;
    }
    */
    
    
    unordered_map<string,int>um;
    
    um.emplace("tv",120);
    um.emplace("frige",50);           //unordered_map [0(1)]
    um.emplace("oven",620);
    um.emplace("laptop",63);
    
    for(auto i:um){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    
}

























#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    map<string,int>mp;
    
    
    mp["Rahim"] = 80;
    mp["karim"] = 90;
    
    cout<< mp["Rahim"]<<endl; // 80
    
    // iterate;
    
    
    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl ;
    }
}
*/

int main(){
    
    vector<int>v={4,5,6,5,4,3,4};
    map<int,int>freqq;
    
    for(int x:v ) freqq [x]++;
    
    for(auto p: freqq){
        cout<<p.first<< " appears " <<p.second<<" times \n";
    }
    
    
    
    
    
    
    
    
    
    
    
    
}
..........................................................


#include<bits/stdc++.h>
using namespace std;


int main(){
   map<int,int>mp;
   
   mp[10]=1;
   mp[5]=2;
   mp[20]=3;
   
   for(auto p: mp){
       cout<<p.first<<" "<<p.second<<endl;
   }



    
    
    
    
    
    
    
    
    
}
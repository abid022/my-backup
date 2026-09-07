#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> l = {10, 20, 30, 20, 40};

    l.remove(20);                          //remove

    for(auto x : l) {                 //delete everything about valu;
        cout << x << " ";
    }
    
    cout<<endl;
    
    
    // unique   delete consective duplucates...
    
    
    list<int>l1={10,20,20,30,30,30,40,50};
    
    l1.unique();
    
    for(auto x:l1){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    
}
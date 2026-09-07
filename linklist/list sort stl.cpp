#include <bits/stdc++.h>
using namespace std;

int main() {
	list<int>l={10,20,50,70,30,80,40};  // sort......
         
    l.sort();
    
    for(auto x:l ){           //small to large
        cout<<x<<" ";
    }
    
    cout<<endl;
    l.sort(greater<int>());
                                   //  lerger to small
    for(auto x:l){
        cout<<x<<" ";
    }
    cout<<endl;
    
}

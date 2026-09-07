#include <bits/stdc++.h>
using namespace std;

int main() {
	list<int>l={10,20,30,40};  // reverse..
	list<int>l1={70,80,90,60};
	cout<<"before "<<endl;
	
	for(auto x: l){
	    cout<<x<<" ";
	}
	cout<<endl;
	cout<<"after"<<endl;
	
	l.reverse();
	for(auto x:l){
	    cout<<x<<" ";
	}
    cout<<endl;
    //...........................................
    
    
    l1.sort();          // if unsorted..we shorted sort the list.
    l.merge(l1);
                           // mearge....
    for(auto x:l){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    
    
    
}

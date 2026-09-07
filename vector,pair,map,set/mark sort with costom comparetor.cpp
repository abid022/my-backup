#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int> a,pair<int,int> b){
    
    if(a.first != b.first){
        return a.first>b.first;
    }
    else  return a.second<b.second;
    
}
int main() {
	
	vector<pair<int,int>> v= {{80,3},{90,2},{80,1},{90,5}};
	
	sort(v.begin(),v.end(),cmp);
	for(auto i: v){
	    cout<< i.first <<","<<i.second<<"  ";
	}
	  
	
	
	
	
}

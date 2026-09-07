#include <bits/stdc++.h>
using namespace std;

bool ccf(pair<int,string> a, pair<int,string> b){
    
    if(a.first != b.first){
        return a.first > b.first ;
    }
    else {
        return a.second<b.second;
    }
    
}


int main() {
	int n;
	cin>>n;
	
	vector<pair<int,string>> v;

   for(int i=0;i<n;i++){
       string name;
       int mark;
       
       cin>>name>>mark;
       
       v.push_back({mark,name});
       
   }
	sort(v.begin(),v.end(),ccf);
	for(auto i: v){
	    cout<<i.first<<" "<<i.second<<endl;
	}
	
	
	
	

}

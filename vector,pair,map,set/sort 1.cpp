#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    

	 // sort(start,end);
	  
/*	  vector<int>v={4,2,8,1};
	  
	  sort(v.begin(),v.end());        //sorting
	  
	  for(int i:v){
	      cout<<i<<" ";
	  }
	  
	*/   
	  
	  // *****************************************
	  
	  
	  
/*	  vector<int>v={5,3,6,8,2};
	  
	  sort(v.begin(),v.end(),greater<int>());  //greater means high to low..we can aslo write [less] for low to high..
	  
	  for(int i:v){
	      cout<<i<<" ";
	  }
	*/
	
/*	vector<pair<int,int>>v={{2,6},{4,5},{6,3}};
	sort(v.begin(),v.end());
	for(auto i:v){
	    cout<<i.first<<","<<i.second<<" ";
	}
	
}	
*/





//  .......................       ...............
                 //coustom pair   
                 
  bool cmp(pair<int,int> a,pair<int,int> b){
      return a.second < b. second;
  }                 


int main(){
    vector<pair<int,int>>v={{2,6},{4,5},{6,3}};
    sort(v.begin(),v.end(),cmp);
    for(auto i: v){
        cout<<i.first<<" "<<i.second;
    }
    
    
    
    
    
}

  
	
	
   

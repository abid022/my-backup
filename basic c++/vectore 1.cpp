#include <iostream>
#include<vector>
using namespace std;

int main() {
	 //vextor syntex.
	 
	 //1. vector<int>vec;
	 
	 
/*	2.  vector<int>vecto={1,2,3};
	 
	 cout<<vecto[0]<<endl;
	cout<<vecto[2];
	
	*/
// 3.

    vector<int>vec(5,1);
    vector<char>ch={'a','b','c','d'};
    vector<int>emty;
   /* cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;
	*/
	
/*	for(int i:vec){
	    cout<<i<<endl;
	}
  for(char i:ch){
      cout<<i<<endl;
  }
  */
  
 // cout<<"size of vecotor - "<<ch.size()<<endl; //size.
  
 /* cout<<emty.size()<<endl;
  emty.push_back(5);
  cout<<"after push back "<<emty.size()<<endl;  //push_back;
  for(int i:emty){
      cout<<i<<endl;
  }
  */
  
/*  vector<int>pop;
  pop.push_back(1);
  pop.push_back(2);
  pop.push_back(3);
  cout<<"pushback "<<pop.size()<<endl; //pop_back;;
  for(int i:pop){
      cout<<i<<endl;
  }
  pop.pop_back();
  for(int i:pop){
      cout<<i<<endl;
  }*/
  
  vector<int>forntback={1,2,3};   //front/back/at(..);
  cout<<forntback.front()<<endl;
  //cout<<forntback.back()<<endl;
  forntback.pop_back();
  cout<<forntback.at(2)<<endl;
  
  
  
  
}

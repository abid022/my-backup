#include <iostream>
#include<vector>
using namespace std;
int unicnum(vector<int>&vec){
    int ans=0;
    for(int i:vec){
        ans^=i;
    }
    return ans;
}
int main(){
	vector<int>vect={1,2,1,2,9};
	cout<<unicnum(vect)<<endl;
	
	
	
	
	
}

#include <iostream>
#include<vector>
using namespace std;
/*
vector<int> pairsum(vector<int>num,int terget){
    vector<int>ans;
    int n=num.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]+num[j]==terget){
                ans.push_back(i);         //pairsum.....
                ans.push_back(j);         //bruth force.
                return ans;
                
            }
        }
    }
    return ans;
}
int main() {
	vector<int>vec={1,2,3,4,5};
	int terget=9;
	vector<int>ans=pairsum(vec,terget);
	cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;    	
    	
}
*/

vector<int> pairsum_opt(vector<int>num,int terget){
    vector<int>ans;
    int n=num.size();
    int i=0,j=n-1;
    while(i<j){
    int psum=num[i]+num[j];
    if(psum<terget){
        i++;                        //optimized way..
    }
    else if(psum>terget){
        j--;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    } 
    
    }
    
    return ans;
}

int main(){
     vector<int>vec={2,7,11,15};
     int terget=18;
     vector<int>ans=pairsum_opt(vec,terget);
     cout<<ans[0]<<" "<<ans[1]<<endl;
    
    
    
    
     
    
    
    
    
    
}













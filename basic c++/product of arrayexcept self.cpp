#include <bits/stdc++.h>
using namespace std;
/*
vector<int>productofarrayexceptself(vector<int>num){
    int n=num.size();
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j){
            ans[i]*=num[j];
            }
        }
    }
    return ans;
    
    
    
                          //O(n^2);;
}

int main() {                          
	vector<int>vec={1,2,3,4};
	vector<int> result=productofarrayexceptself(vec);
	for(int i=0;i<vec.size();i++){
	    cout<<result[i]<<" ";
	}

}
*/



//...................optimal solution...........

/*
vector<int>produc_arr(vector<int>num){
    int n=num.size();
    vector<int>ans(n,1);
    vector<int>prifix(n,1);
    vector<int>sufix(n,1);
 
 for(int i=1;i<n;i++){
     prifix[i]=prifix[i-1]*num[i-1];
 }
 for(int i=n-2;i>=0;i--){
     sufix[i]=sufix[i+1]*num[i+1];
 }
 for(int i=0;i<n;i++){
     ans[i]=prifix[i]*sufix[i];
 }
 return ans;
 
    
   }
int main() {                          
	vector<int>vec={1,2,3,4};
	vector<int> result=produc_arr(vec);
	for(int i=0;i<vec.size();i++){
	    cout<<result[i]<<" ";
	}

}
*/
//....................space complexsity.............
vector<int>prdtarr(vector<int>num){
    int n=num.size();
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1] * num[i-1];
    }
    int sufix = 1;
    for(int i=n-2;i>=0;i--){
        sufix*=num[i+1];
        ans[i]*=sufix;
    }
}return ans;







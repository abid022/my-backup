#include <bits/stdc++.h>
using namespace std;
int cointainer(vector<int>hight){
    int maxwater=0;
    for(int i=0;i<hight.size();i++){
        for(int j=i+1;j<hight.size();j++){
            int whight=j-i;
            int ht=min(hight[i],hight[j]);
            int Area=ht*whight;
            maxwater=max(maxwater,Area);     brouth force
                                               0(n^2);
        }
    }
    return maxwater;
    
}

int main() {
	// your code goes here
    vector<int>contwater={5,3,4,6,3,4,5};
    cout<<cointainer(contwater);
}

.........................optimal solition 0(n)..............................



#include <bits/stdc++.h>
using namespace std;
int mostwater(vector<int>hight){
    int lp=0,rp=n-1,maxwater=0;
    while(lp<rp){
        int whight=rp-lp;
        int higt=min(hight[lp],hight[rp]);
        int wateramount=whight*higt;
        int maxwater=max(maxwater,wateramount);
        
     if(higt[lp]<higt[rp]){
        lp++;
    }
    else{
        rp--; 
    }
    
    }
    return maxwater;
}
int main() {
	
vector<int>vec={1,8,6,2,5,4,8,3,7};
cout<<mostwater(vec);
}

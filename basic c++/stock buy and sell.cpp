#include <bits/stdc++.h>
using namespace std;
/*
double mypow(double x,int n){
    if(n==0)return 1;
    if(x==0)return 0;
    if(x==1)return 1;
    if(x==-1 && n%2==0)return 1;
    if(x==-1 && n%2!=0)return -1;
    
    
    long binform=n;
    if(binform<0){
        x=1/x;
        binform= -binform;
    }
    double ans=1;
    
    while(binform>0){
        if(binform%2==1){       //0(logn);
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    return ans;
}
int main() {
                             	//compute x^n(binary exponentiation)
	double x=2;
	int n=10;
	cout<<mypow(x,n);
	

}
*/



//................best tie to buy ans sell a stock........




int maxprofit(vector<int>&price){
    int maxprofit=0,bestbuy=price[0];
    for(int i=0;i<price.size();i++){
        
        if(price[i]>bestbuy){
            maxprofit=max(maxprofit,price[i]-bestbuy);
        }
        bestbuy=min(bestbuy,price[i]);
        
    }
    return maxprofit;
    
    
    
}                         //0(n);
int main(){
    vector<int>pricestock={7,1,3,5,4,2};
    cout<<maxprofit(pricestock);
    
}





















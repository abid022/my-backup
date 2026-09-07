#include <bits/stdc++.h>
using namespace std;

int gdc(int a,int b){
    if(b==0) return a;
    
    return gcd(b,a%b);
}

int lcm(int a, int b){                        // gcd(2,6)=(6, 2%6)=(6,2)=(2,6%2)=(2,0);
    
    return a*b / gcd(a,b);
    
}
int main() {
	// your code goes here
  cout<<lcm(2,6);
}

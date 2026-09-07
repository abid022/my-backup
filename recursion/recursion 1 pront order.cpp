#include <bits/stdc++.h>
using namespace std;
/*
void rec(int n){
    if(n==0)return;
    
    cout<<n<<" ";
    rec(n-1);                    // down + print (before call)
}
int main() {
	
    rec(5);
}
*/


//        ..............................................
void rec1(int n){
    if(n==0)return;
    
    rec1(n-1);                        // 1st down then up^ and print;
    
    cout<<n<<" ";

} 

void rec2 (int n){
    if(n==0) return;
    
    cout<<n<<" ";                   //down + print befor call then call and up print;
    rec2(n-1);
    cout<<n<<" ";
}


int main(){                           
    
    rec1(5);
    cout<<endl;
    rec2(4);
    
    
    
}
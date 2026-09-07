#include <bits/stdc++.h>
using namespace std;

int main() {
  
   int n=15;
   bool isprime=true;
   for(int i=2;i<=n-1;i++){
       //(int i=2;i*i<=n;i++)
       if(n%i==0){
           isprime=false;
           break;
       }
   }
   if(isprime==true){
       cout<<"prime no."<<endl;
   }
   else{
       cout<<"no prime no."<<endl;
   }
  
  
  
}

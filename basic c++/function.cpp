#include <bits/stdc++.h>
using namespace std;


/*int hello(){
    cout<<"hello world \n";
    return 3;
}

int main() {

   int valu=hello();
   cout<<"valu = "<<valu<<endl;
}
*/
//************************************************************
/*int s(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    cout<<s(num1,num2)<<endl;
    
}*/
//............................................

/*int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
   cout<< min(5,6);
    
}*/
//..........................................................
/*
int countnum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        
    }
    return sum;
}
int main(){
    
    cout<<countnum(3)<<endl;
    cout<<countnum(9)<<endl;
    
}*/
//.............................................................................

/*int fac(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<fac(5)<<endl;
}*/  
//................................................................
/*
void changex(int x){
  int x=2*x;
    cout<<x<<endl;
}
int main(){
    int x=5;
    changex(x);
    cout<<x<<endl;
}
*/


//calculate sum of digits of a number.......

int sum(int num ){
    
    int digitesum=0;
    
    while(num>0){
      int lastdigits=num%10;
       num/=10;
        digitesum+=lastdigits;
    }
    return digitesum;
}
int main(){
   cout<< sum(123);
}



























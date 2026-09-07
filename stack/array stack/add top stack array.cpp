#include <bits/stdc++.h>
using namespace std;

void push(int arr[],int &top,int value){
     
     top++;
     arr[top]=value;
    
    
}
int main() {
	int arr[5];
	int top=-1;
	
   push(arr,top,10);
   push(arr,top,20);
   push(arr,top,30);
   
   cout<<arr[top];
   
   
    
}

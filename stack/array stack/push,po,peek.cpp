#include <bits/stdc++.h>
using namespace std;

bool isfull(int top,int size){     // push is full or not.
    return top == size-1;
}


bool isempty(int top){
    return top==-1;                //pop for empty 
    
}
void push(int arr[],int &top,int value,int size){
     
     
     if(isfull(top,size)){
         cout<<"stack Overflow"<<endl;
         return;                           //push top
     }
     
     top++;
     arr[top]=value;
    
    
}


void pop(int arr[],int &top){                // pop
    if(isempty(top)){
        cout<<"stack underflow"<<endl;
        return;
    }
    
    top--;
    
}
int peek(int arr[],int top){
    if(isempty(top)){
        cout<<"stack is empty"<<endl;
        return -1;
    }                                     //peek 
    
    return arr[top];
}
int main() {
	int arr[5];
	int top=-1;
	int size=5;
   push(arr,top,10,size);
   push(arr,top,20,size);
   push(arr,top,30,size);
   push(arr,top,40,size);
   push(arr,top,50,size);
   
  // push(arr,top,60,size);
   
   cout<<"Top= "<<arr[top]<<endl;           //top
   
   pop(arr,top);
   
   cout<<"After pop :"<<arr[top]<<endl;     //pop
   
   cout<<"peek : "<<peek(arr,top)<<endl;   //peek
    
}

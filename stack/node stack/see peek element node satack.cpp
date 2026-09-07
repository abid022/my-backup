#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    
};

node *top=NULL;         // global

void push(int value){
    node *newnode=new node();
                                        //push
    newnode->data=value;
    newnode->next=top;
    
    top = newnode;
    
}
void pop(){
   if(top==NULL){
       cout<<"Stack underflow "<<endl;
       return;
   }                                          //pop
   node *tem=top;
   top=top->next;
   delete tem;
}

int peek(){
    if(top==NULL){
        cout<<"stack is empty"<<endl;
        return -1;
                                              // peek
    }
    
    return top->data;
}
int main() {
	push(10);
	push(20);
	push(30);
	
	cout<<"Top = "<<top->data<<endl;

     pop();
     
     cout<<"Top after pop = "<<top->data<<endl;
    cout<< "peek = "<<peek()<<endl;
}

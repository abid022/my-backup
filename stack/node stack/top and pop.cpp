#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    
};

node *top=NULL;         // global

void push(int value){
    node *newnode=new node();
    
    newnode->data=value;
    newnode->next=top;
    
    top = newnode;
    
}
void pop(){
   if(top==NULL){
       cout<<"Stack underflow "<<endl;
       return;
   } 
   node *tem=top;
   top=top->next;
   delete tem;
}
int main() {
	push(10);
	push(20);
	push(30);
	
	cout<<"Top = "<<top->data<<endl;

     pop();
     
     cout<<"Top after pop = "<<top->data<<endl;

}

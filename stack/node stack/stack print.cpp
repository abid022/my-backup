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

void print(){
    node *tem=top;
    
    while (tem !=NULL){
        cout<<tem->data<<endl; //print 
        
        tem=tem->next;
    }
    
}


int main() {
	push(10);
	push(20);
	push(30);
	
   print();
}

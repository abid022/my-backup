#include <bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *next;
   
};
int main() {
    node *first=new node;
    first->data=10;
    first->next=NULL;
    
    node *second=new node;
    second->data=20;
    second->next=NULL;
    
    node *third=new node;
    third->data=30;
    third->next=NULL;
    
    first->next=second;
    second->next=third;
    
    node *newnode=new node;
    newnode->data=40;
    newnode->next=NULL;
    
    node *temp=first;
    
    while(temp->next!=NULL){              //find next address
        temp=temp->next;
        
    }
    
    temp->next=newnode;
    
    temp=first;
    
    while(temp != NULL){                 
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    
    
    
    	

}

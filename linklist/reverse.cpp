#include <bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;
  
};

int main() {
	// your code goes here
      
      
    node *first=new node;
    first->data=10;
    first->next=NULL;
    
    node *second=new node;
    second->data=20;
    second->next=NULL;
    
    node *third=new node;
    third->data=30;
    third->next=NULL;
    
    node *fourth=new node;
    fourth->data=40;
    fourth->next=NULL;
    
    first->next=second;
    second->next=third;
    third->next=fourth;
    
    //  Riverse 
    
    node *prev=NULL;
    node *curnt=first;
    node *next=NULL;
    
    while(curnt != NULL){
        next=curnt->next;
        curnt->next=prev;
        
        prev=curnt;
        curnt=next;
        
    }
    
    first=prev;
    
    
    node *tem=first;
    
    while(tem != NULL){
        cout<<tem->data<<" ";
        tem=tem->next;
    }
    
    
    
    
    
    
    
}

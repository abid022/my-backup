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
	
	node *tem=first;
	first=first->next;
	delete tem;
	
	tem=first;
	
	/*
	while(first !=NULL){
	    cout<<first->data<<" ";
	    first=first->next;
	    
	    // this is my code.
	    
	}
	*/
	
	while(tem!=NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	    
	}
	
	
	

}

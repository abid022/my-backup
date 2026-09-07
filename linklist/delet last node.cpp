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


	while( tem->next->next != NULL){
	   
	      tem=tem->next;
	    
	}
	
	node *del=tem->next;
	tem->next=NULL;
	delete del;
	
		tem=first;
	
	while(tem!=NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	    
	}
	
	
	

}

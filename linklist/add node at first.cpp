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
	
	first->next=second;
	second->next=third;
	
	node *newnode= new node;//new node;
	newnode->data=5;
	newnode->next=NULL;
	
	newnode->next=first;
	first=newnode;
	
	node *tem=first;   //traversal
	
	while(tem != NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	}
	
	
	

}

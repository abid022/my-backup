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
	
	node *third= new node;
	third->data=30;
	third->next=NULL;
	
	node *fourth=new node;
	fourth->data=40;
	fourth->next=NULL;
	
	first->next=second;
	second->next=third;
	third->next=fourth;
	
	node *newnode=new node;
	newnode->data=25;
	newnode->next=NULL;
	
	node *tem=first;
	
	tem=tem->next;
	
	newnode->next=tem->next; //25 er null e 30 er add;
	tem->next=newnode;
	
	tem=first;
	
	while(tem!=NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	}
	

}

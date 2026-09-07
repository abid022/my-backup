#include <bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *next;
   
};
int main() {
	// your code goes here
	
	node *first= new node;
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
	
	node *fift=new node;
	fift->data=50;
	fift->next=NULL;
	
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fift;
	
	node *newnode=new node;
	newnode->data=25;
	newnode->next=NULL;
	
	
	
	
	node *tem=first;
	
	int pos=1;
	
	if(pos==1){
	    newnode->next=first;
	    first=newnode;          // for 1st psition;
	    
	    tem=first;
	    	while(tem!=NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	   
	}
	
	}
	else{                                // for 2,3 ,4.....
	for(int i=1;i<pos-1;i++){
	    tem=tem->next;
	}
	
	newnode->next=tem->next;
	tem->next=newnode;
	
	tem=first;
	}
	
	
	while(tem!=NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	}
	
	
	

}

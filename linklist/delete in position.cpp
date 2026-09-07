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
	
	node *fourth=new node;
	fourth->data=40;
	fourth->next=NULL;
	
	node *fift= new node;
	fift->data=50;
	fift->next=NULL;
	
	
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fift;
	
	node *tem=first;
    int posi=3;
    
    for(int i=1;i<posi-1;i++){
        tem=tem->next;
    }
	
	node *del=tem->next;
	tem->next=del->next;
	delete del;
	
	
    	tem=first;
	
	
	while(tem  != NULL){
	    cout<<tem->data<<" ";
	    //cout<<tem->next<<" ";
	    tem=tem->next;
	}


}

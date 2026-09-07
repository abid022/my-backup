#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
int main() {
    //1st node
    
    Node* first=new Node;
    first->data=10;
    first->next=NULL;
    
    //2nd Node
    
    Node* second=new Node;
    second->data=20;
    second->next=NULL;
    
    // 3rd  node
    
    Node* third = new Node;
    third->data=30;
    third->next=NULL;
     
     //link
     
    first->next=second;
    second->next=third;
    
    
    // traversal 
    
    Node* tem=first;
    
    while(tem != NULL){
        
        cout<<tem<<" ";
        cout<<tem->data<<endl;
        tem=tem->next;
        
        
    } 
   
   
   
   
   
   
}

#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
int main() {
    
    Node* first=new Node;
    first->data = 10;
    first->next = NULL;
    
    Node* second=new Node;
    second->data =20;
    second->next= NULL;
    
    Node* third=new Node;
    third->data =30;
    third->next =NULL;
    
    first->next=second;
    second->next=third;
    
   cout<<first->next->next->data<<endl;
   
   cout<<second<<endl;
   
   cout<<first->next<<endl;
   
   cout<<first->next->data<<endl;
   
   cout<<first->data<<endl;
}

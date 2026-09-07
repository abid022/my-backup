#include <bits/stdc++.h>
using namespace std;

/*
struct student{
    int roll; 
};

void fun(student *p){
    p->roll=50;
    p=&s1;
}
int main() {
	// your code goes here
   student s1;
   
   s1.roll=10;
   fun(&s1);
   
   student s2;
   s2.roll=20;
   fun(&s2);
   
   
   cout<<s1.roll<<endl;
   cout<<&s1<<endl;
   cout<<s2.roll<<endl;
   cout<<&s2<<endl;
   
   
   
  } */
  
  
  //***********************************************************
   
   struct student{
       int roll;
       
   };
   void fun(student *p1){
       
       student *p2;
       
       p2=p1;
       
       p2->roll=100;
       
   }
   
   int main(){
       
       student s1;
       s1.roll=10;
       
       fun(&s1);
       
       cout<<s1.roll<<endl;
       cout<<&s1<<endl;
       
       
   
}

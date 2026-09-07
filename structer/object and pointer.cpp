#include <bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int roll;
    float gpa;
    
};

void print(student s){
    
    
    
}
int main() {
    //object
    student s1;
    
    s1.name="Abid";
    s1.roll= 10;
    s1.gpa=3.88;
    // pinter
    student *p = &s1;
    
    cout<<"using object"<<endl;
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.gpa<<endl;
    
    
    cout<<endl;
    
    cout<<"using pointer :"<<endl;
    cout<<p->name<<endl;
    cout<<p->roll<<endl;
    cout<<p->gpa<<endl;

   
   cout<<endl;
   
   //change valu using pointer;
   
   p->roll=50;
   cout<<"after using pointer"<<endl;
   cout<<s1.roll<<endl;
   


}

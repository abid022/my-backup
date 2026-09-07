#include <bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int roll;
    float gpa;
    
};

void print(student s){
    
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.gpa<<endl;
    
}
int main() {
    
    student s1;
    
    s1.name="Abid";
    s1.roll=10;
    s1.gpa=3.90;
    
    print(s1);
   
   
   


}

/*
#include <bits/stdc++.h>
using namespace std;
class person{
    public:
       string name;
       double age;
};
class student:public person{
   public:
        double rollno;
};
class grdstudent:public student{
    public:
        string research;        //multi - lavle Inheritence
};
int main() {                         // perent
   grdstudent s1;                   //      perent  
                                   //          child;
   s1.name="abid";
   s1.age=32;
   s1.rollno=1223;
   s1.research="in c++";
   
cout<<s1.name<<endl;
cout<<s1.research<<endl;

}
*/


//**********************************************************

/*
#include<iostream>
using namespace std;
class student{
    public:
  string name;
  int age;                     //multiple inheritence.....
};                             
class teacher{                 // perent   perent
    public:                   //      child
     string subject;
     double sallary;
};
class TA:public student,public teacher{
   // public:
   // string research;
};
int main(){
    TA t1;
     t1.name="Abid";
     t1.subject="java";
     t1.sallary=12322;
     
     cout<<t1.sallary <<endl;
     cout<<t1.name <<endl;
     
    
    
}*/

//*****************************************

/*
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    
};
class teacher: public Person{
    public:
    string subject;
    string sallary;
};
class Student: public Person {         // Hierarchial Inheritence....
                                         
    public:                             //          perent
    string cgpa;                     //         child    child
};
int main(){
    teacher t1;
    t1.name="Anis";
    t1.subject="java";
    
    Student s1;
    s1.name="Abid";
    s1.cgpa="4.55";
    
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<s1.name<<endl;
    cout<<s1.cgpa<<endl;
}
*/


//*************************************************


#include<iostream>
using namespace std;
class person{
    public:
     string name;
     int age;
};
class child_1add:public person{
    public:
      string address;
};
class knownman:public person{
    public:
     double id;                           // hybread inheritence.......
};
class unknownman:public person,public knownman{
    public:
     string fathername;
     string mothername;
};
class phoneno{
    public:
      string nummber;
};
class forgetid:public person,public phoneno{
    
};


int main(){
  forgetid f1;
   f1.name="Abid";
  f1.nummber="0177869877";
   child_1add c1;
   c1.address="a.sd-block 3";
   
   cout<<f1.name<<endl;
   cout<<f1.nummber<<endl;
   cout<<c1.address<<endl;
}















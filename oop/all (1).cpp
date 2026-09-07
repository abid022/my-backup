#include <bits/stdc++.h>
using namespace std;
class student{
public:
    string* name;
   double* cgpapot;
   student(string nme,double cgpa){
       name=new string;
       *name=nme;
       cgpapot=new double;
       *cgpapot=cgpa;
       
   }
   student(student &cpy){
       name=new string;
       *name=*cpy.name;
       
        cgpapot=new double;
        *cgpapot=*cpy.cgpapot;
   }
   
   void info(){
       cout<<*name<<endl;
       cout<< *cgpapot<<endl;
   }
};
int main() {
	// your code goes here
   student s1{"Abid",9.3};
   s1.info();
   
   
   
   student s2(s1);
   *s2.name="Alu";
   *s2.cgpapot=4.9;
   s2.info();
   
   student s3(s1);
   *s3.cgpapot=6.32;
   s3.info();
   
   
   
}

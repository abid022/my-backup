#include <bits/stdc++.h>
using namespace std;
class student{
  public:
   string *name;
   double *roll;
   
   student(string name,double roll){
       this->name=new string(name);
       this->roll=new double(roll);
       
   }
   student(student&cpy){
       this->name=new string(*cpy.name);
       this->roll=new double(*cpy.roll);
   }
   // distractor;...........
   
   ~student(){
       delete name;
       delete roll;
   }
   void info(){
       cout<<*name<<endl;
       cout<<*roll<<endl;
   }
};
int main() {
	// your code goes here
   student s1{"Abid",23};
   s1.info();
   student s2(s1);
  * s2.name="valu";
  * s2.roll=14;
   s2.info();
}

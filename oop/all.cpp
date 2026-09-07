#include <bits/stdc++.h>
using namespace std;

class stu{
    
   public:
   string name;
   double* cgpaptr;
   
   stu(string name,double cgpa){
       this->name=name;
       cgpaptr=new double;
       *cgpaptr=cgpa;
   }
   stu (stu &obj){
       this->name=obj.name;
       cgpaptr=new double;
       *cgpaptr=*obj.cgpaptr;
   }
    void info(){
        cout<<name<<endl;
        cout<<*cgpaptr<<endl;
    }
};
int main() {
	// your code goes here

	
	stu s1("Abid",4.59);
	
	
	
	stu s2(s1);//nila
	s1.info();
	*(s2.cgpaptr)=9.2;
	s1.info();
	s2.info();
	
	
	






}

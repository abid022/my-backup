#include <bits/stdc++.h>
using namespace std;

 class student{
  
  private:
    string *address;
  public:
   string* name;
   double* cgpa;
   
  student(string name1,double cgp,string addres){
      name=new string;
      *name=name1;
      cgpa=new double;
      *cgpa=cgp;
      address =new string;
      *address=addres;
  }
  student(student &obj){
      name=new string;
      *name=*obj.name;
      cgpa=new double;
      *cgpa=*obj.cgpa;
      address=new string;
      *address=*obj.address;
  }
  
  void setadress(string adress){
      *address=adress;
  }
  string getadress(){
      return *address;
  }
  void info(){
      cout<<*name<<endl;
      cout<<*cgpa<<endl;
      cout<<*address<<endl;
  }
    
};

int main() {
	// your code goes here
   
   student s1{"abid",9.6,"Bogura"};
   student s2(s1);
   student s3(s1);
 * s2.name=" alu";
// * s2.cgpa=9.10;
 * s3.name="  karim";
 * s3.cgpa=5.36;
   s1.info();
   s2.info();
   s3.info();
  
  
   s1.setadress("bogura");
 //  s1.getadress();
  
   cout<< s1.getadress();
   
   
}

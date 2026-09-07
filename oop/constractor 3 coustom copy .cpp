#include <bits/stdc++.h>
using namespace std;

class student{
    private:
    string fathername;
    string mothername;
    
  public:
  string name;
  double roll;
  double class1;
  
  student(string name,double roll,double class1,string fathername,string mothername){
      this->name=name;
      this->roll=roll;                         //this-> to locate object;
      this->class1=class1;
      this->fathername=fathername;
      this->mothername=mothername;
  }
  //coustom copy constractor...
  
  student (student &orgobj){
      cout<<"this is copy constractor"<<endl;
      this->name=orgobj.name;
      this->roll=orgobj.roll;
      this->class1=orgobj.class1;
      this->fathername=orgobj.fathername;
      this->mothername=orgobj.mothername;
  }
  
  void changeclss(double clss){
      
      class1=clss;
  }
  
  void setfathernme(string fathernme){
      fathername=fathernme;
  }
  string getfathernme(){
      return fathername;
  }
  
  void setmothernme(string mothernme){
      mothername=mothernme;
      
  }
  
  string getmothernme(){
      return mothername;
  }
  
  void info(){
      cout<<name<<endl;
      cout<<roll<<endl;
      cout<<class1<<endl;
      cout<<fathername<<endl;
      cout<<mothername<<endl;
  }
  
  
};
int main() {
	

   student t1{"Abid",12,2," beu" ,"meo meoo"};
 
  t1.changeclss(3);
  
  //  t1. info();
/* 
 student t2(t1);
 

 t2.info();  //defoult copy constroctor...

*/
student t2(t1);//coustom copy constractor......
t2.info();


















}

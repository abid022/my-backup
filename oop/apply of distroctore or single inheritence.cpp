// for defoult constroctore............
#include <bits/stdc++.h>
using namespace std;

class person{
  public:              //base...
   string name;
   int age;
   /*person(string name,int age){
       this->name=name;
       this->age=age;
   }*/
  /* person(){
       cout<<"preant cnstroctor"<<endl;
   }*/
   ~person(){
       cout<<"child distroctore"<<endl;
   }
};
class student:public person{
    public:
   double roll;        //dirive...
  /*student(){
      cout<<"child constractor"<<endl;
  }*/
  ~student(){
      cout<<"chiild distroctor"<<endl;
  }
  void info(){
      cout<<"name "<<name<<endl;
      cout<<"age "<<age<<endl;
      cout<<"Roll "<<roll<<endl;
      
  }
};

int main() {
	// your code goes here
    student s1;
    s1.name="abid";
    s1.age=21;
    s1.roll=2321;
    s1.info();
}
 
 // for coustom constroctore...........
 
#include <bits/stdc++.h>
using namespace std;

class person{
  public:              //base...
   string name;
   int age;
   person(string name,int age){
       this->name=name;
       this->age=age;
   }
 
};
class student:public person{
    public:
   double roll;        //dirive...
    student(string name,int age,double roll):person(name,age){
    this->roll=roll;
  }
 
  void info(){
      cout<<"name "<<name<<endl;          
      cout<<"age "<<age<<endl;
      cout<<"Roll "<<roll<<endl;
      
  }
};
int main() {
	// your code goes here
   student s1{"abid",32,12332};
   s1.info();
}
#include <bits/stdc++.h>
using namespace std;
class student {
  private:
  string* adress;
  public:
  string* name;
  double* roll;
  string* result;
  student(string name,double roll,string result,string adress){
     this->name=new string(name);
     this->roll=new double(roll);
     this->result=new string(result);
     this->adress=new string(adress);
  }
      student(student &cpy){
         this->name=new string(*cpy.name);
         this->roll=new double(*cpy.roll);
         this->result=new string(*cpy.result);
         this->adress=new string(*cpy.adress);
      }
         
    void stadress(string adrs){
        *adress=adrs;
    }     
    string getadress(){
        return *adress;
    }
    
    void info(){
        cout<<*name<<endl;
        cout<<*roll<<endl;
        
        cout<<*result<<endl;
        cout<<*adress<<endl;
    }         
         
         
         
         
         
         
         
         
         
         
          
      
};
int main()
{
	// your code goes here
	
	
	student s1("Abid",765,"A+","Bogura");
	
	s1.stadress("Alu");
	s1.getadress();
	
	s1.info();
	student s2(s1);
	*s2.name="Aluu";
	s2.info();
	

}

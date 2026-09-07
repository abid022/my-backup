#include <bits/stdc++.h>
#include <string>
using namespace std;
class teacher{
    private:
    double sallary;
    public:
    //non - perameaterize 
    teacher(){
        dept ="cs";// constractor.
    }
    //perameaterize
    teacher(string n,string s,string dp,double sall){
        name=n;
        sub=s;
        dept=dp;
        
        sallary=sall;
    }
    string name;
    string sub;
    string dept;
    
    void changdpt(string newdept){
        dept=newdept;
    }
  
  void getinfo(){
      cout<<"name :"<<name<<endl;
      cout<<"sub :"<<sub<<endl;
      cout<<"dept :"<<dept<<endl;
  }
    

};

int main() {
	// your code goes here
  // teacher t1;
   /* t1.name="Abid";
    t1.sub="c++";
    t1.setsallary(12213);
    cout<<t1.dept<<endl;
    cout<<t1.getsallary();
*/
teacher t1("Abid","java","SWE",15000);
 t1.getinfo();
 
 
 
}

#include <bits/stdc++.h>
using namespace std;

class teacher{
    private:
     double salarry;
     
    public:
       string name;
       string dept;
       string subject;
      
       
       void changedept(string newdept){
           
           dept=newdept;
       }
    void setsalarry(double s){
        salarry=s;
    }
    double getsalarry(){
        return salarry;
    }
    
};
int main() {
	 
    teacher t1;
    t1.name="Abid";
    t1.dept="SWE";
    t1.subject="oops";
    t1.setsalarry(15400);
    
    teacher t2;
    t2.name="Rahin";
    t2.dept="cs";
    t2.subject="networking";
    t2.setsalarry(23000);
    
    
    cout<< t1.name<<endl;
    cout<<t2.getsalarry()<<endl;
	
	
	
	
	

}

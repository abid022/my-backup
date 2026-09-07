/*
#include<iostream>                 // polymersesom.........
using namespace std;              // runtime overloding.....

class parent{
  public:
   void getinfo(){
       cout<<"parent class"<<endl;
   }
                                   //function overloding......
};
class child:public parent{
  public:
   void getinfo(){
       cout<<"child class"<<endl;
   }
};

int main(){
    child c1;
    c1.getinfo();
    parent p1;
    p1.getinfo();
}
*/

#include<iostream>
using namespace std;
class parent{                             // virtual function.....
    public:
     void getinfo(){
         cout<<"parent class"<<endl;
         
     }
     virtual void hello(){
         cout<<"hello from parent"<<endl;
     }
     
};
class child:public parent{
     public:
      void getinfo(){
          cout<<"child class"<<endl;
      }
      void hello(){
          cout<<"hello from parent \n";
      }
};
int main(){
    
    child c1;
    c1.hello();
    
    //......................... run time corection ...............................
    
    
    #include <bits/stdc++.h>
using namespace std;
class student{
    public:
     void info(){
         cout<<"parent class "<<endl;
     }
     
     virtual void hello(){
         cout<<"hello from parent"<<endl;
     }
};
class child:public student {
    public:
     void info(){
         cout<<"child class"<<endl;
     }
     
     void hello(){
         cout<<"hello from child"<<endl;
     }
};

int main() {
	student* s;
	child c1;
	
	s=&c1;
	s->hello();
   
}

    
    
}
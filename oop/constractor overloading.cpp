#include <bits/stdc++.h>
using namespace std;
class student{
  public:
                                      //polymerpisome...constractor overloding...
  string name;
  
  student(){
      cout<<"non perameterize "<<endl;
  }
  
  student(string name){
      this->name=name;
      cout<<"perameterize "<<endl;
      
  }
};

int main() {
	// your code goes here
 // student s1;  //if...
  
  student s1{"Abid"};
}
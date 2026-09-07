#include <bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int roll;
    float gpa;
    
};
int main() {
    
   /*  student s1;
    
    cin>>s1.name;
    cin>>s1.roll;
    cin>>s1.gpa;
    
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.gpa<<endl;



//**********************************************************


     student s[10];

     cin>>s[0].name;
     cin>>s[0].roll;
     cin>>s[0].gpa;
     
     cin>>s[1].name;
     cin>>s[1].roll;
     cin>>s[1].gpa;
     
     cin>>s[2].name;
     cin>>s[2].roll;
     cin>>s[2].gpa;
     
     
     cout<<s[0].name<<endl;
     cout<<s[1].name<<endl;
     cout<<s[1].roll<<endl;
     cout<<s[2].gpa<<endl;
     
     

*/



student s[3];

  for(int i=0;i<3;i++){
      cin>>s[i].name;
      cin>>s[i].roll;
      cin>>s[i].gpa;
  }

   for(int i=0;i<3;i++){
       cout<<s[i].name<<endl;
       cout<<s[i].roll<<endl;
       cout<<s[i].gpa<<endl;
   }


}

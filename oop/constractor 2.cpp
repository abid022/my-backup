#include <bits/stdc++.h>
using namespace std;
class teacher{
    public:
    string name;
    string sub;
    string dept;
    
    teacher(string n,string s,string d){
        name=n;
        sub=s;                       //constroctor;
        dept=d;
    }
    void changesub(string newsub){
        
        sub=newsub;
    }
    
    void info(){
        cout<<name<<endl;
        cout<<sub<<endl;
        cout<<dept<<endl;
        
        
    }
    
    
    
    
    
    
};
int main(){
    
    string n;
    string s;
    string d;
    
    cin>>n>>s>>d;
   
   teacher t1(n,s,d);
   t1.changesub("oops");
    t1.info();
    
    
    
    
    
}
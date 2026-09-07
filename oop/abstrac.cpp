
#include<iostream>      //abstrac.....
#include<string>
using namespace std;             
class shap{           //Abatract class...
    virtual void draw()=0;  //pure virtual function...
};
class tringle:public shap{
    public:
     void draw(){
         cout<<"this is tringle"<<endl;
         
     }
};
int main(){
    tringle t1;
    t1.draw();
    
    
    
    
    
    
}
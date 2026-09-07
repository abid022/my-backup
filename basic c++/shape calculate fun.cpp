#include <bits/stdc++.h>
using namespace std;

double areaOfcircle(double r){
    int circle;
    circle=3.1314*(r*r);
    return circle;
}
double areaOfrectrangle(double a,double b){
    int rectringle;
    rectringle=(a*b);
    return rectringle;
}
double areaOftrangle(double l,double v){
    return (0.5*(l*v));
}
int main(){
    string choice;
   //double area;
    cout<<"which shape they want to calculate ?"
             
                          
              <<endl;
    cin>>choice;
    if(choice=="circle"){
        double r;
        cout<<"Enter redious !"<<endl;
        cin>>r;
       cout<< areaOfcircle(r);
    }
    else if(choice=="rectringle"){
        double a;
        double b;
        cout<<"Enter lenght,width"<<endl;
        cin>>a;
        cin>>b;
        areaOfrectrangle(a,b);
        cout<< areaOfrectrangle(a,b);
    }
    else if(choice=="tringle"){
        double l;
        double v;
        cout<<"Enter base,hight"<<endl;
        cin>>l>>v;
       cout<< areaOftrangle(l,v);
        
    }
    
    else{
       cout<<"sorry"; 
    }
    
}









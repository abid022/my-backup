#include <bits/stdc++.h>
using namespace std;
/*
int main() {

  
  int a=10;
  int* ptr= &a;
  int**ptr2=&ptr;
  int nnullpte=NULL;
  
  cout<<ptr<<endl;
  cout<<&ptr<<endl;
  cout<<&ptr2<<endl;
  cout<<*(ptr2)<<endl;
  cout<<*(ptr)<<endl;
  cout<<**(ptr2)<<endl;
  cout<<nnullpte<<endl;
}
  */
  //...............pass by reference.........
  
 /*   void changeA(int* ptr){
         *ptr=20;
    }
    int main(){
        int a=10;
        changeA(&a);
        cout<<a;
        
        
        
    }
  */
  
  
  //.................alias..........
  
  /*
  void changeA(int &b){
      
      b=30;
      
  }
  int main(){
      int a=10;
      changeA(a);
      cout<<a;
  }
  
  */
  int main(){
    int arr[]={1,2,3,4,5};  
      
      int a=10;
      int* ptr=&a;
      int* ptr2=&a;
      
    /*  cout<<ptr<<endl;   //incriment or decerement..
      ptr++;
      cout<<ptr<<endl;
      
      cout<<ptr2<<endl;
      ptr2--;
      cout<<ptr2<<endl;*/
      
      //.......
      
    /*  cout<<ptr2<<endl;
      ptr2=ptr2+1;
      ptr2 = ptr2 + 2;        //Add or subtraction..
      
      cout<<ptr2;
      */
      
     /*
     
     cout<<*(arr)<<endl;//1
      cout<<*(arr+1)<<endl;//2   //ptr arr add;;
      cout<<*(arr+2)<<endl;//3 
      
     */
    
    
    /* 
     int *potr2; //100
     int *potr1=potr2+2; //108              subtrac
     cout<<potr1-potr2;  //ans is 2 bit.
     
     */
     
     int* ptr1;
     int* ptr21=ptr1+1;
     cout<<&ptr1<<endl;
     cout<<&ptr21<<endl;
      cout<<(ptr1 < ptr21)<<endl;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
  }
  
  
  
  
  
  
  
  
  
  


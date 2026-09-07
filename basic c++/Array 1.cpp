#include <bits/stdc++.h>

using namespace std;

int main() {
    /*	int mark[4]={12,56,54,67};             //array....
    	int price[]={26,35,64,7,3};
          
          cout<<mark[2]<<endl;
          cout<<price[0]<<endl;
      */

    /*  int marks[]={45,69,31,99,33,52};
      int size=6;
      
      for(int i=0;i<size;i++){
          cout<<marks[i]<<endl;
      }
      */


    //input array;;;;;;;

    /*  int size=5;
      int marks[size];
      for(int i=0;i<size;i++){
          cin>>marks[i];
          cout<<marks[i]<<endl;
      }
     */

    //find smallest/lergest velu................


    int num[] = {
        56,
        32,
        6,
        5,
        3
    };
    int size = 5;

      int smallest=INT_MAX;
      int lergest=INT_MIN;
    for (int i = 0; i < size; i++) {
        if (num[i] < smallest) {
            smallest = num[i];
       
        }
         if(num[i]>lergest){
             lergest=num[i];
         }
     //smallest=min(num[i],smallest);
     //lergest=max(num[i],lergest);
    }
    cout << smallest << endl;
    cout<<lergest<<endl;



}
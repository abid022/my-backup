#include<iostream>

using namespace std;

    
    
/*
int liniarserch(int arr[],int size,int terget){
    for(int i=0;i<size;i++){
        if(arr[i]==terget){
            return i;
        }
    }
    return -1;
        
}                        //liniear serch .......
int main(){
    
 int arr[]={5,3,9,8,2,4};
 int size=6;
 int terget=9;
 
    cout<<liniarserch(arr,size,terget);
    
    
}*/
void reverseary(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
}

        
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    
    reverseary(arr,size);
    
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
   
    cout<<endl;
    
    
    
}

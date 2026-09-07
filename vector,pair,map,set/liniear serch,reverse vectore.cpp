#include <iostream>
#include<vector>
using namespace std;
/*int liniaerserch(vector<int>&vet,int &terget){
    for(int i:vet){
        if(i==terget){
            return i;
        }
    }
    return -1;
    
}
int main(){
    vector<int>vec={1,2,3,7,8};
    int terget=3;
    cout<<liniaerserch(vec,terget)<<endl;
}*/


void revtable(vector<int>&vec){
    int start=0,end=vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }

}
int main(){
    vector<int>vect={1,2,3,4};
  
    revtable(vect);
    for(int i:vect){
        cout<<i;
    }
    cout<<endl;

    
    
    
    
    
    
    
}




























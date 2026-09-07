#include<iostream>

using namespace std;
int main() {
    int size = 5;
    int ary[] = {
        5,
        3,
        4,
        2,
        6
    };
    int index=0;

    int smallest = 50;
    for (int i = 0; i < size; i++) {
        if (ary[i] < smallest) {
           smallest = ary[i];
           index=i;
        }
    }
    cout <<index ;
}
/*question: count the number of element in given array greater
than a given number x*/
#include<iostream>
using namespace std;
int main(){
    int arr[5]={ 2,3,8,6,3};
    int x=5;
    int count=0;
    for(int i=0;i<=4;i++){
     if(arr[i]>x) count++;
    }
    cout<<count;
}
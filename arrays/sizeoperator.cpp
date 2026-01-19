//size of an array without 0r find the number of elements 

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n =sizeof(arr)/4;
    arr[0]=100;//update element 
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
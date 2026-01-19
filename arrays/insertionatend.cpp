#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6};
    int n=sizeof(arr)/4;//n=size of array or number of elememnts present in array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    int x=30;//element inserted to be end in array
    arr[n]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
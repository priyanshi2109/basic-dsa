#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    int pos=3;//where element to be inserted
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[2] = 6;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
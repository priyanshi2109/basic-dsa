#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/4;
    int x=6;//element ot be inserted at begining 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
    n++;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
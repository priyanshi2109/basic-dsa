/* what is an array : data structure is which stores collections of homogeneous items 


ex: int,char,bool
* contiguous memory 
int arr[5]-declaration
arr[0]=4   // initializing of an array element 
int arr[5]=1,2,3,4,5 //declaration + initialization



*/
//intialization of aaray elements input by user
/* 

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cout<<" enter array element : ";
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }

}
    */

// another method of array initialization 


#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    arr[0]=100;//update element 
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}
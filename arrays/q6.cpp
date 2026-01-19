/*  question: given an array of integers ,change the value of all odd indexed elements to its second 
multiple and increament 10all even indexed
ex -
arr[5]= { 1,2,3,4,5,}
then convert into arr[5]={11,4,13,8,15}*/
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        if(i%2==0 or i==0){
            cout<<arr[i]+10<<" ";
        }
        else{
            cout<<arr[i]*2<<" ";
        }
       // cout<<arr[i]<<" ";
    }
}

//arrays are pass by reference
#include<iostream>
using namespace std;
void change( int arr[]){
    arr[0]=9;

}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<=2;i++){
        change(arr);
        cout<<arr[i]<<" ";
    }
}
/* question: find the diff b/w the sum of elements at even indices
to the sum of elements at odd indices */

#include<iostream>
using namespace std;
int main(){
    int arr[]={7,9,5,6,3,5,9};
    //sum of even indices will be= 24
    //sum of odd indices will be=20
    int n=sizeof(arr)/4;
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<n;i++){
        if(i%2==0 or i==0){
            sumeven=sumeven+arr[i];
        }
    cout<<endl;
    if(i%2!=0){
        sumodd=sumodd+arr[i];
    }
    }
    cout<<" sum of all even index element = "<<sumeven;
    cout<<endl;
     cout<<" sum of odd index element= "<<sumodd;
}
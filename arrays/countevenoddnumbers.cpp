#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    // number of odd elements =5
    //number of even elements =4
    int n=sizeof(arr)/4;
    int counteven =0;
    int countodd=0;
    for(int i=0;i<n;i++){
        if( arr[i]%2==0){
            counteven=counteven+arr[i];
        }
        // else{
        //     countodd=countodd+arr[i];
        // }
    }
    cout<<"number of even elements= "<<counteven;
   // cout<<" number of odd elements= "<<countodd;

}

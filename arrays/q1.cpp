/* calculate the sum of all elements in array */




// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,5};
//     int n=sizeof(arr)/4;
//     int count=0;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//         //int d= arr[i];
        
//         count=count+arr[i];
//         //cout<<endl;

        
//     }
//             cout<<endl;
//     cout<<"sum of digits = "<<count;
    
    
// }



#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,6,7};
    int n=sizeof(arr)/4;
    int count =0;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
        count=count+arr[i];
    }
    cout<<count;

}




















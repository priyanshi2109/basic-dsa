/*question: reverse the array elements */



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";}
//     cout<<endl;
// int i=0;
// int j=n-1;
// while(i<j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     i++;
//     j--;
// }
// for(int i=0;i<n;i++){
   // cout<<arr[i]<<" ";}
//}


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={9,7,67,56,3,2};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int i=0;
//     int j=n-1;
//     int temp;
//     while(i<j){
//         temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     int j=n-1;
//     int temp;
//     while(i<j){
//     temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     i++;
//     j--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



#include<iostream>
using namespace std;
int main(){
cout<<"enter n: ";
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int i=0;
    int j=n-1;
    int temp;
    while(i<j){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
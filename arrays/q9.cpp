/* find the second largest number in an array */
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={ 1,2,6,9,10};
//     int mx =INT8_MIN;
    
//     for(int i=0;i<=4;i++){
//         mx=max(mx,arr[i]);
//     }

//     cout<<mx<<endl;
//     int smax=INT8_MIN;
//     for(int i=0;i<=4;i++){
    
    
//     if(arr[i]!=mx) smax=max(smax,arr[i]);
//     }
//     cout<<smax;
// }



#include<iostream>
using namespace std;
int main (){
    int arr[]={9,7,5,11,8};
    int n=sizeof(arr)/4;
    int max=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
 cout<<"maximum element is ="<<max;
 cout<<endl;
 int secondlarge=arr[0];
 for(int i=0;i<n;i++){
    if(secondlarge>max){
        secondlarge=max;
    }

}
cout<< "secondlarge element is ="<<secondlarge<<" ";
}
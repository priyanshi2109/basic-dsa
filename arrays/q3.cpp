/* find the maximum in array elements */


// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={1,2,3,4,5,6,7,9};
//   int n=sizeof(arr)/4;
//   int mx=arr[0];
//   for(int i=1;i<n;i++){
  
//     if(arr[i]>mx) mx=arr[i];
    
//   }
//   cout<<mx;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={1,2,3,4,5,6,7};
//   int n=sizeof(arr)/4;
//   int max=arr[0];
//   for(int i=0;i<n;i++){
//     if (arr[i]>max)
//       max=arr[i];
//   }
//   cout<<max;
// }

#include<iostream>
using namespace std;
int main(){
  int arr[]={3,4,5,6,77};
  int max=arr[0];
  for(int i=0;i<=4;i++){
  if(arr[i]>max){
    max=arr[i];
  }
  }
  cout<<max;
}

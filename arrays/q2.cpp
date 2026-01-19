/* question: count the product of all the elements */


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=sizeof(arr)/4;
//     int product=1;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//         product=product*arr[i];
//     }
//     cout<<endl;
//     cout<<"product of all elements : "<<product;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]= {2,3,4,5,6};
    int n=sizeof(arr)/4;
    int product=1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        product=product* arr[i];

    }
    cout<<endl;
    cout<<" product is ="<<product;

}
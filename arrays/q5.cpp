/*given an integer n. create an aray containing squares of all natural numbers 
till n and print the elements of the array
ex- 1,4,9,16 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    // int square;
    // int arr[n];
    for(int i=1;i<=n;i++){
       
        cout<<i*i<<" ";
    }


}


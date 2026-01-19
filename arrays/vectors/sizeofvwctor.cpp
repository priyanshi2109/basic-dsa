#include<iostream>
#include<vector>
using namespace std;
int main(){
//     vector<int>vec={ 1,2,3,4,};
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;
// cout<<vec[3]<<endl;

vector<int>vec;
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.push_back(1);
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.push_back(2);
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.push_back(3);
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.push_back(4);
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.resize(8);
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;


vec.pop_back();
vec.pop_back();
vec.pop_back();
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;






}


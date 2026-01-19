#include<iostream>
using namespace std;
class Boy{
    public: 
    string name ;
    int age;
    int cls;
    Boy(){

    }
Boy (string n,int a,int c){
    this->name =n;
    this->age=a;
    this->cls=c;
}
    
};
int main(){
    Boy b1(" shivam  vishwakarma " ,16,9);
    cout<< b1.name<<" "<< b1.age<<" "<< b1.cls;
    // Boy b1;
    // b1.name=" shivam vishwakarma ";
    // b1.age=16;
    // b1.cls =9;
    // cout<<b1.name<<" "<< b1.age<<" "<<b1.cls;
}